#include "../gpu/memory_watch.h"

// The Switch guest bank is mapped with Horizon shared-memory services rather
// than POSIX mmap/mprotect. Until a fault-safe Horizon page-watch backend is
// implemented, keep the optional shadow/watch optimisation disabled and let
// the renderer use its normal copy/signature fallback. This is deliberately
// conservative: it preserves guest-memory correctness rather than pretending
// that untracked pages are protected.
void gpu::watch::SetShadow(uint8_t*, uint32_t) {}
bool gpu::watch::Enabled() { return false; }
bool gpu::watch::HandleFault(const void*) { return false; }
void gpu::watch::WillWrite(uint32_t, uint32_t) {}
bool gpu::watch::Serve(uint32_t, uint32_t, uint64_t, uint64_t (*)(), uint64_t)
{
    return false;
}
uint64_t gpu::watch::Track(uint32_t, uint32_t, uint64_t (*)(), uint64_t)
{
    return 0;
}
bool gpu::watch::Unwritten(uint32_t, uint32_t, uint64_t)
{
    return false;
}
uint64_t gpu::watch::FaultCount() { return 0; }
void gpu::watch::Report() {}
