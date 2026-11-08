#!/usr/bin/env python3
"""Validate the locally supplied PES 2017 Xbox 360 XEX target."""
from __future__ import annotations

import argparse
import hashlib
from pathlib import Path


def read_xex_info(data: bytes) -> tuple[int, int]:
    if len(data) < 0x18 or data[:4] != b"XEX2":
        raise ValueError("not an XEX2 executable")

    count = int.from_bytes(data[0x14:0x18], "big")
    table_end = 0x18 + count * 8
    if table_end > len(data):
        raise ValueError("truncated XEX optional-header table")

    execution_offset = None
    for index in range(count):
        entry = 0x18 + index * 8
        key = int.from_bytes(data[entry:entry + 4], "big")
        value = int.from_bytes(data[entry + 4:entry + 8], "big")
        if key == 0x00040006:
            execution_offset = value
            break

    if execution_offset is None or execution_offset + 16 > len(data):
        raise ValueError("missing or truncated XEX execution-info header")

    version = int.from_bytes(data[execution_offset + 4:execution_offset + 8], "big")
    title_id = int.from_bytes(data[execution_offset + 12:execution_offset + 16], "big")
    return title_id, version


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("xex", type=Path)
    parser.add_argument("--title-id", default="0x4A3007D1")
    parser.add_argument("--version", default="0x00000012")
    args = parser.parse_args()

    try:
        data = args.xex.read_bytes()
        title_id, version = read_xex_info(data)
        expected_title = int(args.title_id, 0)
        expected_version = int(args.version, 0)
    except (OSError, ValueError) as exc:
        parser.error(str(exc))

    digest = hashlib.sha256(data).hexdigest()
    print(f"XEX: {args.xex}")
    print(f"Title ID: 0x{title_id:08X}")
    print(f"XEX version: 0x{version:08X}")
    print(f"Size: {len(data)} bytes")
    print(f"SHA-256: {digest}")

    if title_id != expected_title:
        parser.error(f"unexpected title ID 0x{title_id:08X}; expected 0x{expected_title:08X}")
    if version != expected_version:
        parser.error(f"unexpected XEX version 0x{version:08X}; expected 0x{expected_version:08X}")
    print("XEX target validation: PASS")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
