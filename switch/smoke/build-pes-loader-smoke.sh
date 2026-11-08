#!/usr/bin/env bash
set -Eeuo pipefail
ROOT=/project
NXVK=/work
OUT=$ROOT/artifacts/nxvk

mkdir -p "$OUT"

echo "==> Build minimal libnx startup probe with standard switch_rules"
make -C "$ROOT/switch/smoke/startup_probe" clean all
cp "$ROOT/switch/smoke/startup_probe/pes_startup_probe.nro" "$OUT/pes_startup_probe.nro"
test -s "$OUT/pes_startup_probe.nro"
ls -lh "$OUT/pes_startup_probe.nro"

echo "==> Stage NXVK newlib compatibility shim for standard libnx build"
mkdir -p "$ROOT/switch/smoke/pes-loader/compat"
cp "$NXVK/switch/smoke/nvk_compat.c" "$ROOT/switch/smoke/pes-loader/compat/nvk_compat.c"

echo "==> Build PES-owned loader smoke using standard libnx switch_rules"
make -C "$ROOT/switch/smoke/pes-loader" clean all
cp "$ROOT/switch/smoke/pes-loader/pes_loader_smoke.nro" "$OUT/pes_loader_smoke.nro"
test -s "$OUT/pes_loader_smoke.nro"
ls -lh "$OUT/pes_loader_smoke.nro"
