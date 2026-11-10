#pragma once

#include <vulkan/vulkan.h>

namespace vk::provider
{
    // Owns the Vulkan instance, instance-level dispatch and optional validation messenger.
    // Platform surface/swapchain ownership remains with the presenter.
    bool CreateInstance(VkInstance& instance);
    void DestroyInstance(VkInstance& instance);
}
