#pragma once

#include <vulkan/vulkan.h>

namespace vk::provider
{
    // Owns the Vulkan instance, instance-level dispatch and optional validation messenger.
    // Platform surface/swapchain ownership remains with the presenter.
    bool CreateInstance(VkInstance& instance);
    // Headless/offline tools need an instance without any window-system extensions.
    bool CreateHeadlessInstance(VkInstance& instance);
    // Queries an extension advertised by a physical device.
    bool DeviceHasExtension(VkPhysicalDevice physical, const char* name);
    void DestroyInstance(VkInstance& instance);
    // Creates a logical device and loads its device dispatch; feature policy stays in pipeline.
    VkResult CreateLogicalDevice(VkPhysicalDevice physical, const VkDeviceCreateInfo& info,
                            uint32_t queueFamily, VkDevice& device, VkQueue& queue);
    // Destroys a logical device while its device dispatch is still loaded.
    void DestroyLogicalDevice(VkDevice& device);
    // Selects a graphics queue that can present to the caller-owned surface.
    bool PickPhysicalDevice(VkInstance instance, VkSurfaceKHR surface,
                            VkPhysicalDevice& physical, uint32_t& queueFamily);
    // Selects a graphics-capable device without requiring presentation support.
    bool PickGraphicsDevice(VkInstance instance, VkPhysicalDevice& physical,
                            uint32_t& queueFamily);
}
