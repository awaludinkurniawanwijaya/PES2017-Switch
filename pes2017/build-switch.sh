#!/usr/bin/env bash
# Build the native PES 2017 Nintendo Switch NRO from locally generated PPC
# output and a locally owned PES 2017 Xbox 360 executable.
#
# Prerequisites:
#   - devkitPro with devkitA64, libnx, nacptool and elf2nro
#   - BO2 Mesa Horizon SDK installed as a static Switch portlib (libvulkan.a,
#     libzstd.a and Vulkan headers), matching the pinned SDK used by CI
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
PES17_SWITCH_VULKAN_SDK="${PES17_SWITCH_VULKAN_SDK:-${MESA_SDK:-$DEVKITPRO/portlibs/switch}}"
test -s "$PES17_SWITCH_VULKAN_SDK/lib/libvulkan.a" || fail "BO2 Mesa libvulkan.a missing in $PES17_SWITCH_VULKAN_SDK; build/install the pinned Mesa Horizon SDK first"
test -s "$PES17_SWITCH_VULKAN_SDK/lib/libzstd.a" || fail "BO2 Mesa libzstd.a missing in $PES17_SWITCH_VULKAN_SDK; run the SDK zstd build step"
test -s "$PES17_SWITCH_VULKAN_SDK/include/vulkan/vulkan.h" || fail "BO2 Mesa Vulkan headers missing in $PES17_SWITCH_VULKAN_SDK/include"
test -s "$DEVKITPRO/portlibs/switch/lib/libexpat.a" || fail "devkitPro libexpat.a missing"
test -s "$DEVKITPRO/portlibs/switch/lib/libz.a" || fail "devkitPro libz.a missing"
test -s "$DEVKITPRO/libnx/lib/libnx.a" || fail "devkitPro libnx.a missing"
test -s pes/default.xex || fail "pes/default.xex missing; extract your own legally obtained game backup locally"
test -s ppc/ppc_func_mapping.cpp || fail "ppc/ is not generated; run ./build.sh with your local game first"
test -s ppc/stubs_generated.cpp || fail "generated kernel stubs are missing; run ./build.sh first"
compgen -G 'ppc/ppc_recomp.*.cpp' >/dev/null || fail "generated PPC translation units are missing; run ./build.sh first"

BUILD_DIR="${BUILD_DIR:-$ROOT/build-switch}"
BUILD_TYPE="${BUILD_TYPE:-Release}"
JOBS="${JOBS:-$(getconf _NPROCESSORS_ONLN 2>/dev/null || echo 4)}"

cmake -S "$ROOT" -B "$BUILD_DIR" \
  -DCMAKE_TOOLCHAIN_FILE="$ROOT/cmake/switch-toolchain.cmake" \
  -DCMAKE_BUILD_TYPE="$BUILD_TYPE" \
  -DPES17_SWITCH=ON \
  -DPES17_DIAGNOSTICS=OFF \
  -DPES17_USE_SDL=OFF \
  -DPES17_SWITCH_VULKAN_SDK="$PES17_SWITCH_VULKAN_SDK"

cmake --build "$BUILD_DIR" --target pes17 --parallel "$JOBS"
test -s "$BUILD_DIR/pes17.nro" || fail "CMake completed but pes17.nro was not produced"

printf '\nSwitch NRO ready: %s\n' "$BUILD_DIR/pes17.nro"
sha256sum "$BUILD_DIR/pes17.nro"
