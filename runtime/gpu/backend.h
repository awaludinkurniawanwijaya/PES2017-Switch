#pragma once
#include <cstdint>

namespace gpu
{
    struct RegisterFile;
    struct DrawCall;
}

namespace gpu::backend
{
    // Backend lifecycle and display timing.
    bool Initialise(bool rendering);
    void Shutdown();
    uint64_t DisplayBlankPeriod();

    // Core rendering operations.
    void Draw(const gpu::RegisterFile& registers, const gpu::DrawCall& call);
    void Resolve(const gpu::RegisterFile& registers);
    void Swap(uint32_t frontBuffer);

    // Guest GPU occlusion queries.
    void BeginOcclusionQuery();
    bool EndOcclusionQuery(uint32_t tag, uint64_t& samples);
    void CollectOcclusionQueries(void (*deliver)(uint32_t tag, uint64_t samples));

    // Guest-memory synchronization.
    void BeforeStreamWrite(uint32_t physical, uint32_t size);
    void MemoryWritten(uint32_t physical, uint32_t size);
    void BeforeCompletion();
    void PublishWriteBacks();

    // Diagnostics.
    bool DumpingDraws();
    void Report();
}
