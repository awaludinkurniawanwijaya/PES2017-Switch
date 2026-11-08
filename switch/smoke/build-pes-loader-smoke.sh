#!/usr/bin/env bash
set -Eeuo pipefail
ROOT=/project
NXVK=/work
DKP=/opt/devkitpro
GXX=$DKP/devkitA64/bin/aarch64-none-elf-g++
GCC=$DKP/devkitA64/bin/aarch64-none-elf-gcc
STRIP=$DKP/devkitA64/bin/aarch64-none-elf-strip
OUT=$ROOT/artifacts/nxvk
OBJ=$OUT/pes-loader-smoke-obj
mkdir -p "$OBJ" "$OUT"

COMMON="-std=gnu++20 -O2 -Wall -Wextra -ffunction-sections -fdata-sections -fPIE -march=armv8-a+crc+crypto -mtune=cortex-a57 -mtp=soft"
DEFS="-D__SWITCH__ -D_GNU_SOURCE -D_DEFAULT_SOURCE -DVK_USE_PLATFORM_VI_NN -DPES17_VULKAN_DYNAMIC -DPES17_HAVE_VULKAN -DPES17_NO_LOGGING"
INCLUDES="-I$ROOT/runtime -I$NXVK/include -I$DKP/libnx/include -include cstdint"

echo "==> Compile actual PES Vulkan loader.cpp"
$GXX $COMMON $DEFS $INCLUDES -c "$ROOT/runtime/gpu/vulkan/loader.cpp" -o "$OBJ/loader.o"

echo "==> Compile PES-owned loader/VI swapchain smoke app"
$GXX $COMMON $DEFS $INCLUDES -c "$ROOT/switch/smoke/pes_loader_smoke.cpp" -o "$OBJ/pes_loader_smoke.o"

echo "==> Compile NXVK newlib compatibility shims"
$GCC $COMMON -D__SWITCH__ -D_GNU_SOURCE -D_DEFAULT_SOURCE -I"$DKP/libnx/include" \
  -c "$NXVK/switch/smoke/nvk_compat.c" -o "$OBJ/nvk_compat.o"

echo "==> Link static NXVK driver and PES loader"
$GXX -specs="$DKP/libnx/switch.specs" -march=armv8-a+crc+crypto -mtune=cortex-a57 -mtp=soft \
  -L"$DKP/portlibs/switch/lib" -L"$DKP/libnx/lib" \
  -o "$OBJ/pes_loader_smoke.elf" -Wl,--gc-sections -Wl,-u,vk_icdGetInstanceProcAddr \
  "$OBJ/pes_loader_smoke.o" "$OBJ/loader.o" "$OBJ/nvk_compat.o" \
  -Wl,--whole-archive "$DKP/portlibs/switch/lib/libnvk.a" -Wl,--no-whole-archive \
  -Wl,--start-group "$DKP/portlibs/switch/lib/libnvk_support.a" \
  -lz -lexpat -lnx -lc -lm -lstdc++ -pthread -Wl,--end-group

echo "==> Package PES-owned smoke NRO"
$STRIP "$OBJ/pes_loader_smoke.elf" -o "$OBJ/pes_loader_smoke.stripped.elf"
"$DKP/tools/bin/nacptool" --create "PES 2017 Loader Smoke" "PES2017-Switch" "0.1.0" "$OBJ/pes_loader_smoke.nacp"
"$DKP/tools/bin/elf2nro" "$OBJ/pes_loader_smoke.stripped.elf" "$OUT/pes_loader_smoke.nro" \
  --icon="$DKP/libnx/default_icon.jpg" --nacp="$OBJ/pes_loader_smoke.nacp"
test -s "$OUT/pes_loader_smoke.nro"
ls -lh "$OUT/pes_loader_smoke.nro"
