# Nintendo Switch platform layer: implementation plan

This document defines the first runtime-platform seam for the libnx target. It is intentionally separate from the existing `switch/` homebrew bootstrap: the bootstrap is not the PES runtime.

## CI toolchain status

The repository already has a GitHub Actions workflow at `.github/workflows/switch-nro.yml`. It runs the project build inside the `devkitpro/devkita64:latest` container, which supplies devkitA64 and libnx, then verifies and uploads `switch/pes2017-switch-bootstrap.nro`.

This proves that GitHub Actions can provide the Switch toolchain without installing devkitPro on the developer's Android/Termux device. It currently builds only `switch/source/main.cpp`, not `runtime/` or generated `ppc/` code.

## Existing platform contract

The interface in `runtime/platform.h` requires:

- `Initialise`, `ThreadId`, `IsMainThread`, and `SetThreadName`
- thread priority and affinity controls
- `PrintBacktrace`
- detached worker creation with a caller-selected stack size
- dynamic library lookup

The desktop implementation is split between Win32 and POSIX. The POSIX half is not directly portable to Switch: it includes Android system properties and Linux scheduler/affinity interfaces.

## libnx API mapping

The libnx headers expose native thread primitives in `switch/kernel/thread.h` and kernel services in `switch/kernel/svc.h`:

| Runtime contract | Switch direction | Status / constraint |
|---|---|---|
| Thread identity | `svcGetThreadId` with `CUR_THREAD_HANDLE` | Native API exists; handle errors must be handled |
| Thread creation | `threadCreate`, `threadStart` | Native API exists; wrapper owns a `Thread` object |
| Thread cleanup | `threadWaitForExit`, `threadClose` | Must not free the thread object/stack while it is running |
| Priority | `svcGetThreadPriority`, `svcSetThreadPriority` | Native API exists; runtime roles need measured priority mapping |
| Core affinity | `svcGetThreadCoreMask`, `svcSetThreadCoreMask` | Native API exists; Switch exposes four application cores, not Android-style CPU topology |
| Sleep | `svcSleepThread` | Native API exists |
| Thread naming | no portable equivalent assumed | Safe no-op initially unless a supported debug naming API is verified |
| Backtrace | no desktop `execinfo` equivalent assumed | Diagnostic fallback required |
| Dynamic libraries | no general desktop `dlopen` contract assumed | Must audit call sites; return unsupported only if unused on Switch |

## Required implementation order

1. Add a Switch-only source file and select it explicitly in CMake. Do not compile the POSIX branch on Switch.
2. Implement thread identity, priority, affinity, and sleep using libnx SVCs.
3. Implement detached worker lifetime safely. A worker's `Thread` control block and stack must outlive execution; a reaper or managed worker registry is required. Do not detach by leaking arbitrary thread objects.
4. Make unsupported naming/backtrace/dynamic-library operations explicit and audit all call sites before allowing the runtime to link.
5. Add a CI compile target for the platform translation unit using the same devkitPro container.
6. Only after this translation unit compiles, begin switching the main runtime target and resolving non-platform dependencies.

## Important non-goals

- This platform layer does not provide a GPU renderer. The current Vulkan renderer is not a libnx/deko3d backend.
- It does not provide controller mapping, Audren audio, SD-card game-data loading, or the Switch runtime entry point.
- A successful bootstrap NRO or platform-object compile is not evidence that PES 2017 boots.

## Acceptance criteria

The first platform-layer change is accepted only when:

- Linux/Android source selection remains unchanged.
- The Switch-specific source compiles in GitHub Actions with devkitA64/libnx.
- Thread creation/cleanup has a documented lifetime model and no detached-thread resource leak.
- Unsupported platform services are either proven unused or cause an explicit, actionable build/runtime diagnostic.
