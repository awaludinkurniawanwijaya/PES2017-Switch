# Nintendo Switch GPU backend: deko3d feasibility and implementation plan

Status: architecture study only. No deko3d renderer is implemented, and the current Switch NRO remains a bootstrap.

## Executive finding: shader translation is the first hard blocker

The existing renderer is not a thin Vulkan wrapper. Its runtime shader path is:

`Xenos guest microcode -> runtime/gpu/vulkan/shader_translator.cpp -> SPIR-V -> Vulkan shader module/pipeline`.

The translator consumes shader words supplied by the emulated title at runtime. It emits SPIR-V directly through the small writer in `runtime/gpu/vulkan/spirv.cpp`; it does not emit GLSL.

deko3d cannot consume SPIR-V or GLSL modules. It accepts DKSH containers holding native Maxwell 2nd-generation (SM53) machine code and metadata. The UAM compiler produces DKSH from GLSL as a host-side build tool; it is not a runtime compiler and cannot simply replace the existing translator. Therefore, compiling the current generated SPIR-V with UAM is not a valid backend strategy.

Primary references:
- deko3d API and shader format: https://github.com/devkitPro/deko3d
- deko3d shader workflow / DKSH / UAM: https://github.com/devkitPro/deko3d/blob/master/Primer.md
- UAM compiler purpose and host-side usage: https://github.com/devkitPro/uam

## Newly identified alternative: reuse a Switch Vulkan implementation (preferred spike)

