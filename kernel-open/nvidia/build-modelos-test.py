#!/usr/bin/env python3
"""Build the SM120 store fixture with ptxas; embed only its GPU cubin."""
import argparse
import hashlib
import os
from pathlib import Path
import struct
import subprocess

p = argparse.ArgumentParser()
p.add_argument("--ptxas", default=os.environ.get("PTXAS", "ptxas"))
p.add_argument("source")
p.add_argument("header")
a = p.parse_args()
header = Path(a.header)
header.parent.mkdir(parents=True, exist_ok=True)
cubin = header.with_suffix(".cubin")
subprocess.run([a.ptxas, "-arch=sm_120", "-O2", "-v", a.source, "-o", str(cubin)], check=True)
b = cubin.read_bytes()
assert b[:6] == b"\x7fELF\x02\x01"
h = struct.unpack_from("<16sHHIQQQIHHHHHH", b)
assert h[2] == 190 and (h[7] >> 8) & 0xff == 120
sh = [struct.unpack_from("<IIQQQQIIQQ", b, h[6] + i*h[11]) for i in range(h[12])]
st = b[sh[h[13]][4]:sh[h[13]][4]+sh[h[13]][5]]
sections = {st[x[0]:st.index(0, x[0])].decode(): x for x in sh}
text = sections[".text.modelos_store"]
const = sections[".nv.constant0.modelos_store"]
assert text[5] and text[5] <= 0x6000 and const[5] <= 0x1000
for x in sh:
    if x[1] in (4, 9):
        assert x[7] < len(sh) and not (sh[x[7]][2] & 2), "runtime relocation unsupported"
def attrs(name):
    x = sections[name]
    pos, end = x[4], x[4] + x[5]
    while pos < end:
        typ, attr, size = struct.unpack_from("<BBH", b, pos)
        n = size if typ == 4 else 0
        assert pos+4+n <= end
        yield attr, b[pos+4:pos+4+n]
        pos += 4+n
info = dict(attrs(".nv.info"))
regs = struct.unpack_from("<II", info[0x2f])[1]
stack = struct.unpack_from("<II", info[0x12])[1]
param = dict(attrs(".nv.info.modelos_store"))[0x0a]
_, base, size = struct.unpack_from("<IHH", param)
assert 0 < regs <= 32 and stack == 0 and base == 0x380 and size == 8
body = "// SPDX-License-Identifier: MIT\n/* Generated GPU fixture; no CPU user executable. */\n"
body += "static const unsigned char modelos_store_cubin[] __attribute__((aligned(8))) = {\n"
body += "".join("    " + ",".join(f"0x{x:02x}" for x in b[i:i+16]) + ",\n" for i in range(0, len(b), 16))
body += "};\n"
temporary = header.with_suffix(".tmp")
temporary.write_text(body)
temporary.replace(header)
print(f"MODELOS_TEST_CUBIN sm_120 text={text[5]} regs={regs} param_base={base} param_size={size} sha256={hashlib.sha256(b).hexdigest()}")
