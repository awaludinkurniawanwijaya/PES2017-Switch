# Vulkan native migration — BO2-360-NX reference audit

Date: 2026-11-10

## Decision

NXVK development is stopped. Preserve all NXVK source references, build scripts, smoke tests, workflow and historical artifacts. Do not delete them. The active graphics direction is a BO2-360-NX-style Vulkan application/provider/presenter architecture.

Important distinction: this audit does **not** claim that the current PES build is already independent of NXVK. At the previous checkpoint, `CMakeLists.txt` used `pkg_check_modules(SWITCH_VULKAN_DRIVER REQUIRED nxvk)`. The active CMake path has now been changed to require the BO2 Mesa Horizon SDK directory containing `lib/libvulkan.a`; NXVK is retained only behind `PES17_SWITCH_USE_LEGACY_NXVK=ON`. The old smoke implementation under `switch/smoke/` remains historical and has not been rewritten. Do not remove them until the replacement compiles.

## Pinned primary reference

Repository: https://github.com/AlvaroEPena/bo2-360-nx
Commit: `dd189961e8876079087d6f0843af8013bd154277`

Audited files:

| BO2 source | Responsibility | PES migration target |
|---|---|---|
| `sdk/src/ui/windowed_app_context_switch.cpp` | Switch applet/UI loop and UI-thread lifecycle | libnx app context / Switch window lifecycle |
| `sdk/src/ui/vulkan/vulkan_device.cpp` | Vulkan physical-device inspection, required feature/extension checks, logical-device creation and function dispatch | PES Vulkan device/provider layer |
| `sdk/src/ui/vulkan/vulkan_presenter.cpp` | VI WSI surface, swapchain lifecycle, acquire, synchronization, command submission and present | PES Vulkan presenter |
| `app/src/native/bo2zm_native_system.cpp` | Native graphics system setup; creates VulkanProvider and presenter on UI thread; maintains GPU-facing runtime system | PES graphics system and Xenos ring integration |
| `app/src/native/render/bo2zm_native_render.cpp` | Native renderer consuming game GPU command ring and using Vulkan presenter/resources | PES Xenos renderer integration |

## Findings from source inspection

1. BO2 does not implement the whole graphics stack inside its game renderer. It uses the SDK abstraction `VulkanProvider`, `VulkanDevice`, and `VulkanPresenter`. The native game graphics system calls `VulkanProvider::Create(true, true)`, then creates its presenter through the application UI thread.
2. BO2's presenter is responsible for Switch presentation and WSI behavior. It includes Switch-specific VI surface integration and has documented Switch-specific present mode and acquire synchronization choices.
3. BO2 separates the game-facing graphics system/ring sink from Vulkan device and presentation. The ring/system translates game GPU activity into renderer work; the presenter owns platform output.
4. BO2's presenter comments explicitly describe the NVK Horizon WSI implementation and its constraints. Therefore “Vulkan like BO2” means porting BO2's **SDK Vulkan provider/device/presenter architecture and lifecycle**, not claiming BO2 avoids an NVK Vulkan driver. Driver/ICD availability remains a separate platform dependency that must be resolved and documented.
5. PES's current `runtime/gpu/vulkan/loader.*` and `presenter.cpp` are a PES-owned low-level loader/smoke path, not yet a BO2-style provider/device/presenter abstraction. They should be audited and either adapted behind those boundaries or replaced by a minimal compatible layer.

## Migration sequence

### B0 — Reference audit (this checkpoint)
- Pin BO2 commit and source paths.
- Record architecture boundaries and Switch-specific WSI behavior.
- Explicitly distinguish BO2 architecture from the underlying NVK driver.

### B1 — Inventory PES legacy coupling
- Identify every NXVK package lookup, include path, link library, ICD entrypoint, patched upstream source, workflow and smoke test.
- Classify each as driver/runtime dependency, loader, presenter, diagnostic or obsolete experiment.
- No deletion in this step.

### B2 — Define PES Vulkan interfaces
- Establish separate interfaces for instance/device provider, Switch surface/swapchain presenter, command/resource layer and Xenos renderer.
- Keep libnx window/applet lifecycle separate from Vulkan device ownership.
- Specify ownership, teardown order, dispatch source and synchronization contracts.

### B3 — Implement BO2-style provider/device/presenter
- Port the required BO2 SDK behavior to PES's existing C++/libnx structure, or vendor/adapt the smallest compatible SDK subset after license/dependency review.
- Preserve BO2's explicit UI-thread presenter creation and destruction rules.
- Resolve all Vulkan entrypoints from the correct loader/ICD dispatch path; do not assume global loader pointers are equivalent to device dispatch.
- Do not claim independence from NVK unless an alternative Vulkan ICD/driver actually exists and is tested.

### B4 — Build separation
- Add a new Vulkan-native build target/workflow that does not use the legacy NXVK smoke workflow as its source of truth.
- Keep legacy NXVK build optional and isolated.
- Only remove NXVK from the active target once the new target configures, compiles and links successfully.

### B5 — Hardware checkpoints
1. Launch NRO and initialize provider/device.
2. Create VI surface and swapchain.
3. Acquire/submit/present a stable frame.
4. Create image/view/render pass/framebuffer.
5. Create shader modules and graphics pipeline.
6. Execute `vkCmdDraw(3, 1, 0, 0)` and verify a visible RGB triangle.
7. Add resources and then Xenos/PES renderer.

Each checkpoint requires source diff, CI result, device log and visual confirmation where applicable. A successful CI build alone is not a hardware pass.

## Current status

- NXVK: stopped, preserved as backup branch `backup/nxvk-before-vulkan-bo2-direction`.
- BO2 architecture audit: source inspected and mapped above.
- PES Vulkan native provider/device/presenter: not implemented yet; current presenter remains monolithic.
- Current CMake target: defaults to BO2 Mesa Horizon SDK (`libvulkan.a`); legacy NXVK can be selected explicitly. A standalone BO2 SDK probe compiled, linked, packaged in CI, and was launched on physical Switch.
- Probe API result: the user confirmed the NRO reached its HOME-to-exit prompt, but has not yet supplied the preceding `GIPA: PASS` or `FAIL` diagnostic line. Do not count the Vulkan API query as passed until that line is verified.
- Full PES runtime/provider/device/presenter integration: not yet built or tested against this SDK.
- Visible triangle on Switch: not yet proven.


## B1 — PES legacy coupling inventory (source inspection, 2026-11-10)

- At the initial inventory checkpoint, `CMakeLists.txt` required pkg-config module `nxvk` and linked `nvk`/`nvk_support`. This was the old packaging route, not the target application architecture.
- `cmake/switch-toolchain.cmake` obtains target-side archives from devkitPro portlibs.
- `runtime/gpu/vulkan/*.cpp` is already compiled through a source glob, so `switch_driver.cpp` is included without another CMake source entry.
- The legacy NXVK workflow is now manual-only; automatic push triggers were removed.
- `runtime/gpu/vulkan/loader.cpp` owns global function pointer dispatch. Its Switch-specific entrypoint is now delegated to `switch_driver.h/.cpp`.
- `runtime/gpu/vulkan/presenter.cpp` still owns instance creation, device selection, VI surface, swapchain, queues, synchronization, and present in one translation unit. It contains internal `CreateInstance` and `CreateDevice` stages.
- `presenter.h` exposes global `vk::Start/Stop/ShowImage` functions, not BO2-style provider/device/presenter objects.

### Driver versus architecture

BO2's Switch `VulkanInstance` explicitly documents that Horizon has no system Vulkan loader and that NVK is statically linked. BO2 assigns its public `vkGetInstanceProcAddr` directly. BO2 therefore does **not** replace NVK with another Switch graphics driver; it uses a provider/device/presenter architecture above a statically linked NVK driver.

For PES, stopping NXVK development means stopping its app/build/smoke-test route as the architecture, isolating the available static driver behind a platform adapter, and moving instance/device/presentation ownership into BO2-style components. The NVK driver package remains required until a different actual Vulkan driver is available and validated. It would be inaccurate to claim driver independence while this target still links NVK.

