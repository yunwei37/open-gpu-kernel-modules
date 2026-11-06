# ModelOS direct RM hardware test

This branch is based on NVIDIA 615.78.08. It builds RM into the ModelOS Linux
kernel without character devices, ioctl/mmap, procfs, UVM, a module loader,
libcuda or a CUDA user runtime. The test is an opt-in **built-in kernel entry**,
not an `insmod` module. No GPU hardware was used to develop or validate this
branch. Successful compilation and a no-GPU VM boot are not GPU acceptance.

## Entry and result

Boot with `modelos.nv_test=1 modelos.nv_gpu=0`. The latter selects index zero
from `nvidia_get_gpuid_list`. Kernel callers can instead include
`kernel-open/nvidia/modelos-submit.h` and call `modelos_nv_test_run(index)`
after driver init. Calls are serialized. Return zero is the complete test
success; `-ENODEV` means no selected GPU and is **not** hardware success.

The embedded PTX kernel targets CUDA `sm_120` (the RTX 5090 test target) and
writes `0x4d4f534b` to a buffer initialized by the CPU to `0xdeadbeef`. No CPU
path writes the expected output or completion. Every launch has one block and
one thread; a QMD release semaphore writes its unique sequence number. The
CPU requires both that semaphore and USERD GPGet catching GPPut, then checks
the GPU output. There are 1,025 launches on a 1,024-entry ring, exercising one
wrap. Each launch has a two-second timeout. RM cleanup must also succeed.

The hardware success line below is **expected, not yet observed**:

```text
MODELOS_NVTEST PASS launches=1025 wraps=1 output=0x4d4f534b completion=1025 cleanup=ok cpl=0 mm=none
```

`FAIL`, `TIMEOUT`, `BAD_OUTPUT`, `QUARANTINED` or `SKIP` is not acceptance. A
timeout or failed drain/cleanup retains the RM client, adapter reference and
DMA storage; subsequent calls fail until the owning guest/device is reset.
Do not free or reuse those buffers while the GPU might still access them.

## Build from the public forks

Use Linux branch `modelos/v6.18.57` from
<https://github.com/yunwei37/linux>. Exact tested commit pairs are pinned in
`kernel/sources.env` and reported in `docs/kernel-trim/README.md` in ModelOS.
The Linux branch includes `modelos_nvidia_defconfig`.

The **build machine** needs Clang/LLVM 19, normal Linux build dependencies,
Python 3 and a CUDA `ptxas` supporting SM120. The test was built with ptxas
12.9.86, compiling PTX 8.7. This is offline GPU assembly, not a guest CUDA
runtime. An isolated tool directory can be populated with NVIDIA's
`nvidia-cuda-nvcc-cu12==12.9.86` wheel; it provides `nvidia/cuda_nvcc/bin/ptxas`.
NVIDIA's [PTX ISA 8.7](https://docs.nvidia.com/cuda/archive/12.8.2/parallel-thread-execution/index.html)
documents SM120 support. The Kbuild rule invokes ptxas and generates the cubin
header in the output directory; no generated binary/header is committed.

For hardware, supply the **matching 615.78.08** firmware as uncompressed
files. For GB20x, `nv-firmware.h` resolves the GSP and graphics microcode names
to `nvidia/615.78.08/gsp_ga10x.bin` and
`nvidia/615.78.08/ucodes_ga10x.bin`. Include the matching optional
`gsp_log_ga10x.bin` if supplied by the driver package. Obtain these from the
matching NVIDIA driver package without installing a host driver. The guest
has built-in-only firmware lookup: no filesystem or user fallback.

Example commands on the **serve lane's build Workspace**, with `LINUX`, `NV`,
`OUT`, `FW` and `PTXAS` set to absolute paths in that Workspace:

```sh
export PTXAS=/path/to/nvidia/cuda_nvcc/bin/ptxas
test -f "$FW/nvidia/615.78.08/gsp_ga10x.bin"
test -f "$FW/nvidia/615.78.08/ucodes_ga10x.bin"
make -C "$NV" -j4 kernel-open/nvidia/nv-kernel.o_binary
ln -s "$(realpath "$NV/kernel-open")" "$LINUX/drivers/modelos-nvidia"
make -C "$LINUX" O="$OUT" LLVM=1 modelos_nvidia_defconfig
"$LINUX/scripts/config" --file "$OUT/.config" \
  --set-str EXTRA_FIRMWARE_DIR "$FW" \
  --set-str EXTRA_FIRMWARE 'nvidia/615.78.08/gsp_ga10x.bin nvidia/615.78.08/ucodes_ga10x.bin'
make -C "$LINUX" O="$OUT" LLVM=1 olddefconfig
make -C "$LINUX" O="$OUT" LLVM=1 PTXAS="$PTXAS" -j4 bzImage
```

