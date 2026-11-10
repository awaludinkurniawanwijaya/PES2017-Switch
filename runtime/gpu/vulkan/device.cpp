#include "device.h"

#ifndef PES17_HAVE_VULKAN
std::unique_ptr<vk::device::Device> vk::device::Device::Adopt(void*, void*, void*, uint32_t)
{
    return nullptr;
}
vk::device::Device::Device(void* physical, void* logical, void* queue, uint32_t queueFamily)
    : physical_(physical), logical_(logical), queue_(queue), queueFamily_(queueFamily) {}
vk::device::Device::~Device() = default;
#else
#include "provider.h"
#include <vulkan/vulkan.h>

vk::device::Device::Device(void* physical, void* logical, void* queue, uint32_t queueFamily)
    : physical_(physical), logical_(logical), queue_(queue), queueFamily_(queueFamily) {}

std::unique_ptr<vk::device::Device> vk::device::Device::Adopt(
    void* physical, void* logical, void* queue, uint32_t queueFamily)
{
    if (!physical || !logical || !queue) return nullptr;
    return std::unique_ptr<Device>(new Device(physical, logical, queue, queueFamily));
}

vk::device::Device::~Device()
{
    if (logical_)
        vk::provider::DestroyLogicalDevice(static_cast<VkDevice>(logical_));
}
#endif
