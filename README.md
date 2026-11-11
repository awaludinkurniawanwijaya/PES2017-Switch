# PES 2017 — Xbox 360 to Nintendo Switch

Porting **Pro Evolution Soccer 2017 (PES 2017)** from the Xbox 360 to Nintendo Switch using ahead-of-time PowerPC recompilation and a native Switch runtime.

> **Project status: work in progress.** The generated PowerPC sources are now being compiled for Switch. A full game `.nro` has **not** yet been produced or verified. Do not treat the Vulkan probe artifact as a playable game.

## Current progress

| Area | Status |
|---|---|
| Xbox 360 executable identified | Done |
| PowerPC recompilation output generated | Done — 1,413 generated source files |
| PPC runtime/kernel import inventory | 69 imports stubbed; 212 implemented |
| Private generated PPC repository checkout in CI | Passing |
| Pinned BO2 Switch build kit download and verification | Passing |
| Vulkan SDK / Mesa probe build and link | Passing — technical smoke test only |
| Full PES 2017 Switch compilation | In progress / compatibility fixes ongoing |
| Full game NRO artifact | Not yet available |
| On-device gameplay validation | Not yet done |

### Latest build

The full build is automated with GitHub Actions:

- [Open the latest GitHub Actions run](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42969104798)
- The latest full-build attempt passed source checkout, private PPC checkout, PPC validation/staging, and build-kit verification.
- The compiler previously stopped at a GCC compatibility issue involving `__builtin_debugtrap`. A fallback was added to the PPC runtime and the failed build job was restarted.
- The current attempt is compiling the full generated PPC code. The NRO packaging and upload steps only run after compilation succeeds.

**Important:** The separate BO2 Mesa Vulkan probe NRO only verifies that the Switch build environment can compile and link a minimal Vulkan entrypoint. It does not contain PES 2017 and is not playable.

## Source and build inputs

- **Original platform:** Xbox 360 (PowerPC)
- **Target platform:** Nintendo Switch (ARM64 / Horizon OS)
- **Recompiler:** [XenonRecomp](https://github.com/hedge-dev/XenonRecomp)
- **Switch build environment:** pinned BO2 Switch build kit, including devkitPro/devkitA64 and Vulkan/Mesa components
- **Generated PPC sources:** maintained in the private companion repository [PES2017-Switch-PPC](https://github.com/awaludinkurniawanwijaya/PES2017-Switch-PPC)

The source executable used for this recompilation is identified as:

| Property | Value |
|---|---|
| Executable | `default.xex` |
| Title ID | `0x4A3007D1` |
| XEX version | `0x00000012` |
| File size | `32,493,568 bytes` |
| SHA-256 | `b914ec9a1abb3a9b42a64255b6aa8ff27312da126f7c18f8c880106b832779e6` |

The generated PPC source repository is private. The public project repository contains the Switch-side build and integration work; CI checks out the companion repository using configured GitHub access.

## Building

The supported full build currently runs through GitHub Actions. See the [Actions workflow](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions).

A successful build is not confirmed until all of the following are true:

1. The full generated PPC target compiles successfully.
2. The Switch executable is linked and packaged as an NRO.
3. The workflow uploads the full PES 2017 NRO artifact.

A successful Vulkan probe alone does not satisfy these checks.

## Legal notice

This project is a fan-made compatibility/porting effort and is not affiliated with, endorsed by, or sponsored by Konami. **PES 2017 and all game assets remain the property of their respective rights holders.** No copyrighted game executable, disc image, or game assets are included here. Use only game files you are legally entitled to use.

## Project status and contributions

The port is experimental. A successful compile would be an important milestone, but it would not by itself prove that the game boots or is playable on hardware. Runtime services, graphics, audio, input, storage, and game-specific behavior still require validation on a Nintendo Switch.

Please use the GitHub Issues page to report reproducible build or runtime problems.
