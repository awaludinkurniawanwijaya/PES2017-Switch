#!/usr/bin/env bash
# Build the native PES 2017 Nintendo Switch NRO from locally generated PPC
# output and a locally owned PES 2017 Xbox 360 executable.
#
# Prerequisites:
#   - devkitPro with devkitA64, libnx, nacptool and elf2nro
#   - NXVK installed as a static Switch portlib (nxvk.pc, libnvk.a,
#     libnvk_support.a) using the pinned revision documented in the workflow
#   - pes/default.xex and the generated ppc/ tree from ./build.sh
#
# No game assets or generated title-specific PPC files are uploaded by this
# script. The output is build-switch/pes17.nro.
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$ROOT"

fail() { printf 'build-switch: %s\n' "$*" >&2; exit 1; }

: "${DEVKITPRO:?Set DEVKITPRO to your devkitPro installation}"
test -x "$DEVKITPRO/devkitA64/bin/aarch64-none-elf-g++" || fail "devkitA64 compiler not found"
test -x "$DEVKITPRO/tools/bin/nacptool" || fail "nacptool not found"
test -x "$DEVKITPRO/tools/bin/elf2nro" || fail "elf2nro not found"
test -s "$DEVKITPRO/portlibs/switch/lib/pkgconfig/nxvk.pc" || fail "NXVK pkg-config file missing; install the pinned NXVK portlib first"
test -s "$DEVKITPRO/portlibs/switch/lib/libnvk.a" || fail "libnvk.a missing"
test -s "$DEVKITPRO/portlibs/switch/lib/libnvk_support.a" || fail "libnvk_support.a missing"
test -s pes/default.xex || fail "pes/default.xex missing; extract your own legally obtained game backup locally"
test -s ppc/ppc_func_mapping.cpp || fail "ppc/ is not generated; run ./build.sh with your local game first"
test -s ppc/stubs_generated.cpp || fail "generated kernel stubs are missing; run ./build.sh first"
compgen -G 'ppc/ppc_recomp.*.cpp' >/dev/null || fail "generated PPC translation units are missing; run ./build.sh first"

BUILD_DIR="${BUILD_DIR:-$ROOT/build-switch}"
BUILD_TYPE="${BUILD_TYPE:-Release}"
JOBS="${JOBS:-$(getconf _NPROCESSORS_ONLN 2>/dev/null || echo 4)}"

export PKG_CONFIG_PATH="$DEVKITPRO/portlibs/switch/lib/pkgconfig${PKG_CONFIG_PATH:+:$PKG_CONFIG_PATH}"

cmake -S "$ROOT" -B "$BUILD_DIR" \
  -DCMAKE_TOOLCHAIN_FILE="$ROOT/cmake/switch-toolchain.cmake" \
  -DCMAKE_BUILD_TYPE="$BUILD_TYPE" \
  -DPES17_SWITCH=ON \
  -DPES17_DIAGNOSTICS=OFF \
  -DPES17_USE_SDL=OFF

cmake --build "$BUILD_DIR" --target pes17 --parallel "$JOBS"
test -s "$BUILD_DIR/pes17.nro" || fail "CMake completed but pes17.nro was not produced"

printf '\nSwitch NRO ready: %s\n' "$BUILD_DIR/pes17.nro"
sha256sum "$BUILD_DIR/pes17.nro"
