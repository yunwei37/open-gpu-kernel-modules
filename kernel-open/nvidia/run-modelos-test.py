#!/usr/bin/env python3
"""Bounded VFIO guest test. Never bind, reset or recover a host device."""
import argparse
import fcntl
import json
from pathlib import Path
import re
import socket
import subprocess
import threading
import time

p = argparse.ArgumentParser(description=__doc__)
p.add_argument("--kernel", type=Path, required=True)
p.add_argument("--log", type=Path, required=True)
p.add_argument("--lock", type=Path, required=True, help="shared with every other user of this GPU")
p.add_argument("--block-marker", type=Path, required=True, help="existing owner recovery/block marker")
p.add_argument("--device", action="append", required=True, help="assigned VFIO PCI BDF; repeat for its companion devices")
p.add_argument("--gpu-index", type=int, default=0)
p.add_argument("--timeout", type=float, default=180)
p.add_argument("--dry-run", action="store_true", help="print command only; no device inspection or QEMU")
a = p.parse_args()
a.device = [d.lower() for d in a.device]
if not a.kernel.is_file() or a.gpu_index < 0 or a.timeout <= 0:
    p.error("kernel must exist; index/timeout must be valid")
if len(set(a.device)) != len(a.device) or any(not re.fullmatch(r"[0-9a-fA-F]{4}:[0-9a-fA-F]{2}:[0-9a-fA-F]{2}\.[0-7]", d) for d in a.device):
    p.error("each device must be a unique explicit PCI BDF")
qmp = a.log.resolve().with_suffix(".qmp.sock")
args = ["qemu-system-x86_64", "-machine", "q35,accel=kvm", "-cpu", "host,host-phys-bits=on",
        "-global", "q35-pcihost.pci-hole64-size=128G", "-smp", "4", "-m", "4096",
        "-nodefaults", "-display", "none", "-serial", "stdio", "-monitor", "none", "-no-reboot",
        "-qmp", f"unix:{qmp},server=on,wait=off", "-kernel", str(a.kernel.resolve()),
        "-append", "console=ttyS0,115200 earlyprintk=serial,ttyS0,115200 keep_bootcon printk.time=1 "
        f"modelos.nv_test=1 modelos.nv_gpu={a.gpu_index} nvidia.NVreg_DynamicPowerManagement=0x00"]
for d in a.device:
    args += ["-device", f"vfio-pci,host={d}"]
if a.dry_run:
    print(json.dumps({"dry_run": True, "command": args}, indent=2))
    raise SystemExit(0)

def devices():
    out = {}
    for d in a.device:
        base = Path("/sys/bus/pci/devices") / d
        try:
            out[d] = {"vendor": (base / "vendor").read_text().strip(),
                      "class": (base / "class").read_text().strip(),
                      "driver": (base / "driver").resolve(strict=True).name}
        except OSError as e:
            out[d] = {"error": str(e)}
    return out

def qmp_quit():
    with socket.socket(socket.AF_UNIX, socket.SOCK_STREAM) as s:
        s.settimeout(3)
        s.connect(str(qmp))
        f = s.makefile("rwb", buffering=0)
        f.readline()
        for command in ("qmp_capabilities", "quit"):
            f.write((json.dumps({"execute": command}) + "\n").encode())
            while True:
                row = f.readline()
                if not row or "return" in json.loads(row) or "error" in json.loads(row):
                    break

a.lock.parent.mkdir(parents=True, exist_ok=True)
with a.lock.open("a+") as lock:
    try:
        fcntl.flock(lock, fcntl.LOCK_EX | fcntl.LOCK_NB)
    except BlockingIOError:
        raise SystemExit("GPU busy: the shared ownership lock is held")
    if a.block_marker.exists():
        raise SystemExit(f"GPU work blocked by {a.block_marker}; owner recovery required")
    before = devices()
    if (any(v.get("driver") != "vfio-pci" or v.get("vendor") in ("0xffff", "0xffffffff") for v in before.values()) or
        not any(v.get("vendor") == "0x10de" and v.get("class", "").startswith("0x03") for v in before.values())):
        raise SystemExit("Assigned devices must already use vfio-pci and include NVIDIA: " + json.dumps(before))
    a.log.parent.mkdir(parents=True, exist_ok=True)
    qmp.unlink(missing_ok=True)
    state = {"pass": False, "ready": False, "failed": False, "busy": set()}
    finished = threading.Event()
    started = time.monotonic()
    with a.log.open("w", buffering=1) as log:
        log.write("MODELOS_QEMU " + json.dumps(args) + "\n")
        process = subprocess.Popen(args, stdin=subprocess.DEVNULL, stdout=subprocess.PIPE,
                                   stderr=subprocess.STDOUT, text=True, bufsize=1)
        def read_output():
            for line in process.stdout:
                log.write(line)
                if "MODELOS_NVTEST PASS launches=1025 wraps=1 output=0x4d4f534b completion=1025 cleanup=ok cpl=0 mm=none" in line:
                    state["pass"] = True
                if "MODELOS_READY workers=4" in line:
                    state["ready"] = True
                if re.search(r"MODELOS_NVTEST (?:FAIL|SKIP|TIMEOUT|BAD_OUTPUT|QUARANTINED)", line):
                    state["failed"] = True
                m = re.search(r"MODELOS_BUSY cpu=(\d+) elapsed_s=(\d+).*cpl=0 mm=none", line)
                if m and int(m[2]) >= 10:
                    state["busy"].add(int(m[1]))
                if (state["pass"] and state["ready"] and state["busy"] == {0, 1, 2, 3}) or (state["failed"] and state["ready"]):
                    finished.set()
        reader = threading.Thread(target=read_output, daemon=True)
        reader.start()
        while process.poll() is None and not finished.wait(0.2) and time.monotonic()-started < a.timeout:
            pass
        timed_out = process.poll() is None and not finished.is_set()
        if process.poll() is None:
            try:
                qmp_quit()
                process.wait(timeout=10)
            except (OSError, ValueError, subprocess.TimeoutExpired):
                process.terminate()
                try:
                    process.wait(timeout=5)
                except subprocess.TimeoutExpired:
                    process.kill()
                    process.wait()
        reader.join(timeout=5)
    time.sleep(3)
    after = devices()
    healthy = before == after
    if not healthy:
        a.block_marker.parent.mkdir(parents=True, exist_ok=True)
        a.block_marker.write_text("Assigned VFIO device identity/driver changed after ModelOS guest; stop GPU work and request owner recovery.\n")
    result = {"pass": bool(state["pass"] and state["ready"] and not state["failed"] and
                          state["busy"] == {0, 1, 2, 3} and not timed_out and process.returncode == 0 and healthy),
              "kernel_test_pass": state["pass"], "workers": sorted(state["busy"]), "timeout": timed_out,
              "qemu_exit": process.returncode, "device_health_unchanged": healthy,
              "before": before, "after": after, "command": args, "wall_seconds": time.monotonic()-started}
    a.log.with_suffix(".json").write_text(json.dumps(result, indent=2) + "\n")
    qmp.unlink(missing_ok=True)
    print(json.dumps(result, indent=2))
    raise SystemExit(0 if result["pass"] else 1)
