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

Do not start by creating a large empty `backend.cpp`. First build a small shader feasibility spike that consumes a real, legally obtained guest shader dump and answers whether an Xenos-to-SM53 translator can be built with acceptable correctness and runtime cost. The current Xenos analysis and instruction decoder are reusable inputs; the current SPIR-V writer is not a deko3d output path.

## Acceptance rule

A deko3d backend is not complete when it can clear a screen or draw a test triangle. It must pass the same guest-facing draw, resolve, query, memory ordering and shader behavior expected by `gpu::backend`, then render PES 2017 on hardware.