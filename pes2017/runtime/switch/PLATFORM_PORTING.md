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

### 2. GPU backend: complete the NXVK/Vulkan path first

`runtime/gpu/backend.h` is already a useful backend-neutral interface. The active implementation is `runtime/gpu/vulkan/backend.cpp`, which delegates drawing, resolve, swap, queries and guest-memory synchronization to the Vulkan renderer. The pinned NXVK port has now built successfully in CI, including its static archives and three diagnostic NROs. This is a build/link milestone only; physical GPU execution and the complete PES renderer remain unverified.

The top-level CMake configuration currently selects only `vulkan`. The immediate goal is to finish this existing path, not replace it:
- compile and link the complete PES runtime against the pinned NXVK static ICD;
- validate Vulkan instance/device dispatch and the VI surface/swapchain on a physical Switch;
- verify the PES renderer's required Vulkan extensions, formats, memory types, shader/pipeline features and synchronization against NXVK;
- complete guest texture/EDRAM surface handling, resolve, occlusion queries and frame presentation;
- reach the PES 2017 menu and then validate an actual match, stability and frame pacing.

Do not start a deko3d implementation while NXVK remains unproven. Keep it as a separate future option only if measured NXVK performance or compatibility is inadequate after the game is running. Do not remove or destabilize the working NXVK build path.

### 3. Switch audio output now has an audout sink; hardware validation remains

Added `runtime/switch/audio.cpp/.h` using libnx `audout`, and routed the Switch branch of `runtime/apu/audio.cpp` through it. The sink requests 48 kHz stereo signed 16-bit PCM, converts the guest's planar big-endian 5.1 float frame to interleaved stereo (front + centre + surround; LFE omitted), and uses an eight-buffer 0x1000-aligned pool. Queue inspection uses `audoutContainsAudioOutBuffer` for compatibility rather than relying on the newer queue-count API.

This is an initial audout output path, not an Audren renderer graph. It has a compile gate in the NRO workflow, but has not been tested on Switch hardware. Buffer starvation, actual channel order/mix levels, device selection, suspend/resume and orderly audio service shutdown still need hardware validation and lifecycle integration.

### 4. The runtime entry point is desktop-shaped

`runtime/main.cpp` uses `unistd.h`, `_exit`, `std::thread`, filesystem paths and a desktop-style argument/launcher flow. The Switch application needs an explicit libnx applet loop, exit path, logging destination, settings path and game launch/install flow. The bootstrap's `main.cpp` is not a substitute for this integration.

### 5. Generated guest code and game data are separate prerequisites

The CMake runtime requires generated files in `ppc/` and a verified `default.xex` hash. Those are produced from the user's legally obtained game files and must not be committed to the public repository or CI artifacts. The current NRO job deliberately avoids those proprietary inputs. A later private/local build path must supply them without publishing them.

## Required implementation order

1. **Thread contract:** introduce a managed thread handle with start, wait/join and cleanup semantics; migrate GPU-owned workers without changing desktop behavior; make the Switch reaper release libnx resources only after exit.
2. **Runtime source selection:** add a devkitA64 CMake/toolchain or equivalent Make target for the actual runtime, excluding desktop POSIX and Vulkan-only sources while retaining the existing Linux/Android builds.
3. **GPU bring-up:** finish and validate the existing NXVK/Vulkan backend, including the complete PES renderer and physical-console presentation. Consider another API only after real-game measurements show a material NXVK limitation.
4. **Audio bring-up:** implement and compile an Audren sink, then verify real mixer playback on hardware.
5. **Runtime shell and storage:** adapt entry/exit, settings, logs, file discovery and installation to the SD layout.
6. **Generated PPC integration:** provide a reproducible private build step for generated guest code and matching XEX hash; do not put proprietary output in Git.
7. **Runtime CI and hardware gates:** compile/link the complete runtime in CI with non-proprietary test fixtures where possible, then test on an actual Switch with user-supplied game data.

