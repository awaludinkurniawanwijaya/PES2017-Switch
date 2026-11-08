# Switch runtime integration audit

Status: the libnx bootstrap builds, but the PES 2017 runtime is not linked into it.

This note records the source-level blockers found while preparing the native Switch target. It is deliberately explicit about the difference between a valid homebrew NRO and a playable game.

## Current verified state

- `switch/Makefile` builds `pes2017-switch-bootstrap.nro` with devkitA64/libnx.
- `switch/source/main.cpp` initializes the libnx console and polls the + button.
- The existing runtime is a separate CMake target. Its desktop entry point is `runtime/main.cpp`; Android starts `pes17::Run` from JNI.
- The Switch bootstrap does not currently compile or link `runtime/`, `ppc/`, or any generated guest code.

## Integration blockers

### 1. Runtime build and entry point

The top-level `CMakeLists.txt` currently selects Android, Windows, or the desktop/POSIX executable. It unconditionally expects generated `ppc/ppc_recomp.*.cpp`, `ppc/ppc_func_mapping.cpp`, `ppc/stubs_generated.cpp`, and a legally supplied `pes/default.xex` (normally extracted by the project's build pipeline). The current NRO Makefile has none of these inputs.

`runtime/main.cpp` also assumes a process-style launch with filesystem paths and arguments, includes POSIX `unistd.h`, uses `_exit`, `std::filesystem`, detached `std::thread` workers, and the desktop `main()` entry point. A Switch entry adapter and a build-system target are required before linking the runtime.

### 2. Host platform services

`runtime/platform.h` defines the host services used by the runtime: thread identity/naming/priority/affinity, stack-sized worker threads, backtraces, and dynamic library loading.

`runtime/platform.cpp` currently has Windows and POSIX implementations. The POSIX branch includes Linux/Android-specific headers and calls such as `sys/system_properties.h`, `gettid()`, `sched_setaffinity()`, `pthread_*`, `dlopen()`, and `dlsym()`. This is not a Switch implementation. Add a separately compiled `runtime/switch/platform.cpp` (or equivalent) implementing only services supported by libnx/libc, and guard unsupported operations explicitly.

### 3. Controller input

`runtime/kernel/input.cpp` currently selects either `PES17_ANDROID` or `PES17_USE_SDL`. The guest-facing XInput state is already represented in Xbox-compatible button/axis fields, so a Switch adapter can translate libnx `PadState` into those fields. The adapter must handle Joy-Con pair/single styles, analog stick ranges, triggers, disconnects, and controller-player mapping. The current bootstrap's + button polling is not connected to the guest XInput path.

### 4. Audio

A first libnx `audout` sink now exists in `runtime/switch/audio.cpp` and is called by the Switch branch in `runtime/apu/audio.cpp`. It converts the existing 48 kHz planar big-endian 5.1 float frames to interleaved 48 kHz stereo signed 16-bit PCM, using an eight-buffer aligned pool. The Switch Makefile compiles the sink as part of the bootstrap and has a dedicated syntax-only audio gate.

This is not an Audren renderer graph and is not hardware-validated. Actual output device selection, channel-order/mix-level verification, queue stability, suspend/resume and service shutdown remain open.

### 5. Graphics (largest runtime blocker)

The current renderer is under `runtime/gpu/vulkan/` and already translates runtime Xenos microcode to SPIR-V. The libnx bootstrap does not provide a Vulkan surface or Vulkan implementation, so the renderer is not linked or usable yet.

A promising alternative to a deko3d rewrite has been identified: [NXVK](https://github.com/PalindromicBreadLoaf/nxvk) ports Mesa NVK to Switch GM20B and includes the NAK Maxwell shader compiler. If its Vulkan implementation can be linked and presented through its libnx WSI, the existing Xenos-to-SPIR-V translator may remain intact. This is now the preferred feasibility spike, not a verified integration. It must first pass a reproducible GitHub Actions build, Vulkan smoke NRO, surface/present test, memory/size measurements, and a source/license audit. This project is GPL-3.0-only; NXVK says its new files are GPL-2.0-or-later and Mesa retains upstream licenses, so check the exact combination and notices before vendoring or distributing anything.

The deko3d alternative remains a fallback. deko3d accepts DKSH with native Maxwell SM53 code, not SPIR-V; UAM is a host-side GLSL-to-DKSH compiler and cannot consume the current SPIR-V output. A deko3d route therefore still needs an Xenos-to-SM53 compiler or another viable runtime compiler strategy.

The detailed feasibility analysis and dependency order are in [`docs/gpu-deko3d-port-plan.md`](../docs/gpu-deko3d-port-plan.md). Simply defining `PES17_HAVE_VULKAN`, linking Vulkan sources without a Switch Vulkan implementation, or forwarding SPIR-V to UAM will not solve this.

### 6. Game data and generated code

The guest PPC C++ files and title metadata are generated from the user's own legally obtained game executable by the existing XenonRecomp build pipeline. They are not generated by the current Switch workflow and proprietary game data must not be committed to this repository. The Switch runtime must load the required game files from SD storage and validate them before entering the guest.

## Recommended implementation sequence

1. **Platform seam:** add a Switch-specific platform implementation and a Switch build option/target. Keep Android and desktop builds unchanged.
2. **Input seam:** extract the guest-facing controller state into a platform-neutral interface; add libnx HID polling and button/axis mapping; test the XInput kernel calls.
3. **Filesystem and startup:** define an SD-card game-data layout, mount the filesystem through libnx, load the legally supplied image/assets, and enter `pes17::Run` from a Switch applet entry point.
4. **Audio:** add audren output and a no-audio diagnostic build mode.
5. **Renderer:** first prove the NXVK/Mesa NVK Vulkan path (including license, loader, WSI, memory and hardware smoke tests). If it fails, evaluate the deko3d path and its Xenos-to-SM53 compiler requirement. Then validate shaders, textures, render targets, synchronization, and presentation.
6. **End-to-end bring-up:** build with real generated PPC sources and user-supplied game data; test boot, menus, match loading, controller play, audio, suspend/resume, and memory stability on hardware.

## Acceptance criteria

A Switch build is not considered a PES port until it links the generated guest code and runtime, loads user-supplied game data from SD, presents the actual game through a working renderer, accepts controller input in-game, and survives a complete match. Producing an NRO alone only validates the homebrew toolchain and packaging.