### Changes in this checkpoint

- Added `runtime/gpu/vulkan/switch_driver.h/.cpp` as the Switch-specific static-driver entrypoint boundary.
- Changed `loader.cpp` to obtain GIPA through `vk::switch_driver::GetInstanceProcAddr()` and its description through `Description()`.
- At the previous checkpoint, changed the legacy Switch linker's forced symbol from private `vk_icdGetInstanceProcAddr` to the public adapter `nvk_GetInstanceProcAddr`.
- Updated CMake and toolchain wording to distinguish the BO2-style Vulkan application architecture from the static NVK driver package.
- Generalized the Switch WSI diagnostic so it no longer refers to NXVK as the application architecture.

### B1 result

**Partially complete.** Driver entrypoint isolation and dependency inventory are in place. The monolithic presenter and static NVK link remain intentionally; the next safe change is to extract instance/device/provider lifecycle behind PES-owned interfaces without changing the current runtime behavior.


## B2 — BO2 Mesa SDK build-path migration (2026-11-10)

Primary BO2 files rechecked at pinned commit `dd189961e8876079087d6f0843af8013bd154277`:

- `tools/build_mesa.sh`: clones `danfromtico/mesa-switch` at `1a8c1a66d6f`, applies `patches/mesa-bo2zm.patch`, and installs the SDK.
- `sdk/cmake/rexglue_switch.cmake`: expects `REXGLUE_SWITCH_NVK_SDK` to point at the Mesa SDK `opt/devkitpro/portlibs/switch` directory; links `vulkan expat zstd z nx` twice, then `stdc++ m`.
- `sdk/src/ui/vulkan/vulkan_instance.cpp`: assigns the public `::vkGetInstanceProcAddr` symbol directly on Switch.
- `sdk/src/ui/switch_elf_stubs.c`: supplies the libelf stubs needed by Mesa's static archive because the NVIDIA CUBIN parser is not used on the Switch path.

PES changes made in this checkpoint:

1. `PES17_SWITCH_VULKAN_SDK` is now the default Switch Vulkan SDK input and must point to the BO2-style Mesa Horizon SDK portlibs directory. CMake validates both `lib/libvulkan.a` and `include/vulkan/vulkan.h`; it accepts either `PES17_SWITCH_VULKAN_SDK` or BO2 toolchain environment variable `MESA_SDK`.
2. The default target links `vulkan expat zstd z nx` twice and then `stdc++ m`, following BO2's static archive order.
3. The existing `switch/mesa/elf_stubs.c` is added to the active target and C language is enabled for that target.
4. `switch_driver.cpp` now requests the public `vkGetInstanceProcAddr` symbol on the default Mesa path. The old `nvk_GetInstanceProcAddr` entrypoint remains only under `PES17_SWITCH_USE_LEGACY_NXVK=ON`.
5. README and CMake status text now distinguish the default Mesa SDK route from the preserved legacy NXVK route.
6. Removed the old NXVK-only `NVK_I_WANT_A_BROKEN_VULKAN_DRIVER` startup flag and NXVK-specific diagnostic from the active Switch presenter. BO2's checked Switch startup path does not set this flag; it uses the public static Mesa entrypoint directly.

### B2 result and limitations

**Source migration applied; standalone SDK probe verified.** The pinned BO2 Mesa SDK was checksum/manifest verified, statically linked into a standalone probe, packaged as NRO, and launched on physical Switch. This does not yet validate the full PES runtime target. Next work is to compile/link the PES runtime against the same SDK, resolve actual compile/link/API errors, and then extract provider/device/presenter ownership.


## B2.1 — BO2 release SDK link probe (2026-11-10)

A reproducible CI input is now available from the pinned BO2 tag `Release-1.1.0`, whose tag resolves to the same commit `dd189961e8876079087d6f0843af8013bd154277`. Its published Switch/Windows build kit includes the prebuilt runtime package, specifically `runtime/switch/portlibs` (Mesa/NVK headers and archives, plus the separately built static zstd library). The workflow verifies the release ZIP SHA-256 and the embedded runtime manifest before using the SDK:

- Release asset: `bo2-360-nx-release-1.1.0-switch+windows-build-kit.zip`
- SHA-256: `5c973a38b0921650ebfddf47fd9064f46f5aefa60d019a84371cfb0af328a26f`
- Mesa base in manifest: `danfromtico/mesa-switch 1a8c1a66d6f`

Added:

- `switch/mesa/vulkan_link_probe.cpp`: minimal libnx NRO that calls the public Mesa `vkGetInstanceProcAddr`, resolves `vkEnumerateInstanceVersion`, and prints the returned API version.
- `.github/workflows/switch-vulkan-bo2-sdk.yml`: downloads and checksum-verifies the pinned BO2 build kit, extracts only its Switch portlibs SDK, compiles the PES libelf stubs and probe with devkitA64, links the static archives in BO2's exact order, packages a probe NRO, and uploads the NRO/ELF/NACP artifact.

The active CMake configuration now also checks for `libzstd.a` and the devkitPro `libexpat.a`, `libz.a`, and `libnx.a` inputs before proceeding. This catches the common incomplete-SDK case before a long compile.

### B2.1 verification boundary

The workflow completed successfully for commit `8231466c8df55fcff6aac210ed49e2dd83d04757` (run `42857844357`). It verified the pinned BO2 kit checksum and manifest, compiled the probe, linked the static archives in BO2 order, packaged the NRO, and uploaded artifact `pes17-vulkan-bo2-probe` (artifact ID `13782659277`). The user then confirmed that the NRO launched on physical Switch and displayed the HOME-to-exit prompt. This confirms application launch, not necessarily the GIPA/API-version call: the probe prints either `GIPA: PASS; vkEnumerateInstanceVersion result=... API=...` or `FAIL: vkGetInstanceProcAddr did not return vkEnumerateInstanceVersion` before the exit prompt. The exact diagnostic line has not yet been recorded, so the Vulkan entrypoint check remains pending. Full PES runtime/provider/device/presenter integration has not yet been built or tested.


## B2.2 — Physical Switch probe launch (2026-11-10)

- CI run: [42857844357](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42857844357), commit `8231466c8df55fcff6aac210ed49e2dd83d04757`.
- Probe artifact: `pes17-vulkan-bo2-probe`, artifact ID `13782659277`.
- User hardware report: NRO opened and displayed a black console screen with the instruction to press HOME to exit.
- Verified scope: application launch and reaching the probe's applet loop.
- Not yet verified: whether the preceding diagnostic printed `GIPA: PASS` or `FAIL`, exact Vulkan API version, instance creation, device creation, VI surface/swapchain, or any rendered frame.

The probe source prints the GIPA/API-version result before the HOME prompt. Preserve this distinction in progress reports. The next software task is full PES runtime compile/link against the exact same SDK; do not mark triangle rendering or game rendering complete.


## B2.3 — Extended runtime probe build (2026-11-10)

- Source commit: `4f72f70afd6319c5aae76ac4cd0b71703073e38b`.
- CI: [run 42859421857](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42859421857), completed successfully; compile, BO2-order static link, NRO packaging, and artifact upload all passed.
- Artifact: `pes17-vulkan-bo2-probe`, ID `13783778138`, ZIP SHA-256 `8d987da09824ae3a9c7e455f444041b9eb140767f2bd96851e520f68470c427e`.
- Probe source now checks public GIPA, optional API version query, `vkCreateInstance`, `vkEnumeratePhysicalDevices`, and first GPU properties/name. It prints explicit PASS/FAIL diagnostics before the HOME exit prompt.
- Physical Switch result for this extended probe: not yet reported. The prior report applies only to the earlier probe build and must not be reused as evidence for this extended test.
- Full PES runtime integration, logical-device creation, surface/swapchain, presentation, triangle, and game rendering remain unverified.


## B2.4 — Correct instance dispatch and runtime compile gate (2026-11-10)

