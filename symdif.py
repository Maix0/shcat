#!/usr/bin/env python3

import subprocess
import os

archive_files = [
    "libaq.a",
    "libast.a",
    "libexec.a",
    "libgmr.a",
    "libline.a",
    "libme.a",
    "libparser.a",
    "libsh.a",
]
build_dir = "./build/"
binary_file = "./minishell"


dump_archive = subprocess.run(
    ["/usr/bin/env", "readelf", "--symbols", "--wide"]
    + [f"{build_dir}/{name}" for name in archive_files],
    text=True,
    capture_output=True,
)
dump_binary = subprocess.run(
    ["/usr/bin/env", "readelf", "--symbols", "--wide"] + [binary_file],
    text=True,
    capture_output=True,
)

if dump_archive.returncode != 0 or dump_binary.returncode != 0:
    print("Error when getting the symbols out of the objects files or binary (or both)")
    print(f"{dump_archive.stderr}")
    print(f"{dump_binary.stderr}")
    exit(1)

symbols_archive = set()
symbols_binary = set()

for line in dump_archive.stdout.split('\n'):
    words = line.split()
    if (len (words) >= 8 and words[3] == 'FUNC'):
        symbols_archive.add(words[7])

for line in dump_binary.stdout.split('\n'):
    words = line.split()
    if (len (words) >= 8 and words[3] == 'FUNC'):
        symbols_binary.add(words[7])

diff = list(symbols_binary - symbols_archive)
diff.sort()
for sym in diff:
    print(f"{sym}")


