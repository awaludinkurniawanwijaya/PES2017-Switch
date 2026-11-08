# NXVK Nintendo Switch Hardware Smoke Test

## Status

Preliminary physical-console observations reported on 2026-11-08.

This is a manual smoke test of the upstream NXVK sample applications. It is
not a test of the PES 2017 runtime, game assets, PPC recompilation, or a
PES-owned Vulkan integration executable.

## Console environment

- Console: Nintendo Switch
- Custom firmware: Atmosphère
- Sample applications: `nvk_tri.nro` and `nvk_vi_swapchain.nro`
- Test method: launched from the Homebrew Menu
- Firmware version, Atmosphère version, and sample build revision: not recorded

## Observations

| Sample | Observation | Interpretation |
| --- | --- | --- |
| `nvk_tri.nro` | The application closed after being opened. | The triangle sample did not complete the expected visible test. The cause is unknown; this observation alone does not identify whether the failure occurred during Vulkan initialization, device creation, rendering, or process startup. |
| `nvk_vi_swapchain.nro` | The display showed changing colors. | Positive evidence that this sample reached a visible VI swapchain presentation path on the physical console. It does not establish full Vulkan conformance or PES renderer compatibility. |

## Conclusions

- Physical hardware has demonstrated visible color presentation through
  `nvk_vi_swapchain.nro`.
- The `nvk_tri.nro` result remains unresolved and needs diagnostics.
- These samples are upstream NXVK smoke tests, not a playable PES 2017 build.
- No conclusion about game performance, stability, audio, input, or full
  renderer compatibility can be drawn from these observations.

## Next engineering checks

1. Inspect the triangle sample's startup and failure path and determine
   whether it exposes useful console diagnostics.
2. Reproduce the triangle sample on the same pinned NXVK/toolchain revision
   and preserve the normal build output and failure diagnostics in CI.
3. Build a PES-owned integration test that exercises the project's Vulkan
   loader and presenter against the validated Switch WSI path.
4. Keep physical-console results separate from CI compilation/link checks.