Source review found that `loader.cpp::LoadInstance` still used a direct `vkGetInstanceProcAddr(...)` call for both instance- and device-dispatch symbol lookup even though this build defines `VK_NO_PROTOTYPES` and stores the driver entrypoint in `vkGetInstanceProcAddrFn`. Both lookups now call the stored GIPA pointer. This keeps dispatch on the adapter-provided static Mesa entrypoint and avoids an undeclared/direct loader symbol.

The BO2 SDK workflow now compiles every `runtime/gpu/vulkan/*.cpp` translation unit for the Switch target against the same pinned Mesa Vulkan headers and devkitPro/libnx headers before building the standalone GIPA/instance/physical-device probe. This is deliberately a **compile-only runtime gate**: it checks PES Vulkan source compatibility with the Switch SDK, but does not link the complete PES executable or prove runtime behavior.

Important build constraint discovered during inspection: this repository checkout does not contain `pes/default.xex` or generated `ppc/*.cpp`. The top-level CMake project intentionally refuses to configure without the user's private game input and matching recompiled PPC output. Therefore this CI step does not pretend to build the complete PES NRO; it isolates and compiles the full Vulkan runtime translation-unit set. Full executable link and physical-device tests remain separate checkpoints.


## B2.5 — Switch-specific RenderDoc compile failure (2026-11-10)

The first runtime compile-gate run (workflow run `42860048323`) reached the PES Vulkan translation units and failed in `runtime/gpu/vulkan/capture.cpp`: the vendored RenderDoc header does not recognize the Horizon `__SWITCH__` platform macro, so `RENDERDOC_CC` and the RenderDoc API declarations were unavailable. RenderDoc's in-process injection/capture mechanism is not part of the Switch runtime.

Correction: `capture.cpp` now enables its RenderDoc implementation only when Vulkan is present **and** the target is not Switch (`PES17_HAVE_RENDERDOC_CAPTURE`). Switch uses the existing no-op capture hooks. This is a platform capability boundary, not a Vulkan driver workaround. The retry is CI run `42860277184`; its final compile result is pending at this checkpoint.


## B2.6 — Vulkan dispatch header must be force-included (2026-11-10)

After the RenderDoc platform guard was corrected, the compile gate advanced to `display_table.cpp` and failed because Vulkan command names such as `vkCreateImage` and `vkCmdPipelineBarrier` were undeclared. These are intentionally function-pointer declarations emitted by `runtime/gpu/vulkan/loader.h` when `PES17_VULKAN_DYNAMIC` is enabled. The header's own comment says it must be force-included before every Vulkan runtime translation unit, but the top-level CMake target had not actually added that compile option.

Correction: the Switch `pes17` target now force-includes the absolute path to `runtime/gpu/vulkan/loader.h` for C++ compilation. The BO2 SDK compile gate mirrors this exact preinclude, rather than compiling with a different set of declarations from the real target. This is a build-system correctness fix; it does not yet establish successful compilation, full executable linkage, or device runtime behavior. Validation is running under workflow `42860946845`.


## B2.7 — Isolasi translation unit yang memerlukan PPC privat (2026-11-10)

Workflow compile gate sempat berhenti di `renderer_draw.cpp` karena file tersebut memasukkan `runtime/kernel/kernel.h`, yang membutuhkan `ppc/ppc_recomp_shared.h`. Header tersebut dihasilkan XenonRecomp dari `default.xex` milik pengguna dan memang tidak disertakan dalam checkout publik.

Pemeriksaan source terhadap seluruh daftar translation unit Vulkan menemukan dua file yang secara langsung memasukkan header kernel tersebut:
- `runtime/gpu/vulkan/renderer_draw.cpp`
- `runtime/gpu/vulkan/renderer_resolve.cpp`

Workflow sekarang menandai dua file tersebut sebagai **DEFERRED** dan tetap mengompilasi translation unit Vulkan lain terhadap SDK BO2 yang dipin. Tidak dibuat header PPC tiruan. Gate ini adalah pemeriksaan parsial yang eksplisit, bukan klaim bahwa seluruh runtime telah terkompilasi.

Percobaan pertama setelah isolasi gagal sebelum kompilasi dimulai karena ekspansi nama variabel compiler di bash; skrip kini menggunakan `${compiler}-g++` dan `${compiler}-gcc`. Perbaikannya divalidasi oleh CI run `42864142164` pada commit `8bab73a0d124000f48c26cf7c82ec6fc58bf1e9f`.

### Batas pembuktian saat ini

- SDK BO2: checksum dan manifest rilis diverifikasi ulang pada run `42864142164`.
- PES Vulkan translation units: **24 dari 26 berhasil dikompilasi** untuk ARM64 Switch pada run `42864142164`; dua file secara eksplisit deferred karena input PPC privat.
- `renderer_draw.cpp` dan `renderer_resolve.cpp`: belum dikompilasi pada target Switch karena `ppc/ppc_recomp_shared.h` tidak tersedia di CI publik.
- Probe GIPA/instance/physical-device berhasil dibangun, ditautkan, dan dipaketkan sebagai NRO pada run tersebut; output diagnostik API pada Switch fisik belum dilaporkan.
- Full PES link, device/WSI, segitiga RGB, dan rendering game: belum terbukti.
### Pemeriksaan enumerasi presenter (11 November 2026)

- Menambahkan helper enumerasi count/data dengan retry terbatas saat Vulkan mengembalikan `VK_INCOMPLETE`; dipakai untuk instance extensions, physical devices, queue families, surface formats, dan swapchain images.
- Query `vkGetPhysicalDeviceSurfaceSupportKHR` kini memeriksa `VkResult` sebelum memakai nilai dukungan present.
- Perubahan ini adalah hardening pada lifecycle yang masih monolitik, bukan pemisahan kelas instance/device ala BO2. Pemisahan ownership/dispatch tetap menjadi pekerjaan berikutnya setelah compile gate selesai.


### Pemeriksaan lifecycle swapchain image ownership (11 November 2026)

- Source review menemukan bahwa saat swapchain lama diganti, vector `g.images` masih dapat menyimpan handle image milik swapchain yang sudah dihancurkan sampai enumerasi swapchain baru selesai.
- Jika pembuatan/enumerasi swapchain baru gagal, handle lama atau hasil enumerasi parsial dapat tertinggal dan terlihat oleh jalur diagnostik/presenter yang memeriksa daftar image.
- `presenter.cpp` kini mengosongkan `g.images` tepat setelah swapchain lama dihancurkan, dan juga membersihkannya pada kegagalan enumerasi image swapchain baru.
- Perubahan source commit: `e69b540f6db57a1eda41782b975619ddf6d6d216`.
- Validasi CI BO2 SDK pada run [42866248741](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42866248741) selesai **success**; workflow compile gate terkait juga lulus. NRO probe yang dihasilkan memiliki SHA-256 sama dengan probe tahap 2 sebelumnya, sehingga tidak mewakili perubahan runtime probe dan tidak perlu diuji ulang.
- Ini memperbaiki konsistensi ownership handle WSI saat resize/recreate. Belum mengubah status arsitektur monolitik dan bukan bukti present atau rendering pada Switch fisik.

## B2.6 — Concrete PES-to-BO2 ownership map (2026-11-11)

This is the source-level extraction map for the current `runtime/gpu/vulkan/presenter.cpp`. It deliberately records the current coupling before moving code; no runtime behavior is changed by this audit.

