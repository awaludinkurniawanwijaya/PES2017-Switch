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
- Current CMake target: defaults to BO2 Mesa Horizon SDK (`libvulkan.a`); legacy NXVK can be selected explicitly. The new SDK path has not yet been compiled or linked in CI.
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

### B2 result and limitations

**Source migration applied; compile/link not yet verified.** No GitHub Actions workflow currently builds the large Mesa SDK; the existing `switch-nro.yml` only builds the libnx bootstrap and does not validate this CMake target. No NRO artifact is claimed from this checkpoint. Next work must provide the pinned Mesa SDK to a build runner, compile/link the PES full runtime, then resolve any real linker or API errors before extracting provider/device/presenter ownership.
