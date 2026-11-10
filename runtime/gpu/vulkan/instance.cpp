#include "instance.h"

#ifndef PES17_HAVE_VULKAN
std::unique_ptr<vk::instance::Instance> vk::instance::Instance::Adopt(void*) { return nullptr; }
vk::instance::Instance::~Instance() = default;
#else
#include "provider.h"
#include <vulkan/vulkan.h>

std::unique_ptr<vk::instance::Instance> vk::instance::Instance::Adopt(void* handle)
{
    if (!handle) return nullptr;
    return std::unique_ptr<Instance>(new Instance(handle));
}

vk::instance::Instance::~Instance()
{
    if (handle_)
    {
        VkInstance instance = static_cast<VkInstance>(handle_);
        vk::provider::DestroyInstance(instance);
        handle_ = nullptr;
    }
}
#endif