| PES code/state | Current responsibility | Target owner | Extraction constraint |
|---|---|---|---|
| `CreateInstance`, `InstanceHasExtension`, `Validating`, validation messenger and `g.instance` | Vulkan instance version/extension negotiation, instance creation, instance dispatch load and optional debug messenger | `VulkanInstance` / provider | Keep platform-required extension selection injectable; validation messenger must be destroyed before the instance. |
| `PickDevice`, `g.physical`, `g.queueFamily` | Enumerates physical devices and graphics queue families, then checks presentation support against `g.surface` | Provider/device selection | This is not wholly device-only: present support depends on the presenter's already-created surface. Pass the surface/capability query into selection rather than making the provider own WSI. |
| `CreateDevice`, `g.device`, `g.queue`, `g.presentWait`, `g.waitForPresent` | Chooses optional present-id/wait features, delegates common feature/device creation to `pipeline::CreateDevice`, then loads/checks swapchain dispatch | `VulkanDevice` | Device creation currently mixes renderer feature policy (`pipeline::CreateDevice`) with WSI extensions. Define extension/feature inputs and device-dispatch lifetime explicitly; do not create a second independent device. |
| `CreateSurfaceForWindow`, `g.surface`, `AdoptNewSurface` | Creates/destroys VI or Android surface and handles native-window replacement | Platform surface / presenter | Keep VI and Android WSI out of the generic provider. A surface must be destroyed before its instance. |
| `CreateSwapchain`, `RemakeSwapchain`, `g.swapchain`, `g.images`, `g.extent`, `g.swapchainFormat` | Surface capability/format selection, swapchain creation/recreation and swapchain-owned image tracking | Presenter | Swapchain images are borrowed handles. Clear the image list as soon as the owning swapchain is destroyed, including failure paths. |
| `CreateFrames`, `Acquire`, `Begin`, `SubmitAndPresent`, `DrawOneFrame` | Presenter command pool/buffers, frame semaphores/fences, acquire, submit and present | Presenter | The renderer and presenter share one queue; every queue submit must continue to use `pipeline::QueueMutex()`. |
| `Waiter`, `FollowTheDisplay`, present-wait state | Tracks completion of presents and display timing on a worker thread | Presenter | Stop/join waiter and release swapchain-life locks before destroying the device or swapchain. |
| `Teardown` | Current reverse-order destruction of device resources, swapchain/device, surface, debug messenger and instance | Explicit owner teardown sequence | Required order: stop workers; wait for device idle under the shared queue lock where renderer submissions may race; destroy presenter-owned device resources and swapchain; destroy device; destroy surface; destroy debug messenger; destroy instance; then release platform window. The presenter's current function interleaves these owners and must be split without changing order. |
| `Bring`, `Worker`, window/applet and native-window acquisition | Starts Vulkan and coordinates platform window lifecycle | Switch application context / platform context | Keep libnx applet/window lifetime distinct from Vulkan provider and presenter lifetimes. |
| `pipeline::CreateDevice`, `pipeline::Initialise`, `QueueMutex` | Shared renderer device feature policy, pipeline state, and queue synchronization | Renderer/device integration boundary | Existing pipeline code is also used by headless/offline tools; provider extraction must preserve borrowed-device and headless initialization modes. |

### Dependency findings that constrain the first extraction

1. `PickDevice` cannot be moved unchanged into a surface-agnostic provider: it queries `vkGetPhysicalDeviceSurfaceSupportKHR` using `g.surface`. The provider can enumerate and inspect physical devices, but the presenter/platform WSI must supply the surface and presentation-support predicate.
2. `CreateDevice` is not an isolated raw `vkCreateDevice`: it delegates to `vk::pipeline::CreateDevice`, which records the physical device in pipeline-global state and configures renderer-required features/extensions. The new device abstraction must wrap or deliberately replace that shared policy, not duplicate it.
3. Instance dispatch is loaded immediately after `vkCreateInstance`; device dispatch is loaded by the pipeline device creation path. A split must preserve the exact point at which each dispatch becomes valid and the point at which `vk::loader::ForgetDevice()` restores instance-level pointers.
4. The presenter's queue is shared with the renderer. Queue ownership may be represented by the device object, but queue external synchronization remains shared through `vk::pipeline::QueueMutex()` until the renderer and presenter use one common synchronization contract.
5. `Teardown` currently owns resources from multiple layers. Extraction must first introduce explicit handles/lifetime boundaries, then move destruction in reverse dependency order. Moving the whole presenter or independently destroying shared pipeline/device state would be unsafe.

### Safe implementation order

- **B2.6a (this audit):** map state, methods, dispatch and teardown dependencies. Complete.
- **B2.6b:** introduce a small provider/instance interface that owns only instance creation, instance dispatch and validation messenger. Keep the current call order and public `vk::Start/Stop` behavior unchanged.
- **B2.6c:** represent physical-device selection as a provider query that accepts the active surface/present-support requirement; preserve the current discrete-GPU preference and fallback.
- **B2.6d:** introduce a device wrapper around the existing `pipeline::CreateDevice` path, with explicit requested WSI extensions/features and shared queue synchronization. Do not duplicate device state.
- **B2.6e:** leave VI surface, swapchain, frame synchronization and present in the presenter; only then split platform applet/window lifecycle if it can be done without changing thread ownership.
- Compile each step with the Switch SDK workflow and host tests before proceeding. Hardware testing is required only when a changed NRO provides a new diagnostic or behavior.

### Status after B2.6

The concrete ownership map is complete. No provider/device source extraction has been claimed yet. The first code change is constrained to instance ownership; surface selection, shared pipeline-device state, loader dispatch timing, and reverse teardown order are explicit invariants for that change.

### B2.6b — Initial instance ownership extraction (2026-11-11; CI passed)

- Added `runtime/gpu/vulkan/provider.h/.cpp` with a PES-owned provider boundary for Vulkan instance creation, instance dispatch loading, optional validation callback/messenger ownership, and instance destruction.
- `presenter.cpp` now delegates instance creation/destruction to `vk::provider`; VI/Android surface creation, physical-device selection, device creation, swapchain and frame presentation remain in the presenter for now.
- The original extension negotiation and API-version selection logic was moved without intentionally changing its policy. The provider receives the instance handle by reference so the presenter retains the existing shared state and call sequence during this first extraction.
- The source glob in CMake and the Switch workflow includes the new translation unit automatically.
- CI run [42867472597](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42867472597) passed. The Switch SDK compile gate built 25 Vulkan runtime translation units, including the new `provider.cpp` and modified `presenter.cpp`; only `renderer_draw.cpp` and `renderer_resolve.cpp` remain deferred because they require private generated PPC output. The standalone BO2 SDK probe also linked and packaged successfully.
- The uploaded probe NRO was inspected: SHA-256 `a6078bf57310939d0edaf3b395a0978946332762fb4f4589179f50773ebe8ef3`, identical to the previously tested stage-2 probe. It is therefore not a new hardware-test checkpoint. This is a source ownership boundary, not a completed BO2 provider/device/presenter port.

Next: validate the new translation unit and presenter compile together; fix any compile errors before extracting physical-device selection. Keep dispatch timing, validation-messenger teardown-before-instance, and surface-before-instance destruction unchanged.


CI artifact note: run `42867472597` uploaded artifact `pes17-vulkan-bo2-probe` (artifact ID `13787687844`). Its NRO is byte-identical to the earlier stage-2 probe, so do not ask for another device test until the diagnostic code or behavior changes.

### B2.6c/d — Physical-device and presentation-device provider extraction (2026-11-11; CI passed)

- `provider.cpp/.h` now own `PickPhysicalDevice` and `CreatePresentationDevice`. Physical-device selection accepts the presenter's live `VkSurfaceKHR`, preserving the fact that present support is WSI-specific and avoiding provider ownership of VI/Android surfaces.
- Logical-device creation now receives the selected physical device and queue family, enables `VK_KHR_swapchain`, and conditionally enables the paired `VK_KHR_present_id` / `VK_KHR_present_wait` extensions and feature chain only when both are advertised and supported.
- `presenter.cpp` delegates logical-device creation to the provider. It still validates Switch swapchain dispatch and resolves `vkWaitForPresentKHR`; swapchain, VI surface, frame synchronization, acquire, submit, and present remain presenter-owned.
- The existing `vk::pipeline::CreateDevice` is intentionally retained as the common renderer device policy and device-dispatch path. This avoids duplicating device-global state or breaking its headless/offline tools. A fully independent `VulkanDevice` object is not yet implemented.
- Final commit `dd6faa3c1011586177736e50d911a4244f0552cd` passed workflow [42869421006](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42869421006). The Switch compile gate built 25 Vulkan runtime TUs; `renderer_draw.cpp` and `renderer_resolve.cpp` remain deferred for private generated PPC output. The static BO2 Mesa SDK probe linked and packaged successfully.
- The final artifact `pes17-vulkan-bo2-probe` (ID `13788841794`) was downloaded and inspected. ZIP SHA-256: `f13218ba55c82c7090971d7a0f7401feb98a784e6821ddc1f6cda6c5c3f8a597`; NRO SHA-256: `a6078bf57310939d0edaf3b395a0978946332762fb4f4589179f50773ebe8ef3`, identical to the previous stage-2 probe. No new physical test is warranted.
- A transient intermediate workflow failed because the provider implementation commit was built before its header declaration commit reached the branch; the final branch commit contains all three changes and passed. This was a commit-order race, not a remaining source compile failure.
- This validates a partial source compile and static SDK probe only. It does not validate full PES linking, physical Switch Vulkan initialization, a visible triangle, or PES game rendering.

