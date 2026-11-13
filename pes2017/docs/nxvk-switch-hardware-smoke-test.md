# NXVK Nintendo Switch Hardware Smoke Test

## Status

Physical-console smoke tests reported on 2026-11-08.

This is a manual test of the upstream NXVK sample applications. It is not a
test of the PES 2017 runtime, game assets, PPC recompilation, or a PES-owned
Vulkan integration executable.

## Console environment

- Console: Nintendo Switch
- Custom firmware: Atmosphère
- Sample applications: `nvk_tri.nro` and `nvk_vi_swapchain.nro`
- Test method: launched from the Homebrew Menu
- Firmware version, Atmosphère version, and sample build revision: not recorded

## Results

### `nvk_tri.nro`

**Result: PASS**

The application displayed a black screen for approximately 1–2 seconds and
then returned to the Homebrew Menu. The captured application log shows that
this is a completed offscreen-render test, not a visible-window triangle demo:

- `vkCreateInstance` returned `0` (`VK_SUCCESS`).
- Physical device: `NVIDIA Tegra X1 (NVK gm20b)`, Vulkan API
  `1.4.354`, vendor `0x10de`.
- `vkCreateDevice`, color-target creation, graphics-pipeline creation, and
  submit/wait all returned `0`.
- Readback returned center pixel `0xff3f417f`; corner pixel
  `0xff000000`, matching the clear color.
- The log ended with `=== nvk_tri PASSED ===` and instance/device teardown.

The black screen is expected for this headless/offscreen sample: it verifies
GPU rendering by reading pixels back rather than presenting a triangle to the
display. Returning to the Homebrew Menu after the PASS log is therefore not a
failure.

### `nvk_vi_swapchain.nro`

**Result: PASS**

- `vkCreateInstance` and `vkCreateDevice` returned `0`.
- `vkCreateViSurfaceNN` returned `0`.
- Queue family 0 reported present support.
- Surface: 1280x720, format 37, colorspace 0; 2 formats reported.
- `vkCreateSwapchainKHR` returned `0`; 3 swapchain images were created.
- All 300 frames were presented.
- The log ended with `=== nvk_vi_swapchain PASSED ===` and instance/device
  teardown.
- The user also observed changing colors on the physical display.

## Conclusions

- The tested Switch/NXVK combination successfully initialized a Vulkan
  instance and Tegra X1 device.
- An offscreen graphics pipeline rendered and returned the expected
  center/corner pixel values.
- The VI WSI path created a surface and swapchain and presented 300 frames.
- These are strong positive results for the tested NXVK paths, but do not
  establish full Vulkan conformance or compatibility with every PES shader,
  resource, synchronization pattern, or render-target operation.
- This remains an upstream sample test, not a playable PES 2017 build.
- No conclusion about PES game performance, stability, audio, input, or
  gameplay can yet be drawn.

## Next engineering checks

1. Add a PES-owned Switch integration/bring-up target that exercises the
   project's actual Vulkan loader and presenter, rather than only upstream
   sample code.
2. Validate the project's Xenos-to-SPIR-V shader translator with representative
   title shader programs and driver validation where practical.
3. Keep physical-console results separate from CI compilation/link checks.
4. Record firmware, Atmosphère, and pinned NXVK build revisions on the next
   hardware test.


## PES-owned GPU clear result (10 November 2026)

Physical Switch log from the PES-owned NRO #147:

- `vkCmdClearColorImage` was recorded for frames 0–119, cycling through three clear-color phases.
- Each frame completed `vkQueueSubmit`, `vkQueuePresentKHR`, and `vkDeviceWaitIdle` with success.
- The run ended `presented 120 / 120`, `PES-OWNED LOADER + VI SWAPCHAIN PASSED`, and `exit=0`.
- NVK reported `zero-copy FAILED`; the run used the supported CPU-copy WSI fallback.

This is stronger than a swapchain-only test: it demonstrates that the transfer-clear workload was submitted and completed on the physical Tegra X1. The user explicitly confirmed that the changing color background was visible on the physical display during NRO #147. This therefore passes a visible GPU transfer-clear test, but it is not yet a graphics-pipeline draw test and does not demonstrate PES game rendering.

## Next milestone: visible graphics-pipeline draw

The next test must move beyond color clearing: implement a minimal graphics pipeline and issue `vkCmdDraw` on the PES-owned VI swapchain. Use the already-tested upstream `nvk_tri` shader, pipeline, and draw implementation as the reference, adapting it to the PES-owned swapchain rather than repeating the color-cycle test. The hardware acceptance criterion is an actual rendered primitive visible on the Switch display, with matching shader/pipeline/draw and present success in the log. Only after this passes should work proceed to textures, geometry/material resources, and integration with the PES renderer. A visible primitive is still a graphics smoke test, not a PES 2017 game scene.


## PES-owned VI graphics pipeline implementation (10 November 2026)

The next PES-owned NRO revision adapts the pinned upstream NXVK `nvk_tri` sample's `tri.vert` and `solid.frag` shaders. It stages the exact generated SPIR-V headers, creates one image view and framebuffer per VI swapchain image, creates a compatible render pass and graphics pipeline without vertex buffers, and records `vkCmdDraw(3, 1, 0, 0)` using `gl_VertexIndex`. The acquired image is rendered directly and presented through the existing VI WSI path. This source implementation is committed; CI build and physical Switch visual confirmation are pending. Acceptance requires an RGB triangle visibly rendered on the console, not merely successful pipeline creation logs. This still does not constitute PES game-scene rendering.
