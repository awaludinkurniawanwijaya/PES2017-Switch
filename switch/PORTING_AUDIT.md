# Switch runtime integration audit

Status: the libnx bootstrap builds, but the PES 2017 runtime is not linked into it.

This note records the source-level blockers found while preparing the native Switch target. It is deliberately explicit about the difference between a valid homebrew NRO and a playable game.

## Current verified state

- `switch/Makefile` builds `pes2017-switch-bootstrap.nro` with devkitA64/libnx.
- `switch/source/main.cpp` initializes the libnx console and polls the + button.
- The install start contract now treats `argc == 0` or `argc == 1` as a Homebrew Menu player launch on Switch; explicit arguments remain development launches. Host tests and a Switch compiler static-assert gate cover the distinction.
- The full runtime selects `sdmc:/switch/PES2017/pes2017-switch.log` by default when no `PES17_LOG_FILE` is supplied, so hardware startup and GPU errors have a persistent SD destination. This source path still awaits a full game-runtime build and physical validation.
- The existing runtime is a separate CMake target. Its desktop entry point is `runtime/main.cpp`; Android starts `pes17::Run` from JNI.
- The Switch bootstrap compiles selected runtime units as syntax/link probes, but does not link the complete `runtime/`, generated `ppc/`, or any guest code.

## Integration blockers

### 1. Runtime build and entry point

The top-level CMake now has a `PES17_SWITCH` target and the devkitA64 toolchain file. It still requires generated `ppc/ppc_recomp.*.cpp`, `ppc/ppc_func_mapping.cpp`, `ppc/stubs_generated.cpp`, and the legally supplied matching `pes/default.xex`; these private inputs are intentionally absent from public CI.

`runtime/main.cpp` is shared by desktop and Switch builds. Its Homebrew Menu startup contract now accepts the zero-argument launch form, and its Switch path writes a default log to SD. The complete target has not yet been compiled or linked with the private PPC output, so remaining libc/thread/entrypoint assumptions must be found by that full build.

### 2. Guest memory model (critical blocker)

`runtime/guest_memory.cpp` currently has only Windows and generic POSIX paths. The POSIX path reserves a 4 GiB guest address range with `mmap`, then uses `memfd_create` plus three shared mappings for the same 512 MiB physical bank at the cached, physical, and aperture windows. There is no Switch-specific implementation yet; the generic POSIX implementation must not be assumed to work on Horizon.

libnx exposes shared-memory mapping APIs, but documents shared-memory creation as a privileged operation. A small bootstrap probe now attempts to create one 4 KiB shared-memory object, map it at three addresses, and verify that writes are coherent across all three mappings. This only checks whether the primitive is available to the running homebrew process. It does not prove that a 512 MiB bank can be created, that fixed guest address windows can be reserved, or that the full runtime's memory model is satisfied.

The Switch port must solve all three requirements before the guest PPC runtime can safely start. If the homebrew process cannot create/map shared memory, a different memory-layout or guest-address translation design is required; do not silently fall back to three independent copies.

### 3. Host platform services

`runtime/platform.h` defines the host services used by the runtime. A separate `runtime/switch/platform.cpp` now implements thread creation/join, thread identity, basic priority changes, SDMC mounting, and the install working directory. Thread names, affinity policy, backtraces, and dynamic-library loading are intentionally limited or unavailable on Switch. The full runtime link and long-running worker behavior still need validation on hardware.

### 4. Controller input

`switch/source/input.cpp` translates libnx `PadState` into the guest XInput state, and `runtime/kernel/input.cpp` has a Switch branch for `XamInputGetState`/`XamInputSetState`. Face-button swaps are separate settings. This is still a partial controller implementation: triggers are digital, vibration is not implemented, and Joy-Con single/pair styles, disconnects, and player mapping require hardware validation. The user has deferred button-code testing until the game is playable.

### 5. Audio

