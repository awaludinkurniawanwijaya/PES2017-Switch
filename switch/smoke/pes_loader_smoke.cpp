// PES-owned Vulkan loader + VI swapchain smoke test.
// Exercises runtime/gpu/vulkan/loader.cpp rather than calling the ICD entry point directly.
#define VK_USE_PLATFORM_VI_NN 1
#include "gpu/vulkan/loader.h"
#include <switch.h>
#include <cstdio>
#include <cstring>
#include <string>
#include <cstdarg>
#include <cstdlib>
#include <cstdarg>
#include <cstdlib>
#include <vector>

extern "C" {
u32 __nx_applet_type = AppletType_Application;
u32 __nx_heap_size = 0;
}

static FILE* g_log = nullptr;
static void Log(const char* fmt, ...)
{
    if (!g_log) return;
    va_list ap; va_start(ap, fmt); vfprintf(g_log, fmt, ap); va_end(ap);
    fputc('\n', g_log); fflush(g_log);
}
#define CHECK_VK(expr) if (VkResult r_ = (expr); r_ != VK_SUCCESS) { Log("FAIL %s -> %d", #expr, int(r_)); result = 1; break; }

int main()
{
    fsdevMountSdmc();
    g_log = fopen("sdmc:/pes_nxvk_loader_smoke.log", "w");
    if (!g_log) return 2;
    Log("=== PES-owned NXVK loader smoke ===");
    std::string error;
    if (!vk::loader::Open(error)) { Log("loader Open failed: %s", error.c_str()); return 3; }
    Log("loader=%s missing=%u", vk::loader::Description(), vk::loader::Missing());

    VkInstance instance = VK_NULL_HANDLE;
    VkDevice device = VK_NULL_HANDLE;
    VkSurfaceKHR surface = VK_NULL_HANDLE;
    VkSwapchainKHR swapchain = VK_NULL_HANDLE;
    VkSemaphore acquired = VK_NULL_HANDLE;
    VkQueue queue = VK_NULL_HANDLE;
    int result = 0;
    do {
    const char* instanceExts[] = { VK_KHR_SURFACE_EXTENSION_NAME, "VK_NN_vi_surface" };
    VkApplicationInfo app{VK_STRUCTURE_TYPE_APPLICATION_INFO};
    app.pApplicationName = "PES 2017 loader smoke";
    app.apiVersion = VK_API_VERSION_1_0;
    VkInstanceCreateInfo ici{VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO};
    ici.pApplicationInfo = &app;
    ici.enabledExtensionCount = 2;
    ici.ppEnabledExtensionNames = instanceExts;
    CHECK_VK(vkCreateInstance(&ici, nullptr, &instance));
    vk::loader::LoadInstance(instance);
    Log("vkCreateInstance OK");

    VkViSurfaceCreateInfoNN sci{VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN};
    sci.window = nwindowGetDefault();
    CHECK_VK(vkCreateViSurfaceNN(instance, &sci, nullptr, &surface));
    Log("vkCreateViSurfaceNN OK");

    uint32_t physicalCount = 0;
    CHECK_VK(vkEnumeratePhysicalDevices(instance, &physicalCount, nullptr));
    if (!physicalCount) { Log("FAIL no physical devices"); result = 4; break; }
    std::vector<VkPhysicalDevice> physicals(physicalCount);
    CHECK_VK(vkEnumeratePhysicalDevices(instance, &physicalCount, physicals.data()));
    VkPhysicalDevice physical = physicals[0];
    VkPhysicalDeviceProperties props{};
    vkGetPhysicalDeviceProperties(physical, &props);
    Log("device=%s api=%u.%u.%u", props.deviceName,
        VK_VERSION_MAJOR(props.apiVersion), VK_VERSION_MINOR(props.apiVersion),
        VK_VERSION_PATCH(props.apiVersion));

    uint32_t qCount = 0;
    vkGetPhysicalDeviceQueueFamilyProperties(physical, &qCount, nullptr);
    std::vector<VkQueueFamilyProperties> qprops(qCount);
    vkGetPhysicalDeviceQueueFamilyProperties(physical, &qCount, qprops.data());
    uint32_t qFamily = UINT32_MAX;
    for (uint32_t i=0; i<qCount; ++i) {
        VkBool32 present = VK_FALSE;
        if (qprops[i].queueCount && vkGetPhysicalDeviceSurfaceSupportKHR(physical,i,surface,&present)==VK_SUCCESS && present) { qFamily=i; break; }
    }
    if (qFamily == UINT32_MAX) { Log("FAIL no present queue family"); result = 5; goto cleanup; }

    const char* deviceExts[] = { VK_KHR_SWAPCHAIN_EXTENSION_NAME };
    float priority = 1.0f;
    VkDeviceQueueCreateInfo qci{VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO};
    qci.queueFamilyIndex = qFamily; qci.queueCount = 1; qci.pQueuePriorities = &priority;
    VkDeviceCreateInfo dci{VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO};
    dci.queueCreateInfoCount = 1; dci.pQueueCreateInfos = &qci;
    dci.enabledExtensionCount = 1; dci.ppEnabledExtensionNames = deviceExts;
    setenv("NVK_I_WANT_A_BROKEN_VULKAN_DRIVER", "1", 1);
    CHECK_VK(vkCreateDevice(physical, &dci, nullptr, &device));
    vk::loader::LoadDevice(device);
    vkGetDeviceQueue(device, qFamily, 0, &queue);
    Log("vkCreateDevice OK queue_family=%u", qFamily);

    VkSurfaceCapabilitiesKHR caps{};
    CHECK_VK(vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physical,surface,&caps));
    uint32_t formatCount = 0;
    CHECK_VK(vkGetPhysicalDeviceSurfaceFormatsKHR(physical,surface,&formatCount,nullptr));
    if (!formatCount) { Log("FAIL no surface formats"); result = 6; goto cleanup; }
    std::vector<VkSurfaceFormatKHR> formats(formatCount);
    CHECK_VK(vkGetPhysicalDeviceSurfaceFormatsKHR(physical,surface,&formatCount,formats.data()));
    VkSurfaceFormatKHR format = formats[0];
    VkExtent2D extent = caps.currentExtent;
    if (extent.width == UINT32_MAX) { extent.width=1280; extent.height=720; }
    uint32_t imageCount = caps.minImageCount + 1;
    if (caps.maxImageCount && imageCount > caps.maxImageCount) imageCount=caps.maxImageCount;
    VkCompositeAlphaFlagBitsKHR alpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
    if (!(caps.supportedCompositeAlpha & alpha)) {
        for (uint32_t bit=1; bit<=VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR; bit<<=1)
            if (caps.supportedCompositeAlpha & bit) { alpha=(VkCompositeAlphaFlagBitsKHR)bit; break; }
    }
    VkSwapchainCreateInfoKHR swci{VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR};
    swci.surface=surface; swci.minImageCount=imageCount; swci.imageFormat=format.format;
    swci.imageColorSpace=format.colorSpace; swci.imageExtent=extent; swci.imageArrayLayers=1;
    swci.imageUsage=(caps.supportedUsageFlags & VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT) ? VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT : VK_IMAGE_USAGE_TRANSFER_DST_BIT;
    swci.imageSharingMode=VK_SHARING_MODE_EXCLUSIVE; swci.preTransform=caps.currentTransform;
    swci.compositeAlpha=alpha; swci.presentMode=VK_PRESENT_MODE_FIFO_KHR; swci.clipped=VK_TRUE;
    CHECK_VK(vkCreateSwapchainKHR(device,&swci,nullptr,&swapchain));
    uint32_t actualImages=0;
    CHECK_VK(vkGetSwapchainImagesKHR(device,swapchain,&actualImages,nullptr));
    Log("swapchain=%ux%u images=%u format=%u",extent.width,extent.height,actualImages,unsigned(format.format));
    VkSemaphoreCreateInfo semci{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
    CHECK_VK(vkCreateSemaphore(device,&semci,nullptr,&acquired));
    for (uint32_t frame=0; frame<120; ++frame) {
        uint32_t imageIndex=0;
        VkResult ar=vkAcquireNextImageKHR(device,swapchain,UINT64_MAX,acquired,VK_NULL_HANDLE,&imageIndex);
        if (ar!=VK_SUCCESS && ar!=VK_SUBOPTIMAL_KHR) { Log("FAIL acquire frame=%u result=%d",frame,int(ar)); result=7; goto cleanup; }
        VkPresentInfoKHR pi{VK_STRUCTURE_TYPE_PRESENT_INFO_KHR};
        pi.waitSemaphoreCount=1; pi.pWaitSemaphores=&acquired;
        pi.swapchainCount=1; pi.pSwapchains=&swapchain; pi.pImageIndices=&imageIndex;
        VkResult pr=vkQueuePresentKHR(queue,&pi);
        if (pr!=VK_SUCCESS && pr!=VK_SUBOPTIMAL_KHR) { Log("FAIL present frame=%u result=%d",frame,int(pr)); result=8; goto cleanup; }
        if ((frame+1)%30==0) Log("presented %u / 120",frame+1);
    }
    if (!result) Log("=== PES-OWNED LOADER + VI SWAPCHAIN PASSED ===");
    } while (false);

    if (device) {
        vkDeviceWaitIdle(device);
        if (acquired) vkDestroySemaphore(device,acquired,nullptr);
        if (swapchain) vkDestroySwapchainKHR(device,swapchain,nullptr);
        vk::loader::ForgetDevice();
        vkDestroyDevice(device,nullptr);
    }
    if (surface && instance) vkDestroySurfaceKHR(instance,surface,nullptr);
    if (instance) vkDestroyInstance(instance,nullptr);
    Log("exit=%d",result);
    fclose(g_log); g_log=nullptr;
    return result;
}
