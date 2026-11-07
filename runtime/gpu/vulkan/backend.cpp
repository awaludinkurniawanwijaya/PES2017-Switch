#include "../backend.h"
#include "pipeline.h"
#include "presenter.h"
#include "renderer.h"
#include "texture_cache.h"
#include "../../log.h"

namespace gpu::backend
{
    bool Initialise(bool rendering)
    {
        vk::Start();
        return !rendering || vk::renderer::Initialise();
    }

    void Shutdown()
    {
        vk::StopPresenting();
        vk::renderer::Shutdown();
        vk::textures::Shutdown();
        vk::pipeline::Shutdown();
        vk::Stop();
    }

    uint64_t DisplayBlankPeriod()
    {
        return vk::GuestBlankPeriod();
    }

    void Draw(const gpu::RegisterFile& registers, const gpu::DrawCall& call)
    {
        vk::renderer::Draw(registers, call);
    }

    void Resolve(const gpu::RegisterFile& registers)
    {
        vk::renderer::Resolve(registers);
    }

    void Swap(uint32_t frontBuffer)
    {
        vk::renderer::Swap(frontBuffer);
    }

    void BeginOcclusionQuery()
    {
        vk::renderer::BeginOcclusionQuery();
    }

    bool EndOcclusionQuery(uint32_t tag, uint64_t& samples)
    {
        return vk::renderer::EndOcclusionQuery(tag, samples);
    }

    void CollectOcclusionQueries(void (*deliver)(uint32_t tag, uint64_t samples))
    {
        vk::renderer::CollectOcclusionQueries(deliver);
    }

    void BeforeStreamWrite(uint32_t physical, uint32_t size)
    {
        vk::renderer::BeforeStreamWrite(physical, size);
    }

    void MemoryWritten(uint32_t physical, uint32_t size)
    {
        vk::textures::MemoryWritten(physical, size);
    }

    void BeforeCompletion()
    {
        vk::renderer::BeforeCompletion();
    }

    void PublishWriteBacks()
    {
        vk::renderer::PublishWriteBacks();
    }

    bool DumpingDraws()
    {
        return vk::renderer::DumpingDraws();
    }

    void Report()
    {
        if (vk::Running())
            LOGI("gpu: %llu frames reached the window",
                 (unsigned long long)vk::PresentedFrames());

        vk::renderer::Report();
        vk::textures::Report();
    }
}