A first libnx `audout` sink now exists in `runtime/switch/audio.cpp` and is called by the Switch branch in `runtime/apu/audio.cpp`. It converts the existing 48 kHz planar big-endian 5.1 float frames to interleaved 48 kHz stereo signed 16-bit PCM, using an eight-buffer aligned pool. The Switch Makefile compiles the sink as part of the bootstrap and has a dedicated syntax-only audio gate.

This is not an Audren renderer graph and is not hardware-validated. Actual output device selection, channel-order/mix-level verification, queue stability, suspend/resume and service shutdown remain open.

### 6. Graphics (largest runtime blocker)

The current renderer is under `runtime/gpu/vulkan/` and already translates runtime Xenos microcode to SPIR-V. The libnx bootstrap does not provide a Vulkan surface or Vulkan implementation, so the renderer is not linked or usable yet.

A promising alternative to a deko3d rewrite has been identified: [NXVK](https://github.com/PalindromicBreadLoaf/nxvk) ports Mesa NVK to Switch GM20B and includes the NAK Maxwell shader compiler. If its Vulkan implementation can be linked and presented through its libnx WSI, the existing Xenos-to-SPIR-V translator may remain intact. This is now the preferred feasibility spike, not a verified integration. Source inspection found a concrete loader mismatch: NXVK's smoke app calls `vk_icdGetInstanceProcAddr`, while this runtime's dynamic loader expects `vkGetInstanceProcAddr` and device-proc lookup. A static loaderless adapter plus the complete support-archive link set is required; merely linking `libnvk.a` is insufficient. It must first pass a reproducible GitHub Actions build, Vulkan smoke NRO, surface/present test, memory/size measurements, and a source/license audit. This project is GPL-3.0-only; NXVK says its new files are GPL-2.0-or-later and Mesa retains upstream licenses, so check the exact combination and notices before vendoring or distributing anything.

The deko3d alternative remains a fallback. deko3d accepts DKSH with native Maxwell SM53 code, not SPIR-V; UAM is a host-side GLSL-to-DKSH compiler and cannot consume the current SPIR-V output. A deko3d route therefore still needs an Xenos-to-SM53 compiler or another viable runtime compiler strategy.

The detailed feasibility analysis and dependency order are in [`docs/gpu-deko3d-port-plan.md`](../docs/gpu-deko3d-port-plan.md). Simply defining `PES17_HAVE_VULKAN`, linking Vulkan sources without a Switch Vulkan implementation, or forwarding SPIR-V to UAM will not solve this.

### 7. Game data and generated code

The guest PPC C++ files and title metadata are generated from the user's own legally obtained game executable by the existing XenonRecomp build pipeline. They are not generated by the current Switch workflow and proprietary game data must not be committed to this repository. The Switch runtime must load the required game files from SD storage and validate them before entering the guest.

## Recommended implementation sequence

1. **Guest memory seam:** implement and validate a Horizon-compatible 512 MiB physical-bank mapping across all three guest windows and the 4 GiB guest address reservation.
2. **Platform seam:** add a Switch-specific platform implementation and a Switch build option/target. Keep Android and desktop builds unchanged.
2. **Input seam:** extract the guest-facing controller state into a platform-neutral interface; add libnx HID polling and button/axis mapping; test the XInput kernel calls.
3. **Filesystem and startup:** define an SD-card game-data layout, mount the filesystem through libnx, load the legally supplied image/assets, and enter `pes17::Run` from a Switch applet entry point.
4. **Audio:** add audren output and a no-audio diagnostic build mode.
5. **Renderer:** first prove the NXVK/Mesa NVK Vulkan path (including license, loader, WSI, memory and hardware smoke tests). If it fails, evaluate the deko3d path and its Xenos-to-SM53 compiler requirement. Then validate shaders, textures, render targets, synchronization, and presentation.
6. **End-to-end bring-up:** build with real generated PPC sources and user-supplied game data; test boot, menus, match loading, controller play, audio, suspend/resume, and memory stability on hardware.

## Acceptance criteria

A Switch build is not considered a PES port until it links the generated guest code and runtime, loads user-supplied game data from SD, presents the actual game through a working renderer, accepts controller input in-game, and survives a complete match. Producing an NRO alone only validates the homebrew toolchain and packaging.
