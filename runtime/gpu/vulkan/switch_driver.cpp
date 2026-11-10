#include "switch_driver.h"

#if defined(__SWITCH__) && defined(PES17_VULKAN_DYNAMIC) && defined(PES17_HAVE_VULKAN)

// Horizon has no system Vulkan loader. BO2's Switch path also links Mesa NVK
// statically and obtains the public Vulkan dispatch entry point directly.
// Do not use vk_icdGetInstanceProcAddr: that is an ICD-private interface.
extern "C" PFN_vkVoidFunction VKAPI_CALL
nvk_GetInstanceProcAddr(VkInstance instance, const char* name);

PFN_vkGetInstanceProcAddr vk::switch_driver::GetInstanceProcAddr()
{
    return &nvk_GetInstanceProcAddr;
}

const char* vk::switch_driver::Description()
{
    return "statically linked Mesa NVK (Switch Vulkan driver)";
}

#endif