### B2.6e — Raw logical-device lifecycle boundary (2026-11-11)

- Added `vk::provider::CreateLogicalDevice`: Provider now owns the raw `vkCreateDevice` call, dynamic device-dispatch loading, queue retrieval, and cleanup if the requested queue is unavailable.
- Pipeline retains policy decisions: supported/enabled Vulkan features, extension negotiation, global queue-priority selection and fallback, optional device-fault reporting, and renderer capability flags. Presenter still supplies the chosen physical device, queue family and prepared `VkDeviceCreateInfo`.
- The provider returns the original `VkResult`, preserving Pipeline's retry path when a requested global queue priority is refused. On queue retrieval failure it destroys the just-created device before clearing dynamic dispatch.
- The owned headless Pipeline teardown order was corrected too: call `vkDestroyDevice` while the device dispatch is still loaded, then call `vk::loader::ForgetDevice`. This follows the same reverse-lifetime rule as the provider's queue-failure cleanup.
- SDK workflow [42875642739](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42875642739), commit `db8a50ef4e84949ed3162ab5c4976e7aa81714e6`, completed successfully. It compiled 25 Vulkan runtime translation units, deferred only `renderer_draw.cpp` and `renderer_resolve.cpp` for private PPC-generated headers, and linked/packaged the static BO2 Mesa SDK probe NRO.
- The generic tests workflow for the same commit also passed. A follow-up teardown-order correction was committed separately after that SDK run; its own CI validation is pending, so do not treat the teardown-order correction as validated yet.
- This remains a partial Provider/Device boundary: no independent `VulkanDevice` owner object exists yet, and full PES linking, Switch Vulkan initialization, and game rendering remain unverified.

The teardown-order correction is now validated by the later B2.6f SDK run. Next: extract a distinct device capability/ownership object only after mapping all presenter/headless callers and loader teardown paths; keep Pipeline's renderer-facing accessors stable and do not duplicate feature policy.


### B2.6f — Headless provider path and centralized device lifetime (2026-11-11)

- Moved headless instance creation into vk::provider::CreateHeadlessInstance, including API-version negotiation and only the pre-1.1 instance extensions required by the headless path.
- Moved headless physical-device selection into vk::provider::PickGraphicsDevice. It enumerates candidates and checks for a non-empty graphics queue before selecting; discrete devices are preferred only when usable, with another graphics-capable device retained as fallback.
- Provider now exposes the common device-extension query and owns both logical-device creation and destruction. CreateLogicalDevice loads device dispatch and retrieves the queue; DestroyLogicalDevice destroys the device before restoring dispatch to instance-level entry points.
- Presenter now calls the common destroy path too. It retains WSI responsibilities and presentation-specific extension/feature negotiation; Provider no longer depends on Pipeline.
- Pipeline continues to own renderer capability state and feature/extension policy. This is deliberately not yet a full BO2-style VulkanDevice object; next extract a device capability/ownership boundary while preserving Pipeline's renderer-facing accessors and the presenter's WSI policy.
- SDK validation [42877892242](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42877892242), commit `b2e34b0a1d8a0d0456966c67e7d9e9fd7a182188`, succeeded: 25 Vulkan runtime translation units compiled; only `renderer_draw.cpp` and `renderer_resolve.cpp` were deferred for private XenonRecomp-generated PPC output; the static BO2 Mesa probe NRO linked and packaged. Generic tests [42877901988](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42877901988) also passed.
- Scope: partial compile + SDK probe only. Full PES link, on-device Vulkan initialization, and PES rendering remain unverified.


### B2.6g — Provider and Presenter failure-path hardening (2026-11-11)

