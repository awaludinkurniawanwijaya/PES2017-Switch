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

echo "==> Stage the exact upstream nvk_tri SPIR-V headers used by the reference sample"
mkdir -p "$ROOT/switch/smoke/pes-loader/build/shaders"
cp "$NXVK/switch/smoke/shaders/tri_vert.h" "$NXVK/switch/smoke/shaders/solid_frag.h" \
  "$ROOT/switch/smoke/pes-loader/build/shaders/"
test -s "$ROOT/switch/smoke/pes-loader/build/shaders/tri_vert.h"
test -s "$ROOT/switch/smoke/pes-loader/build/shaders/solid_frag.h"

echo "==> Build PES-owned VI graphics-pipeline triangle smoke using standard libnx switch_rules"
make -C "$ROOT/switch/smoke/pes-loader" clean all
cp "$ROOT/switch/smoke/pes-loader/pes_loader_smoke.nro" "$OUT/pes_loader_smoke.nro"
test -s "$OUT/pes_loader_smoke.nro"
grep -aFq "[PROP2-TRACE] entered" "$OUT/pes_loader_smoke.nro" || { echo "ERROR: Properties2 callback trace is absent from final NRO"; exit 1; }
echo "Verified: Properties2 callback trace is linked into final NRO"
grep -aFq "[WSI-BLIT2] direct dispatch" "$OUT/pes_loader_smoke.nro" || { echo "ERROR: direct WSI copy-commands2 trace is absent from final NRO"; exit 1; }
grep -aFq "[NVK-COPY] entered" "$OUT/pes_loader_smoke.nro" || { echo "ERROR: NVK copy-commands2 implementation trace is absent from final NRO"; exit 1; }
echo "Verified: WSI direct copy-commands2 and NVK implementation traces are linked into final NRO"
grep -aFq "[PIPELINE] vkCreateGraphicsPipelines returned VK_SUCCESS" "$OUT/pes_loader_smoke.nro" || { echo "ERROR: graphics-pipeline trace is absent from final NRO"; exit 1; }
grep -aFq "[FRAME %u] before vkCmdDraw vertexCount=3" "$OUT/pes_loader_smoke.nro" || { echo "ERROR: vkCmdDraw trace is absent from final NRO"; exit 1; }
echo "Verified: graphics pipeline and vkCmdDraw path are linked into final NRO"
ls -lh "$OUT/pes_loader_smoke.nro"
