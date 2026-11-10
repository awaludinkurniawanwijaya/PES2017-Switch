#pragma once

#include <vulkan/vulkan.h>

namespace vk::provider
{
    // Owns the Vulkan instance, instance-level dispatch and optional validation messenger.
    // Platform surface/swapchain ownership remains with the presenter.
    bool CreateInstance(VkInstance& instance);
    void DestroyInstance(VkInstance& instance);
    // Creates the presenter's logical device; the pipeline layer supplies PES renderer features.
    // Optional present-id/wait support is enabled only when both extensions and features exist.
    bool CreatePresentationDevice(VkPhysicalDevice physical, uint32_t queueFamily,
                                  VkDevice& device, VkQueue& queue, bool& presentWait);
    // Selects a graphics queue that can present to the caller-owned surface.
    bool PickPhysicalDevice(VkInstance instance, VkSurfaceKHR surface,
                            VkPhysicalDevice& physical, uint32_t& queueFamily);
}
