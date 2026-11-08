# Cross-compilation toolchain for the native Nintendo Switch runtime.
# Requires devkitPro devkitA64, libnx, switch-tools, and the NXVK portlib.
if(NOT DEFINED ENV{DEVKITPRO})
    message(FATAL_ERROR "DEVKITPRO must point to the devkitPro installation")
endif()

set(DEVKITPRO "$ENV{DEVKITPRO}" CACHE PATH "devkitPro installation")
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR aarch64)

set(CMAKE_C_COMPILER   "${DEVKITPRO}/devkitA64/bin/aarch64-none-elf-gcc")
set(CMAKE_CXX_COMPILER "${DEVKITPRO}/devkitA64/bin/aarch64-none-elf-g++")
set(CMAKE_AR           "${DEVKITPRO}/devkitA64/bin/aarch64-none-elf-ar")
set(CMAKE_RANLIB       "${DEVKITPRO}/devkitA64/bin/aarch64-none-elf-ranlib")

set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

set(CMAKE_C_FLAGS_INIT
    "-march=armv8-a+crc+crypto -mtune=cortex-a57 -mtp=soft -fPIE")
set(CMAKE_CXX_FLAGS_INIT
    "-march=armv8-a+crc+crypto -mtune=cortex-a57 -mtp=soft -fPIE")
set(CMAKE_EXE_LINKER_FLAGS_INIT
    "-specs=${DEVKITPRO}/libnx/switch.specs")

set(CMAKE_FIND_ROOT_PATH
    "${DEVKITPRO}/devkitA64"
    "${DEVKITPRO}/libnx"
    "${DEVKITPRO}/portlibs/switch")
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)

# pkg-config itself runs on the build host; its NXVK .pc file describes the
# target-side static archives in devkitPro's Switch portlibs directory.
set(ENV{PKG_CONFIG_PATH} "${DEVKITPRO}/portlibs/switch/lib/pkgconfig")