If the integration symlink already exists, verify its resolved target rather
than replacing it. The firmware directory must contain the paths above; an
extracted package with a flat `firmware/` directory must first be arranged in
that layout. No firmware blobs or CUDA runtime libraries are redistributed
in this source branch.

The designated GPU test lane uses its assigned RTX 5090.
Use its existing **guest** VFIO QEMU launch and keep its device/ROM/
BAR/IOMMU arguments. Replace the guest kernel with `$OUT/arch/x86/boot/bzImage`,
omit initramfs, keep at most four vCPUs/four GiB, and append:

```text
console=ttyS0,115200 earlyprintk=serial,ttyS0,115200 keep_bootcon printk.time=1 modelos.nv_test=1 modelos.nv_gpu=0 nvidia.NVreg_DynamicPowerManagement=0x00
```

A host-side runner is included so the test has an explicit acceptance command:

```sh
python3 "$NV/kernel-open/nvidia/run-modelos-test.py" \
  --kernel "$OUT/arch/x86/boot/bzImage" --log "$LOG" \
  --lock "$GPU_LOCK" --block-marker "$RECOVERY_MARKER" \
  --device "$GPU_BDF" --device "$AUDIO_BDF"
# Repeat --device for any other already-assigned companion controllers.
# Add --dry-run to print the command without inspecting devices or running QEMU.
```

The runner uses four vCPUs/four GiB, KVM/Q35 and a 128-GiB PCI aperture (not
128 GiB of guest RAM). It preserves the owner's shared GPU lock/block marker,
requires already-bound VFIO devices including an NVIDIA display/3D function,
starts only its own guest, and quits via QMP after the success line and four
busy workers. It never binds/resets/recovers a host device. It checks device
identity/driver again after VM exit and records a block marker if they changed.
A JSON result accompanies the full serial log. The hardware runner was checked
with --dry-run only; no GPU execution or post-GPU health result is claimed here.

Retain serial output for up to 180 seconds. Require the exact success marker,
no RM/firmware/channel errors, and the subsequent four ModelOS workers at
CPL 0/mm=none. Save the two fork SHAs, config/image hashes, firmware hashes,
ptxas version, cubin hash and full guest log. Repeat on a fresh guest/device
reset to qualify teardown. The trim lane does not launch this GPU guest.

## Implementation and limits

The sequence is: wait for PCI probes; enumerate and hold `nvidia_dev_get`;
create root/device/subdevice; query IDs, classes and internal SM version;
allocate an RM-owned VA space, virtual-memory object, TSG/context share;
allocate cached CPU-mapped system RAM and fixed, snooped GPU mappings;
create USERMODE doorbell, GPFIFO, USERD, error notifier and compute object;
load cubin text/constant data; construct QMD v5; publish push/ring/USERD with
barriers; ring the MMIO doorbell; wait for GPU completion and GPGet; disable
and free the channel; unmap/free memory and doorbell; free the RM client and
release the adapter. Seven `modelos_rm_*` bridge methods call RM directly.

The restricted cubin reader verifies bounds, SM120, register/parameter/stack
metadata and rejects runtime relocations, extra constant banks and nonzero user-declared
stack/local/shared requirements (the reserved shared area is bounded by 1 KiB). Nonallocated debug relocations are ignored. The
store test uses no local memory or spill; it is not a general cubin linker,
GPU compiler, LLM backend or replay of a previous Linux/CUDA context.
Arbitrary kernels need resource handling and relocation support beyond this
test. Kernel/GPU mappings are owned by RM; no CPU user VM or UVM service is
restored. All command/completion storage is cached system RAM with DMA snoop;
only the doorbell is MMIO. General VRAM CPU-copy semantics are not asserted.

QMD bit positions are copied, with the NVIDIA MIT notice, from
[open-gpu-doc 9fdf5c406200](https://github.com/NVIDIA/open-gpu-doc/blob/9fdf5c4062007929d9f4e6cbad9c9771fe61b880/classes/compute/clcec0qmd.h).
The launch/reference ABI is
[tinygrad NV backend 6b7b018dae9e](https://github.com/tinygrad/tinygrad/blob/6b7b018dae9ec20264f2a4b6a1322da1bb49b141/tinygrad/runtime/ops_nv.py)
and NVIDIA's `src/nvidia/src/kernel/rmapi/nv_gpu_ops.c`. Unlike the tinygrad
user transport, this test binds an RM-owned TSG VA and uses no UVM ioctls.
Linux-first/kexec and L1/L2 record/replay experiments require their own GPU
state handoff/reset validation; this cold-init test does not establish them.
