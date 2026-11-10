#pragma once

#include <vulkan/vulkan.h>

namespace vk::provider
{
    // Owns the Vulkan instance, instance-level dispatch and optional validation messenger.
    // Platform surface/swapchain ownership remains with the presenter.
    bool CreateInstance(VkInstance& instance);
    void DestroyInstance(VkInstance& instance);
    // Creates a logical device and loads its device dispatch; feature policy stays in pipeline.
    // Optional present-id/wait support is enabled only when both extensions and features exist.
    VkResult CreateLogicalDevice(VkPhysicalDevice physical, const VkDeviceCreateInfo& info,
                            uint32_t queueFamily, VkDevice& device, VkQueue& queue);
    bool CreatePresentationDevice(VkPhysicalDevice physical, uint32_t queueFamily,
                                  VkDevice& device, VkQueue& queue, bool& presentWait);
    // Selects a graphics queue that can present to the caller-owned surface.
    bool PickPhysicalDevice(VkInstance instance, VkSurfaceKHR surface,
                            VkPhysicalDevice& physical, uint32_t& queueFamily);
}
