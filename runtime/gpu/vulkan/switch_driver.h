#pragma once

#if defined(__SWITCH__) && defined(PES17_VULKAN_DYNAMIC) && defined(PES17_HAVE_VULKAN)
#include <vulkan/vulkan.h>

namespace vk::switch_driver
{
    // The Switch Vulkan application layer depends on a Vulkan implementation,
    // not on NXVK's application/build scaffolding. BO2 uses the same model:
    // Mesa NVK is statically linked and its public GIPA is the driver boundary.
    PFN_vkGetInstanceProcAddr GetInstanceProcAddr();
    const char* Description();
}
#endif
