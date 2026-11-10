#pragma once
#include <cstddef>
#include <cstdint>
#include <memory>
#include <utility>
#include "instance.h"

namespace vk::device
{
    // Owns a logical Vulkan device and its immutable physical-device capability snapshot.
    // The VkInstance is separately owned by vk::instance::Instance.
    class Device final
    {
    public:
        static std::unique_ptr<Device> Create(void* physical, uint32_t queueFamily,
                                              const char* const* extraExtensions = nullptr,
                                              uint32_t extraCount = 0, void* features = nullptr);
        ~Device();
        Device(const Device&) = delete;
        Device& operator=(const Device&) = delete;

        void* Physical() const;
        void* Logical() const;
        void* Queue() const;
        uint32_t QueueFamily() const;
        bool Complete() const;
        const char* Name() const;

        bool GetMemoryProperties(void* properties, size_t size) const;
        bool GetDeviceProperties(void* properties, size_t size) const;
        bool GetPhysicalDeviceFeatures(void* features, size_t size) const;
        bool DepthStencilResolveSampleZero() const;
        bool PreciseOcclusionQueries() const;
        float MaxAnisotropy() const;
        bool NonSeamlessCubes() const;
        bool PipelineLibraries() const;
        bool FastLinking() const;
        bool HasDynamicRendering() const;
        bool HasExtendedDynamicState() const;
        bool LegacyMode() const;
        bool StaticStates() const;
        bool TextureCompressionBC() const;
        bool BcFormatSampled(uint32_t index) const;
        bool AstcSampled() const;
        void ReportFault() const;

    private:
        struct Impl;
        explicit Device(std::unique_ptr<Impl> impl);
        std::unique_ptr<Impl> impl_;
    };

    // Pipeline borrows the Provider-owned Instance and Device as one context.
    struct BorrowedContext
    {
        const vk::instance::Instance* instance = nullptr;
        const Device* device = nullptr;
        bool Complete() const { return instance && instance->Handle() && device && device->Complete(); }
    };
}
