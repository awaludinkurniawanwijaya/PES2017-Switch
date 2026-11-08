# Nintendo Switch performance plan

Status: performance policy and measurement gates; not a claim of measured game speed. The PES runtime is not yet linked into the Switch NRO and no match has been run on Switch hardware.

## Objective

Prioritise stable frame pacing and a complete playable match over peak benchmark numbers. The first target is a stable 60 Hz presentation path where the game and driver can sustain it. A stable 30 Hz fallback is preferable to repeated missed 60 Hz frames. Do not claim either target until measured on retail hardware.

## Performance order of work

1. **Make the GPU path correct before tuning it.** Build the pinned NXVK static archives, prove ICD entry-point lookup, create a Vulkan device, create a `VK_NN_vi_surface` surface from libnx's `NWindow`, and present a deterministic clear/triangle workload. Preserve the upstream support-archive link order and compatibility shim.
2. **Measure CPU and GPU separately.** Record frame CPU time, GPU pass time, queue/fence wait, present interval, guest PPC time, shader compile time, cache hit/miss, texture upload bytes, and peak resident memory. Use timestamp queries only when supported; otherwise mark GPU time unavailable rather than substituting CPU time.
3. **Keep shader compilation out of gameplay.** Translate/cache Xenos shaders by stable guest microcode hash and relevant translation options. Persist Vulkan pipeline cache data on SD; load it at startup and save throttled/at clean shutdown. Warm known menu and match pipelines before entering live play where possible. Never block the render thread on duplicate pipeline creation; serialize cache mutations with the existing creation/cache locks.
4. **Use resolution as the first controlled GPU trade-off.** Start with 1280x720 output in handheld mode and a separately measured docked profile. Render scale must be configurable and change only at frame boundaries. Use a slow hysteretic controller driven by measured GPU pass time, not CPU frame time. Avoid changing scale during a short transient or shader compilation spike. If the Switch implementation cannot read reliable GPU timestamps, expose fixed quality presets instead of pretending the dynamic controller is informed.
5. **Reduce bandwidth and memory pressure.** Reuse the existing texture cache and upload staging pools; avoid per-frame allocation, redundant texture staging, and device-wide idle waits in the normal frame path. Track texture-cache budget, render-target bytes, upload-ring occupancy and peak allocations. Keep at least the required number of frames in flight, but cap queue depth so latency does not grow.
6. **Preserve frame pacing.** Use the present mode supported by the NXVK WSI, a bounded frame queue, and a single owner for `NWindow`/surface lifecycle. Do not busy-wait for vblank. Verify audio queue stability and input polling independently of render stalls.
7. **Tune the CPU only from profiles.** The Switch CPU is ARM Cortex-A57. Build release code with optimisation and dead-section elimination, but compare `-O2` and `-O3` on the real guest workload before selecting. Do not enable unsafe fast-math globally: Xenos shader math, audio and emulation-visible floating-point behaviour can be affected. Keep LTO/PGO as measured experiments, not defaults, until link memory, build time and runtime results are known.
8. **Thermal and long-session validation.** Run repeated 20-30 minute matches, not only short smoke tests. Record clock/thermal state where the platform exposes it, frame-time percentiles, throttling, memory growth, audio underruns and crashes. Prefer a slightly lower sustained profile over a fast first minute followed by thermal collapse.

## Required benchmark scenes

- Cold boot to title/menu, including first-use shader compilation.
- Match entrance/cutscene (often a different shader/pipeline workload).
- Full match with camera motion, players, crowd, pitch and effects.
- Replay/camera transitions and pause/menu overlays.
- Repeated matches and a 20-30 minute thermal soak.
- Handheld and docked modes, each at its intended output profile.

## Metrics and acceptance

Report median, p95 and p99 frame time; percentage of frames over 16.67 ms and 33.33 ms; CPU guest time; GPU pass time; present interval; shader compile stalls; peak memory; audio underruns; and any thermal/clock changes. Keep raw CSV/logs with the exact commit, console model, firmware, mode, resolution, driver revision and test scene.

A 60 Hz target corresponds to 16.67 ms per frame; 30 Hz corresponds to 33.33 ms. A profile is accepted only after a full match and long-session test without sustained frame pacing collapse, audio underruns, memory growth, device loss or crashes. Report actual measured results; do not extrapolate from host CI or NRO build success.

## Guardrails

- No overclock, undocumented clock changes, unsafe voltage settings, or thermal-limit bypass.
- Do not disable synchronisation or use unlimited frame queues to inflate average FPS.
- Do not lower visual quality silently. Every scale/quality change must be visible in diagnostics and user-configurable.
- Do not change guest-visible precision globally for speed without regression tests.
- Keep desktop and Android defaults unchanged; Switch-specific policy belongs behind the Switch build/platform seam.
- The current Android-oriented dynamic-resolution controller is policy code, not a Switch thermal integration. Reuse its hysteresis concepts only after adding a Switch-specific source of reliable GPU timings and thermal data.

## Current blockers

- The game runtime and generated PPC code are not yet linked into the bootstrap NRO.
- NXVK archive and smoke-NRO build is still in progress; its WSI and ICD adapter are not yet validated in this project.
- No retail Switch performance data exists yet.
- Audio sink, input bridge, SD game-data loading, shader cache persistence and full renderer integration still need end-to-end validation.
