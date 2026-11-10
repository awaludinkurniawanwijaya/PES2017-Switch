#pragma once

#include <vulkan/vulkan.h>
#include <memory>
#include <utility>
#include "device.h"

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


#include <memory>
#include "device.h"

// BO2-style owner for one Vulkan context. It owns Instance first and Device
// second, so destruction always releases the logical device before the instance.
namespace vk::provider
{
    class Context final
    {
    public:
        static std::unique_ptr<Context> Create(bool headless);
        bool SelectHeadlessDevice();
        bool SelectPresentationDevice(VkSurfaceKHR surface);
        bool CreateLogicalDevice(const char* const* extraExtensions, uint32_t extraCount,
                                 void* features = nullptr);

        const vk::instance::Instance* InstanceObject() const { return instance_.get(); }
        const vk::device::Device* DeviceObject() const { return device_.get(); }
        VkInstance InstanceHandle() const;
        VkPhysicalDevice PhysicalHandle() const;
        VkDevice LogicalHandle() const;
        VkQueue QueueHandle() const;
        uint32_t QueueFamily() const;

    private:
        explicit Context(std::unique_ptr<vk::instance::Instance> instance)
            : instance_(std::move(instance)) {}
        std::unique_ptr<vk::instance::Instance> instance_;
        std::unique_ptr<vk::device::Device> device_;
        VkPhysicalDevice selectedPhysical_ = VK_NULL_HANDLE;
        uint32_t selectedQueueFamily_ = 0;
    };
}
