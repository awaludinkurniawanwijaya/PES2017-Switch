#include "switch_driver.h"

#if defined(__SWITCH__) && defined(PES17_VULKAN_DYNAMIC) && defined(PES17_HAVE_VULKAN)

#if defined(PES17_SWITCH_USE_LEGACY_NXVK)
// Backup-only compatibility entrypoint for the archived portlib route.
extern "C" PFN_vkVoidFunction VKAPI_CALL
nvk_GetInstanceProcAddr(VkInstance instance, const char* name);
#else
// Match BO2's Switch instance path: Mesa's static libvulkan.a exports the
// public Vulkan GIPA directly. The loader pointer is named
// vkGetInstanceProcAddrFn, so this function symbol does not collide with it.
extern "C" VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL
vkGetInstanceProcAddr(VkInstance instance, const char* name);
#endif

PFN_vkGetInstanceProcAddr vk::switch_driver::GetInstanceProcAddr()
{
#if defined(PES17_SWITCH_USE_LEGACY_NXVK)
    return &nvk_GetInstanceProcAddr;
#else
    return &vkGetInstanceProcAddr;
#endif
}

const char* vk::switch_driver::Description()
{
#if defined(PES17_SWITCH_USE_LEGACY_NXVK)
    return "legacy NXVK static driver (backup only)";
#else
    return "BO2 Mesa Horizon SDK (statically linked NVK)";
#endif
}

#endif
