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

## Android/Termux role and workspace separation

Termux can be used for the host-side XenonRecomp stage when its native build
dependencies are available. It does not provide the devkitPro/devkitA64,
libnx, or NXVK cross-toolchain, and it cannot validate GPU presentation or
performance on a physical Switch.

Keep these workspaces distinct:

- The original Termux workspace is a local working copy. It may contain
  generated PPC code, extracted game files, build logs, and other local-only
  data. Its directory name or age does not establish whether its contents are
  disposable.
- A Git checkout used to exchange changes with GitHub is a separate workspace.
  Verify its remote and branch before using Git commands.
- The GitHub development branch is the source of truth for the latest port
  changes. Do not overwrite it with an older Termux tree or merge old files
  wholesale.

Before cleaning an old local workspace, inventory its contents and preserve
any unique generated PPC output, the matching `default.xex` hash/identity,
configuration, logs needed for diagnosis, and legally obtained game data.
Never upload ISO, XEX, CPK, or generated title-specific PPC files to this
public repository or its public CI artifacts. Delete only files that have
been verified as redundant and backed up or reproducible.

If using Termux for PPC generation, run `build.sh` only from a checkout that
actually contains that script and the matching source tree. Do not assume a
folder named `PES2017-Switch` is a Git repository or contains `build.sh`.
Set `GAME` to the extracted local game directory and use
`RECOMPILE_ONLY=1` to stop after PPC generation. Preserve the exact XEX
that produced those files.

Termux package versions, available RAM, and Android process limits vary. If
the build is killed for memory pressure, retry with `JOBS=1`; keep adequate
free storage. If native XenonRecomp dependencies fail to compile under
Android/Termux, use a compatible Linux ARM64 host with private, authorized
handling of game inputs. Never put proprietary game files in public workflow
artifacts.

After PPC generation, the final Switch build requires a separate environment
with the devkitPro/NXVK toolchain. Transfer the private `ppc/` output and
matching `pes/default.xex` to that environment, then run
`bash build-switch.sh`. The script validates these inputs before compiling.

## Current acceptance status

A successful CMake configure or successful diagnostic NRO is not evidence that
the complete game runtime links or boots. Acceptance still requires:

- a complete `pes17.nro` built with the actual generated PPC sources;
- NXVK triangle and VI swapchain smoke tests on the physical console;
- the game booting from local SD-card data;
- menu and match rendering, controller input, audio, save/load, suspend/resume,
  and sustained thermal/performance tests.

Keep the development pull request in draft until those gates pass.
