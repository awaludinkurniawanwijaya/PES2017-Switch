# Building the native Switch runtime

The diagnostic bootstrap NRO and the PES runtime NRO are different programs.
The bootstrap only validates libnx startup and controller polling. The game
runtime is produced by the root CMake target `pes17` and packaged as
`pes17.nro`.

## Required inputs

1. A legally obtained PES 2017 Xbox 360 backup, kept locally. The build uses
   `pes/default.xex` to derive the exact executable SHA-256 expected by the
   installer. Do not upload the ISO, XEX, CPK archives, or generated game code
   to this public repository.
2. Generated title-specific PPC sources and kernel stubs in `ppc/`. Generate
   them with the existing `./build.sh` pipeline on a host that can build
   XenonRecomp. The pipeline supports `RECOMPILE_ONLY=1` to stop after this
   stage. Keep the same title/version configuration used by this repository.
3. devkitPro's devkitA64 and libnx toolchain, plus `nacptool` and `elf2nro`.
4. The pinned NXVK static Switch portlib, installed under
   `$DEVKITPRO/portlibs/switch`, containing `libnvk.a`,
   `libnvk_support.a`, and `lib/pkgconfig/nxvk.pc`.

## Build

Run `bash build-switch.sh` from the repository root in an environment with the
prerequisites above. It configures `PES17_SWITCH=ON`, compiles the generated
PPC and runtime, and packages `build-switch/pes17.nro`. Set `JOBS`,
`BUILD_DIR`, or `BUILD_TYPE` to override the defaults.

The script fails early when required local inputs or toolchain files are
missing. It does not download, extract, or distribute proprietary game data.

## Android/Termux role

An Android-only workflow can run the existing recompiler stage if its native
build dependencies are available, then transfer the generated `ppc/` output
and local XEX hash/build inputs to a separate devkitPro build environment.
Termux by itself is not a substitute for the devkitPro/libnx/NXVK cross
toolchain, and it cannot validate GPU presentation or performance on Switch.

## Current acceptance status

A successful CMake configure or successful diagnostic NRO is not evidence that
the complete game runtime links or boots. Acceptance still requires:

- a complete `pes17.nro` built with the actual generated PPC sources;
- NXVK triangle and VI swapchain smoke tests on the physical console;
- the game booting from local SD-card data;
- menu and match rendering, controller input, audio, save/load, suspend/resume,
  and sustained thermal/performance tests.

Keep the development pull request in draft until those gates pass.

## Android/Termux PPC generation

For an Android-only development setup, Termux can be used for the host-side
XenonRecomp stage. This does **not** build the Switch NRO: the final cross-build
still needs devkitPro/devkitA64, libnx, and the pinned NXVK portlib.

Install the host tools in Termux:

```bash
pkg update
pkg install -y git cmake ninja clang make python
termux-setup-storage
```

Place the legally obtained, extracted game directory somewhere in shared
storage. It must contain the matching Xbox 360 Europe `default.xex`. Then run
from the repository root (adjust the path to the actual folder):

```bash
cd ~/PES2017-Switch
CMAKE_CC=clang CMAKE_CXX=clang++ \
GAME="$HOME/storage/shared/GAME" \
PROFILE=balanced RECOMPILE_ONLY=1 JOBS=2 \
bash ./build.sh
```

The first stage compiles XenonRecomp and generates `ppc/` plus kernel stubs.
Keep the generated directory private and local; it contains title-specific
recompiled game code. Do not commit or upload `default.xex`, `ppc/`, CPK
archives, or ISO images to the public repository. Preserve the generated
`ppc/` directory and the exact matching XEX used to generate it.

Termux package versions, available RAM, and Android process limits vary. If
the build is killed for memory pressure, retry with `JOBS=1`; keep adequate
free storage. If the native XenonRecomp dependencies fail to compile under
Android/Termux, use a Linux ARM64 host or GitHub-hosted runner with private,
authorized handling of the game inputs. Never put proprietary game files in
public workflow artifacts.

After PPC generation, the final Switch build requires a separate environment
with the devkitPro/NXVK toolchain. Copy the private `ppc/` output and the
matching `pes/default.xex` to that environment, then run
`bash build-switch.sh`. The script validates these inputs before compiling.
