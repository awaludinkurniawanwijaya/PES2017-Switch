# Nintendo Switch platform layer: implementation plan

This document tracks the boundary between the libnx homebrew bootstrap and a real PES 2017 runtime port. The bootstrap is not the PES runtime.

## CI toolchain status

GitHub Actions builds `switch/pes2017-switch-bootstrap.nro` inside `devkitpro/devkita64:latest`. The workflow compiles the Switch platform adapter, HID input adapter, and selected runtime syntax checks. It does **not** link the guest runtime or generated PPC code.

The latest recorded NRO workflow for this branch completed successfully. This validates the current bootstrap and its selected compile checks only.

## Implemented Switch pieces

| Area | Current state | What is still missing |
|---|---|---|
| libnx platform adapter | `runtime/switch/platform.cpp` compiles in the NRO workflow | Managed thread cleanup/join; verified affinity policy; full runtime source selection |
| SD card | Mounts SDMC and enters `sdmc:/switch/PES2017` | Game import/verification, saves and content discovery in the real runtime |
| Controller | HID polling maps primary Npad buttons and sticks to XInput-style state | Rumble, analog trigger values, multiple-user policy and real game-path test |
| XInput bridge | Switch branch exists in `runtime/kernel/input.cpp` | Its syntax gate is skipped when generated `ppc/ppc_recomp_shared.h` is absent |
| Bootstrap UI | Shows controller diagnostics and can exit | Does not load XEX, PPC code, renderer or audio |

## Runtime blockers confirmed by source inspection

### 1. Thread lifecycle: GPU workers now use managed handles

The platform contract now has `StartJoinableThread` and `JoinThread`, implemented for Win32, POSIX and libnx. The GPU ring consumer and vblank worker use these handles and are joined before the renderer shuts down. Startup failure is handled by stopping and joining the worker that did start before the backend is shut down.

The original detached `StartThread` remains for guest threads and other existing call sites. On Switch, those detached controls are still retained for process lifetime because that legacy API has no completion/reap callback. Converting all detached guest threads to managed ownership remains necessary before calling thread lifecycle complete. The new GPU path has not yet been linked into a full Switch runtime.

### 2. GPU backend is still Vulkan-only

`runtime/gpu/backend.h` is already a useful backend-neutral interface. The only implementation is `runtime/gpu/vulkan/backend.cpp`, which delegates drawing, resolve, swap, queries and guest-memory synchronization to the Vulkan renderer.

The top-level CMake configuration currently rejects every backend except `vulkan`. A Switch port therefore needs all of the following before it can render:
- a real Switch backend (deko3d is the candidate to investigate, not an implemented backend);
- shader translation and pipeline creation for that backend;
- guest texture/EDRAM surface handling, resolve, synchronization and occlusion-query semantics;
- a Switch presentation path and display timing;
- a build target that compiles and links the selected backend with the actual runtime.

A stub backend that merely returns success would conceal the missing renderer and is not an acceptable milestone.

### 3. Audio has no Switch output device

`runtime/apu/audio.cpp` currently sends output to Android AAudio or SDL. Other builds discard mixed frames. Switch needs an Audren-backed sink, including correct 5.1-to-device channel mapping, buffering/queue limits, sample format conversion and lifecycle handling. The guest mixer cadence must continue even when output is disabled or unavailable.

### 4. The runtime entry point is desktop-shaped

`runtime/main.cpp` uses `unistd.h`, `_exit`, `std::thread`, filesystem paths and a desktop-style argument/launcher flow. The Switch application needs an explicit libnx applet loop, exit path, logging destination, settings path and game launch/install flow. The bootstrap's `main.cpp` is not a substitute for this integration.

### 5. Generated guest code and game data are separate prerequisites

The CMake runtime requires generated files in `ppc/` and a verified `default.xex` hash. Those are produced from the user's legally obtained game files and must not be committed to the public repository or CI artifacts. The current NRO job deliberately avoids those proprietary inputs. A later private/local build path must supply them without publishing them.

## Required implementation order

1. **Thread contract:** introduce a managed thread handle with start, wait/join and cleanup semantics; migrate GPU-owned workers without changing desktop behavior; make the Switch reaper release libnx resources only after exit.
2. **Runtime source selection:** add a devkitA64 CMake/toolchain or equivalent Make target for the actual runtime, excluding desktop POSIX and Vulkan-only sources while retaining the existing Linux/Android builds.
3. **GPU bring-up:** select and prototype the Switch graphics API, then implement the complete backend contract rather than a success-only stub.
4. **Audio bring-up:** implement and compile an Audren sink, then verify real mixer playback on hardware.
5. **Runtime shell and storage:** adapt entry/exit, settings, logs, file discovery and installation to the SD layout.
6. **Generated PPC integration:** provide a reproducible private build step for generated guest code and matching XEX hash; do not put proprietary output in Git.
7. **Runtime CI and hardware gates:** compile/link the complete runtime in CI with non-proprietary test fixtures where possible, then test on an actual Switch with user-supplied game data.

## Acceptance criteria

A successful bootstrap NRO is only a toolchain milestone. The next meaningful gates are: (a) full runtime translation units compile for devkitA64, (b) the full runtime links with a real Switch backend and audio sink, (c) the app loads verified user-supplied game data, (d) the title reaches its first rendered menu, and (e) controller/audio/gameplay pass on hardware.

Do not describe the project as playable until those hardware gates pass.