A more direct route than replacing Vulkan with deko3d has now been identified. The public [NXVK project](https://github.com/PalindromicBreadLoaf/nxvk) ports Mesa NVK to the Switch GM20B and exposes a Vulkan implementation over libnx. Its Switch build targets Maxwell and includes the NAK shader compiler, so the existing Xenos-to-SPIR-V translator could remain unchanged if the runtime can link and initialize this Vulkan implementation.

This is materially different from deko3d: NVK accepts Vulkan SPIR-V through the Vulkan API, then its NAK backend compiles it to Maxwell machine code. It therefore potentially removes the need to write an Xenos-to-SM53 compiler. The upstream NXVK README documents a Mesa 26.2.2-based Switch build and static archives (`libnvk.a`, `libnvk_support.a`); a separate public packaging project documents a prebuilt static `libvulkan.a` approach. These are promising engineering references, not proof that this repository can link or run them.

References:
- NXVK Switch port and build/licensing notes: https://github.com/PalindromicBreadLoaf/nxvk/blob/switch/switch/README.md
- NXVK Switch build scripts: https://github.com/PalindromicBreadLoaf/nxvk/tree/switch/switch/build
- Public packaged NVK archive and integration notes: https://github.com/jhuz0/nvk-switch
- NVK/NAK Maxwell shader compiler background: https://docs.mesa3d.org/drivers/nvk.html

### Constraints and risks to prove

1. **License compatibility:** NXVK states its newly added files are GPL-2.0-or-later while upstream Mesa files retain their original licenses. This project declares GPL-3.0-only; GPL-2.0-or-later code may be compatible via its GPL-3.0 option, but the exact source set, notices, and redistribution obligations must be audited before vendoring or distributing binaries. Do not copy code from the separate `HayatoG/switch-nvk` fork: it adds its own GPL-2.0-or-later fork policy and should not be treated as a clean dependency.
2. **Vulkan integration:** verify whether NXVK's static archives expose a usable loader/ICD entry point compatible with the current renderer's loader assumptions. Determine required dispatch glue, link order, dependencies, and symbols.
3. **Surface and presentation:** verify `VK_NN_vi_surface`/libnx `nwindow` integration against this app's lifecycle. The current bootstrap console path is not a Vulkan surface.
4. **Runtime footprint:** measure NRO size, static memory, heap use, shader compile time, cache behavior, and available applet memory on real Switch hardware.
5. **Hardware status:** NVK on GM20B is experimental and not considered conformant by Mesa; smoke-test results from another project do not validate PES 2017 rendering.
6. **Version pinning:** pin an exact NXVK/Mesa revision and preserve upstream notices and build provenance. Avoid downloading an unpinned prebuilt archive in the production workflow.

**Preferred decision gate (updated 2026-11-08):** the dedicated GitHub Actions job now successfully builds the pinned NXVK static archives and both upstream smoke NROs (`nvk_tri` and `nvk_vi_swapchain`), and compiles the PES Vulkan loader and presenter adapters for Switch. This proves toolchain/build compatibility and adapter compilation only. It does not prove the smoke NROs run on retail hardware, nor that the PES presenter can create a VI surface, create a device, or present a frame. Next gate: run the two smoke NROs on a Switch, then produce a small PES-owned adapter/presenter integration NRO and validate it on hardware. Only after those gates pass should NVK be selected as the production Switch GPU backend. If this path fails, return to the deko3d shader-feasibility work below.

### Loaderless ICD adapter status

The source mismatch described in the original feasibility study has been addressed in
`runtime/gpu/vulkan/loader.cpp` and `loader.h`:

- On Switch, `vk::loader::Open()` uses the statically linked
  `vk_icdGetInstanceProcAddr` symbol directly; it does not attempt
  `dlopen("libvulkan.so")`.
- The resulting dispatch function populates the runtime's existing Vulkan
  function-pointer table. Instance functions are loaded after instance creation,
  and device functions are refreshed through `vkGetDeviceProcAddr`.
- The Switch NVK feasibility workflow links the pinned NXVK archives and
  compiles both the PES loader and presenter translation units.

This resolves the *source-level entry-point adaptation* and compile gate. It
does not yet prove that the PES loader can initialize NXVK at runtime, that the
PES presenter can create and own its VI surface/swapchain, or that the complete
renderer can link and run. The next gate is a PES-owned Switch integration NRO
that calls this actual loader path and exercises the PES present lifecycle.

## Existing backend boundary

`runtime/gpu/backend.h` already defines a useful backend-neutral command interface:
- lifecycle and display timing: `Initialise`, `Shutdown`, `DisplayBlankPeriod`
- draw, resolve and swap
- occlusion query begin/end/collection
- guest-memory write ordering and write-back publication
- diagnostics

The current implementation in `runtime/gpu/vulkan/backend.cpp` forwards these operations into the Vulkan renderer, texture cache, pipeline manager and presenter. `runtime/gpu/gpu.cpp` mostly talks to this interface, so the command processor does not need to become deko3d-specific.

However, the current `gpu::DrawCall` carries Xenos microcode pointers and hashes. A deko3d backend still needs a shader compiler/cache that converts those arbitrary runtime programs into Maxwell code before it can create `DkShader` objects.

## Required work, in dependency order

### Milestone 0 — prove shader feasibility before writing a renderer

This is a gate, not optional polish.

1. Specify the exact Xenos shader subset exercised by PES 2017, using the existing `xenos::ShaderAnalysis`, shader dumps and the existing interpreter/translator tests.
2. Prototype one minimal Xenos vertex shader and one pixel shader translated to valid SM53 code and DKSH. The prototype must run on the host as a tool or test harness and be validated on Switch hardware.
3. Decide how the runtime will translate arbitrary guest microcode:
   - implement a new Xenos-to-Maxwell code generator (the likely self-contained route, but a substantial compiler project); or
   - investigate whether a legally and technically viable runtime port of the relevant Mesa/Nouveau/UAM compiler pieces can be built for Switch.
4. Define behavior for unsupported instructions and shader features. Do not silently substitute SPIR-V or assume UAM accepts it.

**Exit criterion:** runtime-supplied Xenos microcode can become a DKSH/SM53 shader on the Switch, with correctness tests for representative vertex and pixel programs.

### Milestone 1 — deko3d device and memory foundation

Create a dedicated `runtime/gpu/deko3d/` implementation, without including Vulkan headers in it:
- device and queue ownership;
- command-buffer memory and submission;
- fences / queue synchronization;
- GPU-visible memory allocator and alignment rules;
- debug labels and resource lifetime tracking.

Keep this separate from `runtime/gpu/vulkan/`. Do not make deko3d a compile-time alias for Vulkan.

### Milestone 2 — Xenos resources and render targets

Port the existing resource semantics, not Vulkan object names:
- Xenos EDRAM surface identity, format, pitch, sample count and depth/color targets;
- image allocation, views, texture formats, component swizzles and sRGB behavior;
- texture tiling/untile and guest-memory snapshots;
- multisample resolve and depth resolve;
- cache invalidation for guest writes and ordered write-back publication.

The Vulkan renderer's `Target`, `Resolved`, pipeline keys and texture cache are useful behavioral references, but their VkImage/VkDeviceMemory/VkImageView state cannot be reused directly.

### Milestone 3 — graphics state and draw execution

Map the existing register-driven pipeline state to deko3d:
- shader stages and uniform/storage resources;
- vertex/index buffers and fetch formats;
- primitive topology;
- viewport/scissor and rasterization;
- depth/stencil, blend and color-write state;
- MSAA and render-target binding.

Compare the actual Xenos feature requirements against deko3d's documented feature support. Build focused tests for every required state mapping before full-game use.

### Milestone 4 — presentation and guest synchronization

Implement front-buffer presentation, display blank timing, guest occlusion-query semantics, command completion, and resolve/write-back ordering. The guest CPU observes these operations; a visually correct frame alone is insufficient if fences, queries or memory writes are late.

### Milestone 5 — integrate and validate on hardware

Only after the previous gates:
- add a `PES17_GPU_BACKEND=deko3d` CMake path and link the Switch runtime target;
- run shader, texture, resolve and draw micro-tests on hardware;
- test menu, match loading, full match, suspend/resume and memory pressure;
- keep Vulkan/desktop/Android builds unchanged.

## Immediate next engineering task

Do not start by creating a large empty deko3d `backend.cpp`. First run the preferred NVK feasibility spike: pin and audit the NXVK source/license set, reproduce its build in GitHub Actions, and produce a small Vulkan smoke NRO using its own test shaders. Then test whether the current Vulkan renderer can link against that implementation and present through libnx WSI. This would preserve the existing Xenos-to-SPIR-V translator and avoid a new Xenos-to-SM53 compiler. Keep the deko3d plan as a fallback; if NVK cannot be integrated or its runtime footprint is unacceptable, resume the real-shader Xenos-to-SM53 spike. The current Xenos analysis and instruction decoder remain reusable inputs.

## Acceptance rule

A deko3d backend is not complete when it can clear a screen or draw a test triangle. It must pass the same guest-facing draw, resolve, query, memory ordering and shader behavior expected by `gpu::backend`, then render PES 2017 on hardware.

## NXVK smoke build: exact integration contract (2026-11-08)

The pinned NXVK revision used by the feasibility workflow is `c3abea1efde44027b7e3e20b48eb55beeecd5ab4`. Inspection of its own build scripts and smoke sources narrows the integration work:

- The exported entry point is `vk_icdGetInstanceProcAddr(VkInstance, const char*)`, not a standard dynamic-loader export. The app must retain it with `-Wl,-u,vk_icdGetInstanceProcAddr` and resolve both instance and device functions through it. A Switch-specific loader entry path can adapt this function to the renderer's existing function-pointer table; do not try `dlopen("libvulkan.so")` on Switch.
- The reference linker uses `-Wl,--whole-archive ... libnvk.a -Wl,--no-whole-archive`, then groups the support archives to resolve circular/static dependencies. Its archive set includes Mesa util/SIMD, BLAKE3, C11, NAK/Rust helpers, NVIDIA headers, NIL, NIR/compiler, MME, Nouveau winsys, Vulkan util, SPIR-V/VTN and XML config, plus devkitPro zlib/expat and libnx. Reuse the pinned upstream link recipe as the initial source of truth; do not guess a shortened library list.
- The upstream `nvk_tri` test is an offscreen render/readback test. The separate `nvk_vi_swapchain` test enables `VK_KHR_surface`, `VK_NN_vi_surface`, and `VK_KHR_swapchain`, creates a surface from `nwindowGetDefault()`, and presents up to 300 frames. The second test is the relevant gate for PES presentation, but it only proves the NXVK WSI path, not the PES renderer's surface ownership or frame lifecycle.
- The app must compile with `-D__SWITCH__ -DVK_USE_PLATFORM_VI_NN`, Mesa's vendored Vulkan headers, devkitPro libnx headers, `-ffunction-sections -fdata-sections`, and link with libnx's Switch specs. NXVK's compatibility shim also supplies newlib gaps such as `getrandom`, `posix_memalign`, `sysconf`, identity helpers and regex functions; its source/license must remain part of any combined distribution audit.

**Current gate (updated 2026-11-08):** the user's physical Switch logs now
confirm both upstream samples pass: `nvk_tri` successfully creates a graphics
pipeline, submits work and reads back the expected center/corner pixels;
`nvk_vi_swapchain` creates a VI surface and swapchain and presents all 300
frames. The PES loader and presenter also compile against the pinned NXVK
headers in CI, and the loaderless ICD entry-point adaptation exists in
`loader.cpp`. These results close the upstream sample and adapter-compilation
gates only.

**Next gate:** produce a PES-owned Switch integration NRO that calls the
project's actual `vk::loader::Open()` path, loads instance dispatch, creates a
VI surface from libnx's `NWindow`, checks graphics/present queue support, and
presents a deterministic clear workload. Then test that NRO on the user's
console. This is still narrower than the full `presenter.cpp` lifecycle; once
the loader-owned integration test passes, make the existing PES presenter
start against the same NXVK ICD and verify its frame queue/swapchain lifecycle.
Keep this Switch-only path isolated from Android and desktop loader paths.