## Acceptance criteria

A successful bootstrap NRO is only a toolchain milestone. The next meaningful gates are: (a) full runtime translation units compile for devkitA64, (b) the full runtime links with a real Switch backend and audio sink, (c) the app loads verified user-supplied game data, (d) the title reaches its first rendered menu, and (e) controller/audio/gameplay pass on hardware.

Do not describe the project as playable until those hardware gates pass.

## NVK / Vulkan feasibility spike (2026-11-08)

The pinned NXVK revision `c3abea1efde44027b7e3e20b48eb55beeecd5ab4` is built by a dedicated GitHub Actions workflow. Its diagnostic NROs exercise an offscreen NAK triangle and a VI swapchain clear/present loop. A successful CI build proves compilation and linking only; neither NRO is evidence of GPU execution on physical hardware.

The runtime Vulkan loader has a Switch-specific static-ICD entry path. On Horizon it resolves `vk_icdGetInstanceProcAddr` from the linked NXVK archive rather than attempting `dlopen("libvulkan.so")`. The CI gate checks the exported ICD symbol and syntax-compiles both the project's loader and presenter against the exact pinned Vulkan headers.

The project's Vulkan presenter now has a Switch VI path:
- Enables `VK_KHR_surface` and `VK_NN_vi_surface`, verifies that the implementation advertises them, and creates a surface over `nwindowGetDefault()`.
- Checks required VI surface and swapchain dispatch functions before use, plus the surface's transfer-destination image capability before swapchain creation.
- Explicitly sets `NVK_I_WANT_A_BROKEN_VULKAN_DRIVER=1`, as required by this experimental NVK port, and logs the experimental/non-conformant status.
- Uses the platform's managed joinable thread API for presenter and present-wait workers instead of creating raw `std::thread` objects on Switch.
- The bootstrap and primary guest XInput poll now call `appletMainLoop()` through `switch_input::MainLoop()`, so Horizon applet events and exit requests are serviced on the main thread before HID polling.
- Shutdown/deadline handling, player diagnostic workers, the stutter watcher, and the Switch GPU hang monitor also use the platform thread API. The Switch crash path avoids POSIX signal/pthread implementation headers and can be syntax-checked without generated PPC headers.
- Enumerates global instance extensions with a null layer name, matching the Vulkan API contract.

### Remaining integration gates

- A prior run completed all 1,230 NVK archive compilation/link steps but stopped at an incorrect target-prefixed `nm` path before the project compile checks. The latest rerun uses generic binutils `nm`, stages and installs the NXVK portlib, configures the native Switch CMake target, then proceeds to the loader/presenter checks and smoke NROs.
- The libnx bootstrap workflow syntax-checks the Switch crash/hang-monitor path and stutter watcher, then links a diagnostic probe with `-pthread` that exercises the platform joinable-thread API together with `std::mutex`, `std::condition_variable`, `std::shared_mutex`, and `std::call_once`. The bootstrap NRO build succeeds; actual scheduling/synchronization behavior still needs a console run.
- Verify the exported ICD ABI and device dispatch at runtime; syntax compilation alone does not prove that all calls work.
- Run the NXVK triangle and VI swapchain diagnostic NROs on physical Switch hardware and inspect their SD-card logs.
- Build and link the actual runtime with `PES17_HAVE_VULKAN`, the Switch presenter, platform/audio/input sources, and static NXVK archives. The bootstrap NRO does not include this runtime.
- Check `pipeline.cpp` feature/extension requirements against actual NVK capabilities, then validate Xenos shader translation, memory heaps, image formats, synchronization, swapchain recreation, and sustained frame pacing on hardware.
- Generate title-specific PPC code from the user's legally obtained `default.xex`; the generated code and proprietary game data must remain outside this public repository.

The CI workflow is a feasibility probe and is deliberately separate from the bootstrap workflow. NXVK is experimental and non-conformant; this port must not be described as playable until the full runtime reaches a game menu and passes hardware tests.