- Provider instance creation initializes its output handle and destroys the newly created instance if Switch VI-required entry points are absent after instance dispatch loading. This also clears dynamic instance dispatch via the established `DestroyInstance` path.
- Both physical-device pickers clear output handles before attempting selection. Presentation selection validates the instance, surface and `vkGetPhysicalDeviceSurfaceSupportKHR`; headless selection validates its instance. Candidate queue families must contain at least one queue and support graphics; presentation candidates must additionally support the surface.
- Pipeline device creation validates all required output/input pointers, leaves outputs null on failure, checks the requested queue-family index and queue count, and handles the optional extension array without null-pointer range arithmetic.
- All three Presenter platform branches now propagate `pipeline::Initialise` failure. `Worker` already tears down partial bring-up, so a failed renderer pipeline no longer becomes a false-positive running presenter.
- Validation: SDK workflow [42879873577](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42879873577) on `c98c5a31e2974dbe3642213b2043c5a15a831939` passed; 25 runtime translation units compiled and only `renderer_draw.cpp` / `renderer_resolve.cpp` were deferred for private generated PPC files. Static BO2 Mesa probe NRO was linked and packaged. CTest [42879886281](https://github.com/awaludinkurniawanwijaya/PES2017-Switch/actions/runs/42879886281) passed.
- Still partial source/SDK validation. No full PES link, on-device Switch Vulkan init, or PES scene render is claimed. Next BO2-alignment boundary remains a real Device capability/ownership abstraction, after mapping the existing shared Pipeline state and presenter/headless lifetime; do not create a superficial wrapper or move renderer policy into Provider.


### B2.6h — Device-scoped fault-dispatch lifetime (2026-11-11)

- Reset the optional `VK_EXT_device_fault` function pointer and its associated `VkDevice` at the start of each `pipeline::CreateDevice` attempt. If the next driver/device does not enable that extension, diagnostics cannot accidentally call the previous device's dispatch against a destroyed handle.
- Clear the pair during `pipeline::Shutdown` after renderer cache/layout teardown and before Provider destroys an owned logical device. For borrowed presenter devices, clearing occurs before Pipeline returns control to Presenter, which then performs the device destruction.
- Architectural comparison against pinned BO2 commit `dd189961e8876079087d6f0843af8013bd154277`: BO2 `VulkanDevice` is the real capability/ownership object (physical-device properties, enabled features/extensions, queue families, device and function dispatch). PES still has a deliberate split: Provider handles Vulkan instance/device low-level lifetime; Pipeline owns renderer capability and feature policy; Presenter owns WSI. Do not mark the object extraction complete or make a thin facade; the next extraction must move coherent capability state and its negotiation together.


### B2.6i — Borrowed-device context invalidation (2026-11-11)

- After releasing Pipeline-owned cache/layout resources, `pipeline::Shutdown` now clears all cached Vulkan context handles and queue-family state regardless of ownership. It still calls Provider destruction only for a Pipeline-owned headless context; a borrowed Presenter device/instance remain owned by Presenter.
- This prevents `Instance`, `PhysicalDevice`, `Queue`, `QueueFamily` and related accessors from returning stale borrowed handles after Pipeline shutdown, without changing the BO2-inspired ownership boundary.


### B2.6j — Provider logical-device boundary validation (2026-11-11)

- Hardened `provider::CreateLogicalDevice` as a reusable low-level boundary: rejects null physical devices, malformed `VkDeviceCreateInfo`, out-of-range or queue-less family indices, and create-info records that do not request the queue family that Provider will retrieve. Outputs remain null on all validation failures.
- Validation is intentionally layered: Pipeline validates its renderer-facing arguments and negotiated queue request; Provider independently verifies the Vulkan object-creation contract before invoking the driver.


### B2.6k — Provider queue-create record validation (2026-11-11)

- Provider now validates the complete `VkDeviceQueueCreateInfo` array before calling the driver: record `sType`, nonzero count, non-null priorities, valid family index, per-family queue capacity, finite-by-range priority values (NaN also fails the range predicate), no duplicate family records, and inclusion of the queue family whose queue is retrieved.
- This complements the earlier selected-family check and makes the low-level Provider boundary independently safe for callers other than the current Pipeline.
- No renderer feature policy or WSI policy moved. The next BO2-inspired Device milestone remains a coherent extraction of physical-device properties, feature/extension negotiation, queue-family state and device dispatch—not a superficial wrapper.


### B2.6l — Required Vulkan device-dispatch validation (2026-11-11)

- Changed dynamic `loader::LoadDevice` to return a completeness result. All core device entry points present in the generated runtime call list are mandatory; extension-suffixed KHR/EXT commands remain optional at this generic layer because their enablement is conditional.
- Provider now rolls back a newly created logical device when required core dispatch is incomplete, before the device escapes to Pipeline or Presenter. It destroys through the still-valid instance dispatch, restores instance-level dispatch, nulls the output and reports initialization failure.
- Switch Presenter separately checks the five required swapchain dispatch commands after enabling `VK_KHR_swapchain`. This preserves the division between generic core dispatch and WSI-specific requirements.
- Architectural correspondence: this is one part of BO2 `VulkanDevice`'s contract (verified device function table), not the full object extraction. Properties, enabled feature/extension state and queue-family ownership are still distributed and are not claimed as migrated.


### B2.6m — Cross-platform swapchain-dispatch gate (2026-11-11)

- The Presenter now validates the five required `VK_KHR_swapchain` commands on every window-system platform after logical-device creation, not only Switch. A dynamic Android/SDL driver missing one of these commands fails cleanly before swapchain or present calls can dereference a null dispatch pointer.
- Dispatch validation responsibilities are explicit: Loader checks mandatory core commands, Provider rolls back a device with incomplete core dispatch, and Presenter checks the WSI extension it enabled. Optional present-wait remains independently gated.


### B2.6n — Swapchain gate scoped to dynamic dispatch (2026-11-11)

- Refined B2.6m so runtime null-pointer checks compile only for `PES17_VULKAN_DYNAMIC`. Dynamic loaders on Switch/Android/SDL validate WSI dispatch at startup; statically linked Vulkan builds rely on the linker to resolve those symbols and do not emit meaningless always-non-null function-address checks.


### B2.7 — BO2 VulkanDevice extraction map (design checkpoint, 2026-11-11)

Pinned BO2 `VulkanDevice` is a cohesive owner, not a handle facade. Its relevant responsibilities include physical-device identity/properties, supported/enabled features and extensions, logical device, loaded device functions, queue-family/queue objects and memory-type information.

PES ownership map before extraction:

| Responsibility | Current location | Migration target |
|---|---|---|
| Physical/logical handles, selected queue/family, device properties/name | `pipeline.cpp::State` | Device context |
| Feature/extension negotiation and renderer capability flags (BC/ASTC, dynamic rendering/state, pipeline libraries, anisotropy, precise queries, non-seamless cubes) | `pipeline.cpp::CreateDevice` + `State` | Device capability negotiation/state |
| Logical-device creation/destruction and dynamic dispatch rollback | `provider.cpp` + `loader.cpp` | Device owns logical-device lifetime/dispatch; Provider retains instance operations |
| Surface, swapchain, present-capable queue choice and present extensions | `presenter.cpp::Presenter` | Remains Presenter (supplies WSI requirements to Device) |
| Physical memory properties | duplicated queries in `renderer.cpp`, `texture_cache.cpp`, `framegen.cpp`, `upscaler.cpp` | Cached Device properties/accessor |
| Renderer capability getters and opaque handles | `pipeline.h` | Typed Device/context accessors; Pipeline keeps renderer resource/layout/cache ownership |

Implementation sequence: centralize immutable physical-device and memory properties first; then migrate capability negotiation together with enabled extension/feature state; then transfer device/dispatch lifetime; finally replace consumers and remove duplicate queries. Each step must retain the current two ownership modes (Pipeline-owned headless context vs Presenter-borrowed WSI context), and teardown must continue to stop presentation, destroy renderer/texture resources, then destroy the device and instance. No object extraction has been implemented at this checkpoint; this design is grounded in current call sites and prevents an unsafe bulk move.

### B2.8 — Device metadata consumer audit (2026-11-11)

The first extraction slice was checked against the current call sites rather than inferred from filenames:

- `pipeline.cpp::State` already caches `VkPhysicalDeviceProperties`, while Renderer and Texture Cache repeat physical-device property queries for limits/device metadata.
- Renderer and Texture Cache each store a local `VkPhysicalDeviceMemoryProperties` snapshot. Frame Generation, Upscaler and Presenter additionally query memory properties during image creation/resizing.
- All observed memory-property queries feed the same `vk::util::FindMemory` selection algorithm; subsystem-specific required flags remain different (for example device-local versus host-visible/coherent) and must not be collapsed into one hard-coded allocation choice.

**Next implementation boundary:** introduce one device-context-owned immutable memory-properties snapshot, initialized only after a physical device is selected and cleared with that context. Migrate consumers to read the snapshot while leaving allocation policy, resource ownership and failure cleanup in their current subsystems. Check standalone tool targets (`translate-shader` and `upload-texture`) before making the API mandatory, because they compile selected Vulkan sources independently. This checkpoint records analysis only; it does not claim the Device object or metadata migration has been implemented.

### B2.9 — BO2 Device memory-type model comparison (2026-11-11)

The pinned BO2 implementation (`sdk/include/rex/ui/vulkan/device.h` and `sdk/src/ui/vulkan/vulkan_device.cpp`) was inspected directly. Its Device object does not make every allocator repeatedly inspect a raw physical-device structure: it derives a compact `MemoryTypes` capability set once, exposing bitmasks for device-local, host-visible, host-coherent and host-cached types. Allocation still intersects the resource's Vulkan `memoryTypeBits` with the desired capability mask.

PES should follow that ownership pattern without copying BO2's complete class or allocator policy. The device context should own the immutable memory-property data and may expose derived masks; resource subsystems retain their own required flags, resource lifetime and failure handling. The `memoryTypeBits` intersection is mandatory and must not be lost during migration.

This is a source-grounded design refinement only. The next code change should implement the shared device-scoped metadata API and migrate one consumer group at a time, while retaining standalone tool build compatibility.

### B2.10 — Device-scoped physical memory snapshot implemented (2026-11-11)

Pipeline device context now captures `VkPhysicalDeviceMemoryProperties` once after the borrowed or headless physical device has been selected. `vk::pipeline::GetMemoryProperties(void*, size_t)` exposes a size-checked copy without adding Vulkan headers to `pipeline.h`; the snapshot is cleared with Pipeline context teardown.

Migrated consumers: Renderer, Texture Cache, Frame Generation, Upscaler and Presenter. This removes repeated physical-device memory-property queries from those subsystems. Texture Cache continues to derive its device-local heap budget from the snapshot. Each allocation still intersects the resource's `memoryTypeBits` with the subsystem's requested memory flags; ownership and failure cleanup have not been moved into Pipeline.

Validation is pending for this commit. The next steps are inspect CI, fix any compile/test failures, then migrate physical-device properties through the same lifecycle only after auditing all standalone tool targets.

**Validation update:** the tests-only CTest workflow for implementation commit `53b464bb8145e24e9499ae519eae948155d4eae5` completed successfully. The Switch BO2 Mesa SDK probe job is still running; its result is not yet claimed.

**Validation completed:** CTest passed. The Switch BO2 Mesa SDK job also passed: 25 Vulkan runtime TUs compiled, while `renderer_draw.cpp` and `renderer_resolve.cpp` were explicitly deferred for private XenonRecomp-generated PPC output. The diagnostic probe NRO artifact is `13795401108`, ZIP SHA256 `739048ccefe61e156b403851535e19e5352d8aafa2e568584f88c5aa6eb222b8`. This is not evidence of a complete PES2017 game link or actual scene rendering on Switch.

### B2.11 — Physical-device properties centralized (2026-11-11)

Added `vk::pipeline::GetDeviceProperties(void*, size_t)` alongside the memory-properties accessor. The active Pipeline context now owns the cached `VkPhysicalDeviceProperties` record and clears it at shutdown. Renderer consumers (alignment, maximum image dimension for scale, timestamp period), Texture Cache (maximum image dimension), and Presenter diagnostics now read this snapshot instead of independently querying the physical device. Feature queries remain explicit because extension feature chains are a separate capability negotiation concern.

Validation for this follow-up commit is pending. The previous B2.10 implementation passed CTest and the SDK probe; that result does not automatically validate this new change.

**Validation completed:** CTest and the Switch BO2 Mesa SDK probe both passed for `f10aece7ae651fc4322f5a2f0be77985058adc19`. SDK result: 25 Vulkan runtime TUs compiled; `renderer_draw.cpp` and `renderer_resolve.cpp` deferred for unavailable private XenonRecomp-generated PPC output. The probe validates these runtime TUs and the diagnostic NRO only, not full PES link or game-scene rendering.

### B2.12 — Depth-resolve capability discovery centralized (2026-11-11)

Pipeline now queries and stores whether the selected physical device supports sample-zero depth/stencil resolve, considering Vulkan 1.2 core promotion or `VK_KHR_depth_stencil_resolve`. Renderer reads the immutable capability through `DepthStencilResolveSampleZero()` and retains the policy decision to enable or disable MSAA. Presenter-specific present-ID/present-wait feature negotiation remains in Presenter because it is WSI policy, not a general Device capability.

Validation for B2.12 is pending.

### B2.13 — Core physical-device features cached (2026-11-11)

Pipeline device initialization now snapshots core `VkPhysicalDeviceFeatures` and exposes a size-checked copy accessor. Presenter diagnostics uses the cached feature record rather than issuing a second core-feature query. Extension-specific feature-chain negotiation (for example present-wait) remains with the feature consumer; the snapshot does not imply those extension features are enabled.

Validation for B2.13 is pending.

**Validation completed:** CTest and Switch BO2 Mesa SDK probe passed for `6404803a77719e7edb629f79866df4e4c5ee94ce`; 25 runtime TUs compiled, with `renderer_draw.cpp` and `renderer_resolve.cpp` deferred for private PPC output. Diagnostic NRO artifact `13795207426`, ZIP SHA256 `910b5312d29fa7b9a2d22012d061e0c73b75a477657ea18cdf26b1259deb60aa`. This is not full-game or scene-rendering validation.

**Validation completed:** CTest and Switch BO2 Mesa SDK probe passed for `ec82f9e71fc92924ec587ed7d84107cc4a9ab0fd`; 25 runtime TUs compiled, with `renderer_draw.cpp` and `renderer_resolve.cpp` deferred for private PPC output. Diagnostic NRO artifact `13795297981`, ZIP SHA256 `ab5e114ca6dfc542b66a1be9c1fe1a8f5e27f67e5cb1a73556ea27e6c633e942`. This is not full-game or scene-rendering validation.

### B2.14 — Reuse physical-device snapshots during bring-up (2026-11-11)

`pipeline::CreateDevice` already queried `VkPhysicalDeviceProperties` and `VkPhysicalDeviceFeatures` to select enabled features. It now retains those exact supported records and marks them ready. `Pipeline::Initialise` only queries either record if it was initialized through a direct borrowed-device path that bypassed `CreateDevice`. Every new CreateDevice attempt invalidates readiness before querying a new physical device; Pipeline shutdown clears the snapshots. This avoids duplicate queries and prevents stale records crossing device contexts while preserving the direct borrowed-context API.

Validation for B2.14 is pending.

### B2.15 — Bind cached capabilities to the physical-device handle (2026-11-11)

Added an explicit `snapshotPhysical` association for cached physical properties and core features. `CreateDevice` invalidates the association before a new attempt and binds the new snapshots to the selected physical handle. `Pipeline::Initialise` compares the borrowed/headless context's physical handle with that association and refreshes physical-only records if they differ. Shutdown clears the association. This closes the stale-snapshot case where a previous CreateDevice attempt succeeded but a later direct borrowed initialization supplied a different physical device.

Validation pending.

**Validation completed:** CTest and Switch BO2 Mesa SDK probe passed for `2723795a6f7ec90c041467947f01e3db5f584d74`; 25 runtime TUs compiled, with two private PPC-dependent TUs deferred. Diagnostic NRO artifact `13794259180`, ZIP SHA256 `e2d3020f890252399558751792797faef6bdd882a62d593a3cccf8c2a46716fb`. This does not prove full-game link or scene rendering.

**Validation completed:** CTest and Switch BO2 Mesa SDK probe passed for `147cad0eb0c9ed2f911a548656d5003973e0d98f`; 25 runtime TUs compiled, with the two PPC-dependent renderer TUs deferred. Diagnostic NRO artifact `13795741590`, ZIP SHA256 `487127e7a5027e117d2a6a8d89e646689599d0e12247db1244196e017951d477`. Full-game linking and scene rendering remain unvalidated.

### B2.16 — Failed device bring-up state isolation (2026-11-11)

Added `ResetDeviceSnapshot()` as the common invalidation path for all physical-device-derived state: immutable properties/memory/core features, depth resolve, BC/ASTC format support, anisotropy, rendering/pipeline-library capabilities and device identity. `CreateDevice` rejects replacing an already active Pipeline device, resets prior metadata before a fresh attempt, and resets the failed attempt if `vkCreateDevice` fails. Headless rollback destroys its instance and resets the same state as one operation. This prevents stale capabilities from a failed/abandoned physical-device attempt from appearing valid during a subsequent bring-up.

Validation for B2.16 is pending.
- Portability refinement: reset of the fixed BC capability array uses a range-for loop, avoiding an implicit dependency on `std::begin` declarations.

### B2.17 — BO2 Device abstraction ownership audit (2026-11-11)

Audited the pinned BO2 `VulkanDevice` header/implementation against PES2017's Provider, Presenter and Pipeline. BO2's Device owns physical/logical device, negotiated properties/features/extensions, device function table, queues and memory-type summary; Provider owns its lifetime; Presenter receives it and owns only WSI-specific state. PES2017 currently splits actual device handles between Presenter and Pipeline while `pipeline::State` combines device creation/capability negotiation with descriptor layouts and pipeline cache. A mechanical extraction would create double-destruction or stale borrowed handles, especially in headless bring-up and Presenter worker rollback.

**Migration contract for the next stage:** Provider/Device owns instance, selected physical device, logical device and queue; Presenter borrows Device for surface/swapchain/present operations; Pipeline borrows the Device context while retaining renderer-specific descriptor/pipeline-layout/cache resources. The headless offline path must use the same Device owner without a surface. Migrate lifecycle and rollback first, then move capability negotiation; do not move `CreateDevice` as an isolated code-copy.

**B2.16 validation completed:** CTest and Switch BO2 Mesa SDK probe passed for `27a9b44e9d4132117f82e3f37c85031ee3c93393`. The SDK job compiled 25 Vulkan runtime TUs; `renderer_draw.cpp` and `renderer_resolve.cpp` remain deferred because private XenonRecomp-generated PPC output is unavailable. Diagnostic NRO artifact `13798748685`, ZIP SHA256 `79259f1ce7ab09e32602e5fc431923df95ff1d040bbe55daf2e6737e8a7113c0`. Full PES link and actual game-scene rendering remain unvalidated.

### B2.18 — Presenter/Pipeline lifetime ordering audited (2026-11-11)

Confirmed the current normal shutdown sequence: `StopPresenting()` stops and joins the WSI worker without destroying the device; Renderer and Texture Cache release device resources; `pipeline::Shutdown()` releases pipeline objects and clears borrowed handles without destroying the Presenter-owned device; finally `vk::Stop()` invokes Presenter `Teardown()` to destroy WSI objects, logical device and instance. The Worker startup-failure path explicitly tears down partial WSI/device state and falls back to headless. Normal Worker exit intentionally does not tear down the device, preserving the two-phase ordering.

This ordering is a hard invariant for the BO2 Device extraction: Pipeline resources must be shut down before the Device owner destroys its VkDevice; Presenter owns the Device lifetime only while running the window path, and Pipeline's headless path owns its own Device. Keep these ownership modes explicit rather than relying on destructor order by accident.

### B2.19 — Explicit borrowed Device context contract (2026-11-11)

Introduced `vk::device::BorrowedContext` in `runtime/gpu/vulkan/device.h` as a single non-owning tuple for instance, physical device, logical device, queue and queue family. `Pipeline::Initialise` now accepts either `nullptr` (create/own a headless Device) or a complete borrowed context (Presenter-owned Device); partial tuples are rejected by `Complete()`. Android, Switch and SDL Presenter bring-up use one shared helper, removing repeated positional raw-handle calls. This deliberately does not transfer ownership yet: Presenter remains the window-path Device owner, Pipeline borrows; the full BO2-style owning Device object is the next architectural stage.

Validation for B2.19 is pending.

### B2.20 — RAII logical Device ownership introduced (2026-11-11)

Introduced a non-copyable `vk::device::Device` that owns the logical `VkDevice` and retains its physical-device, queue and queue-family identity. The Vulkan instance remains separately owned by Provider/Presenter during this staged transition. Presenter adopts the logical device produced by the existing Pipeline capability-negotiation path, uses `Device` as the destruction authority, and resets it only during final Teardown after Pipeline/renderer resources are gone. `BorrowedContext` now carries the Device object and instance, not positional raw physical/logical/queue arguments. `device.cpp` is included in the runtime source glob and both explicit offline-tool source lists. The large capability-negotiation body remains in Pipeline for now; this is the ownership stage, not the completed BO2 Device port.

Validation for B2.20 is pending.
- Compile correction: `provider::DestroyLogicalDevice` takes `VkDevice&`, not a temporary. The Device destructor and adoption rollback now use local lvalue handles; the first B2.20 SDK attempt exposed this signature mismatch, and the corrected commit awaits a fresh CI run.

**B2.20 validation completed:** corrected implementation commit `3aa565024700e5999b0e33ecfd9b2858f49f6240` passed CTest and the Switch BO2 Mesa SDK probe. The SDK job compiled 26 Vulkan runtime TUs, including `device.cpp`; `renderer_draw.cpp` and `renderer_resolve.cpp` remain deferred for private XenonRecomp-generated PPC output. Diagnostic NRO artifact `13800372412`, ZIP SHA256 `d9dad4840b2c33f78dc0d346a3b94bae83cbff87b604f1d44c9c9784021a53fe`. The initial `VkDevice&` destroy signature mismatch was corrected before the successful run. Full-game linking and scene rendering remain unvalidated.

### B2.21 — Clear snapshots when Pipeline never adopted the Device (2026-11-11)

Closed a failure-path gap after introducing the RAII Device owner. Presenter creates the logical Device before Pipeline initialization; if a later WSI step fails before Pipeline adopts the borrowed context, `pipeline::Shutdown()` previously returned immediately because `g.device` was null, leaving capability snapshots from the failed attempt cached. The no-device branch now clears fault dispatch pointers, instance/queue/family copies and all physical-device-derived metadata via `ResetDeviceSnapshot()`. The regular shutdown path also uses the shared reset helper rather than duplicating each field reset.

Validation for B2.21 is pending.

### B2.22 — Device is the sole Presenter logical-handle authority (2026-11-11)

Removed Presenter State's duplicate raw `VkDevice` field. All Presenter Vulkan device operations now obtain the handle from the owning `deviceOwner` via `DeviceHandle()`. The `Device` object is the sole logical-device lifetime/destruction authority; Pipeline borrows that same object through `BorrowedContext`. Physical-device and queue/family raw fields are retained temporarily and will be consolidated in a separate step. The corrected implementation is commit `bbe3cf62aa74f55668ffc9290d2791fea3b6f57e`; CI validation pending.

**B2.21 validation completed:** CTest and the Switch BO2 Mesa SDK probe passed for `5803a69c6d754b592a83d3735055aea6371ce81e`. The SDK probe compiled 26 Vulkan runtime TUs; two private PPC-dependent renderer TUs remain deferred. This is not full PES game-link or scene-rendering validation.

### B2.22 — Remove duplicate Presenter device/queue metadata (2026-11-11)

Presenter State no longer caches duplicate raw `VkDevice`, `VkPhysicalDevice`, `VkQueue` or queue-family fields. Before logical-device creation, adapter selection is held explicitly in `selectedPhysical` and `selectedQueueFamily`. After `Device::Adopt`, `DeviceHandle()`, `PhysicalHandle()`, `QueueHandle()` and `QueueFamilyIndex()` resolve the authoritative values from the owning Device. Presenter Teardown clears the pre-creation selection after destroying Device/WSI resources. Pipeline continues to borrow the Device object via `BorrowedContext`; the Vulkan instance remains separately owned by Provider/Presenter.

Implementation commits: `bbe3cf62aa74f55668ffc9290d2791fea3b6f57e` (logical handle migration), `ab00bdd45e3c0e42ebbfc8856a44e405e78cb9c7` (metadata accessors), and `97632d08aee9598e7abaf90eb0954a8d42969d71` (clear selected adapter at teardown). CI validation pending.

**B2.22 validation completed:** CTest and the Switch BO2 Mesa SDK probe passed for `97632d08aee9598e7abaf90eb0954a8d42969d71`. The SDK probe compiled 26 Vulkan runtime TUs, with `renderer_draw.cpp` and `renderer_resolve.cpp` deferred for private PPC output. Diagnostic NRO artifact `13799734628`, ZIP SHA256 `f3ab3850f520cb08e64442e2b6fe266212e2fd8a95ea90d32c8db88f907729f5`. This is not full-game linking or actual scene rendering.

### B2.23 — RAII Instance ownership for Presenter path (2026-11-11)

Added `vk::instance::Instance` as a non-copyable RAII owner for `VkInstance`, with destruction delegated to Provider's instance-dispatch cleanup. Presenter State now holds `std::unique_ptr<Instance>` instead of a raw `VkInstance`; all surface creation/destruction and physical-device selection resolve through `InstanceHandle()`. `BorrowedContext` carries `const Instance*` and `const Device*`, and Pipeline only borrows their handles. Teardown order is surface → Device → Instance. The headless Pipeline path still creates and owns its raw instance internally; it will be migrated separately so both paths converge on one Provider-owned lifecycle.

Validation for B2.23 is pending.

**B2.23 validation completed:** CTest, libnx homebrew NRO build, and Switch BO2 Mesa SDK probe passed for `ebf8836f0126687ec268fb9c8857a76d302fe51e`. The SDK probe compiled 27 Vulkan runtime TUs including `instance.cpp`; two PPC-dependent renderer TUs remain deferred. Diagnostic NRO artifact `13800434703`, ZIP SHA256 `870d0761ab0910e8e7b780c10a50a780a76d2046a5689ed52765a0499906ac3c`. Full PES linking and scene rendering remain unvalidated.

### B2.24 — Unify headless and presenting RAII ownership (2026-11-11)

The offline/headless Pipeline path now creates an `Instance` owner and adopts the created logical device into a `Device` owner, just like the Presenter path. `Pipeline::State` retains `ownedInstance`/`ownedDevice` only for the headless mode; when initialized with a `BorrowedContext`, it retains no owners and cannot destroy Presenter resources. Headless rollback and normal Pipeline shutdown release descriptor/pipeline resources first, then Device, then Instance. Raw `VkInstance`/`VkDevice` fields in Pipeline remain non-owning operational aliases; RAII objects are the sole destruction authorities.

Validation for B2.24 is pending.
