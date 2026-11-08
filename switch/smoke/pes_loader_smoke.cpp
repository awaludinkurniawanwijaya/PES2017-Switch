// Diagnostic version of the PES-owned NXVK loader + VI swapchain smoke test.
// It leaves stage markers on the Switch screen and SD root so early startup
// failures can be distinguished from Vulkan-loader failures.
#define VK_USE_PLATFORM_VI_NN 1
#include "gpu/vulkan/loader.h"
#include <switch.h>
#include <cstdio>
#include <cstring>
#include <string>
#include <cstdarg>
#include <cstdlib>
#include <vector>

extern "C" {
u32 __nx_applet_type = AppletType_Application;
u32 __nx_heap_size = 0;
}

static FILE* g_log = nullptr;
static FILE* g_mesa_log = nullptr;
extern "C" PFN_vkVoidFunction VKAPI_CALL
vk_icdGetInstanceProcAddr(VkInstance instance, const char* name);

static VKAPI_ATTR VkBool32 VKAPI_CALL
PESDebugCallback(VkDebugUtilsMessageSeverityFlagBitsEXT severity,
                 VkDebugUtilsMessageTypeFlagsEXT, 
                 const VkDebugUtilsMessengerCallbackDataEXT* data, void*)
{
    const char* level = (severity & VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT) ? "ERR" :
                        (severity & VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT) ? "WARN" : "INFO";
    const char* message = data && data->pMessage ? data->pMessage : "(no message)";
    if (g_log) { fprintf(g_log, "[NVK/%s] %s\n", level, message); fflush(g_log); }
    if (g_mesa_log) { fprintf(g_mesa_log, "[%s] %s\n", level, message); fflush(g_mesa_log); }
    return VK_FALSE;
}
static void Log(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    if (g_log) {
        vfprintf(g_log, fmt, ap);
        fputc('\n', g_log);
        fflush(g_log);
    }
    va_list screen;
    va_copy(screen, ap);
    vprintf(fmt, screen);
    printf("\n");
    va_end(screen);
    va_end(ap);
    consoleUpdate(nullptr);
}

static void WaitForExit()
{
    padConfigureInput(1, HidNpadStyleSet_NpadStandard);
    PadState pad;
    padInitializeDefault(&pad);
    printf("\nTekan + untuk keluar.\n");
    while (appletMainLoop()) {
        padUpdate(&pad);
        if (padGetButtonsDown(&pad) & HidNpadButton_Plus) break;
        consoleUpdate(nullptr);
    }
}

#define CHECK_VK(expr) if (VkResult r_ = (expr); r_ != VK_SUCCESS) { Log("FAIL %s -> %d", #expr, int(r_)); result = 1; break; }

int main()
{
    consoleInit(nullptr);
    printf("PES NXVK loader diagnostic\n");
    printf("stage 1: entered main()\n");
    consoleUpdate(nullptr);

    const Result mountResult = fsdevMountSdmc();
    printf("stage 2: fsdevMountSdmc = 0x%08X\n", unsigned(mountResult));
    consoleUpdate(nullptr);

    g_log = fopen("sdmc:/pes_nxvk_loader_smoke.log", "w");
    if (!g_log) {
        printf("stage 3: fopen FAILED (errno=%d)\n", errno);
        WaitForExit();
        consoleExit(nullptr);
        return 2;
    }
    Log("=== PES-owned NXVK loader smoke ===");
    Log("sd mount result=0x%08X", unsigned(mountResult));
    Log("stage 3: log file opened");
    // Route Mesa/NVK stderr diagnostics to a separate SD-card log.
    if (freopen("sdmc:/nvk_internal.log", "w", stderr)) {
        setvbuf(stderr, nullptr, _IONBF, 0);
        Log("stage 3a: NVK internal stderr capture opened");
    } else {
        Log("WARN could not redirect stderr to nvk_internal.log errno=%d", errno);
    }
    g_mesa_log = fopen("sdmc:/nvk_mesa.log", "w");
    if (!g_mesa_log) Log("WARN could not open sdmc:/nvk_mesa.log errno=%d", errno);

    // Apply NVK's opt-in after libnx console/SD initialization, but before
    // vkCreateInstance and physical-device enumeration. This avoids touching
    // the process environment during the earliest app startup path.
    Log("stage 4: configuring NVK environment");
    if (setenv("NVK_I_WANT_A_BROKEN_VULKAN_DRIVER", "1", 1) != 0 ||
        setenv("MESA_SHADER_CACHE_SHOW_STATS", "1", 1) != 0) {
        Log("FAIL could not configure NVK environment (errno=%d)", errno);
        fclose(g_log); g_log = nullptr;
        WaitForExit();
        consoleExit(nullptr);
        return 3;
    }
    Log("NVK environment configured");

    std::string error;
    Log("stage 5: calling vk::loader::Open");
    if (!vk::loader::Open(error)) {
        Log("loader Open failed: %s", error.c_str());
        fclose(g_log); g_log = nullptr;
        WaitForExit();
        consoleExit(nullptr);
        return 3;
    }
    Log("loader=%s missing=%u", vk::loader::Description(), vk::loader::Missing());

    VkInstance instance = VK_NULL_HANDLE;
    VkDevice device = VK_NULL_HANDLE;
    VkSurfaceKHR surface = VK_NULL_HANDLE;
    VkSwapchainKHR swapchain = VK_NULL_HANDLE;
    VkSemaphore acquired = VK_NULL_HANDLE;
    VkQueue queue = VK_NULL_HANDLE;
    int result = 0;
    do {
    const char* instanceExts[] = { VK_KHR_SURFACE_EXTENSION_NAME, "VK_NN_vi_surface", VK_EXT_DEBUG_UTILS_EXTENSION_NAME };
    VkApplicationInfo app{VK_STRUCTURE_TYPE_APPLICATION_INFO};
    app.pApplicationName = "PES 2017 loader smoke";
    app.apiVersion = VK_API_VERSION_1_3;
    VkDebugUtilsMessengerCreateInfoEXT debugInfo{VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT};
    debugInfo.messageSeverity = VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT |
                                VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT |
                                VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT |
                                VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT;
    debugInfo.messageType = VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT |
                            VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT |
                            VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT;
    debugInfo.pfnUserCallback = PESDebugCallback;
    VkInstanceCreateInfo ici{VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO};
    ici.pNext = &debugInfo;
    ici.pApplicationInfo = &app;
    ici.enabledExtensionCount = 3;
    ici.ppEnabledExtensionNames = instanceExts;
    Log("stage 6: vkCreateInstance");
    CHECK_VK(vkCreateInstance(&ici, nullptr, &instance));
    vk::loader::LoadInstance(instance);
    Log("vkCreateInstance OK");

    VkViSurfaceCreateInfoNN sci{VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN};
    sci.window = nwindowGetDefault();
    Log("stage 7: vkCreateViSurfaceNN");
    CHECK_VK(vkCreateViSurfaceNN(instance, &sci, nullptr, &surface));
    Log("vkCreateViSurfaceNN OK");

    // Keep each first physical-device call bracketed by a flushed SD log
    // marker. If the driver faults inside enumeration, the last marker tells
    // us exactly which dispatch call was entered.
    Log("stage 7a: checking instance dispatch pointers");
    if (!vkEnumeratePhysicalDevices || !vkGetPhysicalDeviceProperties ||
        !vkGetPhysicalDeviceQueueFamilyProperties || !vkGetPhysicalDeviceSurfaceSupportKHR) {
        Log("FAIL missing physical-device dispatch: enumerate=%p properties=%p queues=%p surface_support=%p",
            reinterpret_cast<void*>(vkEnumeratePhysicalDevices),
            reinterpret_cast<void*>(vkGetPhysicalDeviceProperties),
            reinterpret_cast<void*>(vkGetPhysicalDeviceQueueFamilyProperties),
            reinterpret_cast<void*>(vkGetPhysicalDeviceSurfaceSupportKHR));
        result = 10;
        break;
    }

    auto enumDirect = reinterpret_cast<PFN_vkEnumeratePhysicalDevices>(
        vk_icdGetInstanceProcAddr(instance, "vkEnumeratePhysicalDevices"));
    Log("stage 7a2: enumerate ptr loader=%p direct-ICD=%p",
        reinterpret_cast<void*>(vkEnumeratePhysicalDevices), reinterpret_cast<void*>(enumDirect));
    if (!enumDirect) { Log("FAIL direct ICD lookup returned null"); result = 11; break; }
    uint32_t physicalCount = 0;
    Log("stage 7b: entering vkEnumeratePhysicalDevices(count) via direct ICD pointer");
    VkResult enumResult = enumDirect(instance, &physicalCount, nullptr);
    Log("stage 7c: vkEnumeratePhysicalDevices(count) returned %d count=%u",
        int(enumResult), physicalCount);
    CHECK_VK(enumResult);
    if (!physicalCount) { Log("FAIL no physical devices (check NVK opt-in and Mesa diagnostics)"); result = 4; break; }
    std::vector<VkPhysicalDevice> physicals(physicalCount);
    Log("stage 7d: entering vkEnumeratePhysicalDevices(list)");
    enumResult = vkEnumeratePhysicalDevices(instance, &physicalCount, physicals.data());
    Log("stage 7e: vkEnumeratePhysicalDevices(list) returned %d count=%u",
        int(enumResult), physicalCount);
    CHECK_VK(enumResult);
    VkPhysicalDevice physical = physicals[0];
    VkPhysicalDeviceProperties props{};
    Log("stage 7f: entering vkGetPhysicalDeviceProperties");
    vkGetPhysicalDeviceProperties(physical, &props);
    Log("stage 7g: device=%s api=%u.%u.%u", props.deviceName,
        VK_VERSION_MAJOR(props.apiVersion), VK_VERSION_MINOR(props.apiVersion),
        VK_VERSION_PATCH(props.apiVersion));

    uint32_t qCount = 0;
    Log("stage 7h: entering vkGetPhysicalDeviceQueueFamilyProperties(count)");
    vkGetPhysicalDeviceQueueFamilyProperties(physical, &qCount, nullptr);
    Log("stage 7i: queue family count=%u", qCount);
    std::vector<VkQueueFamilyProperties> qprops(qCount);
    Log("stage 7j: entering vkGetPhysicalDeviceQueueFamilyProperties(list)");
    vkGetPhysicalDeviceQueueFamilyProperties(physical, &qCount, qprops.data());
    Log("stage 7k: queue family properties returned");
    uint32_t qFamily = UINT32_MAX;
    for (uint32_t i=0; i<qCount; ++i) {
        VkBool32 present = VK_FALSE;
        if (qprops[i].queueCount && vkGetPhysicalDeviceSurfaceSupportKHR(physical,i,surface,&present)==VK_SUCCESS && present) { qFamily=i; break; }
    }
    if (qFamily == UINT32_MAX) { Log("FAIL no present queue family"); result = 5; break; }

    const char* deviceExts[] = { VK_KHR_SWAPCHAIN_EXTENSION_NAME };
    float priority = 1.0f;
    VkDeviceQueueCreateInfo qci{VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO};
    qci.queueFamilyIndex = qFamily; qci.queueCount = 1; qci.pQueuePriorities = &priority;
    VkDeviceCreateInfo dci{VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO};
    dci.queueCreateInfoCount = 1; dci.pQueueCreateInfos = &qci;
    dci.enabledExtensionCount = 1; dci.ppEnabledExtensionNames = deviceExts;
    Log("stage 8: vkCreateDevice");
    CHECK_VK(vkCreateDevice(physical, &dci, nullptr, &device));
    vk::loader::LoadDevice(device);
    vkGetDeviceQueue(device, qFamily, 0, &queue);
    Log("vkCreateDevice OK queue_family=%u", qFamily);

    VkSurfaceCapabilitiesKHR caps{};
    CHECK_VK(vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physical,surface,&caps));
    uint32_t formatCount = 0;
    CHECK_VK(vkGetPhysicalDeviceSurfaceFormatsKHR(physical,surface,&formatCount,nullptr));
    if (!formatCount) { Log("FAIL no surface formats"); result = 6; break; }
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
    Log("stage 9: vkCreateSwapchainKHR");
    CHECK_VK(vkCreateSwapchainKHR(device,&swci,nullptr,&swapchain));
    uint32_t actualImages=0;
    CHECK_VK(vkGetSwapchainImagesKHR(device,swapchain,&actualImages,nullptr));
    Log("swapchain=%ux%u images=%u format=%u",extent.width,extent.height,actualImages,unsigned(format.format));
    VkSemaphoreCreateInfo semci{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
    CHECK_VK(vkCreateSemaphore(device,&semci,nullptr,&acquired));
    for (uint32_t frame=0; frame<120; ++frame) {
        uint32_t imageIndex=0;
        VkResult ar=vkAcquireNextImageKHR(device,swapchain,UINT64_MAX,acquired,VK_NULL_HANDLE,&imageIndex);
        if (ar!=VK_SUCCESS && ar!=VK_SUBOPTIMAL_KHR) { Log("FAIL acquire frame=%u result=%d",frame,int(ar)); result=7; break; }
        VkPresentInfoKHR pi{VK_STRUCTURE_TYPE_PRESENT_INFO_KHR};
        pi.waitSemaphoreCount=1; pi.pWaitSemaphores=&acquired;
        pi.swapchainCount=1; pi.pSwapchains=&swapchain; pi.pImageIndices=&imageIndex;
        VkResult pr=vkQueuePresentKHR(queue,&pi);
        if (pr!=VK_SUCCESS && pr!=VK_SUBOPTIMAL_KHR) { Log("FAIL present frame=%u result=%d",frame,int(pr)); result=8; break; }
        VkResult idle = vkDeviceWaitIdle(device);
        if (idle != VK_SUCCESS) { Log("FAIL device idle frame=%u result=%d",frame,int(idle)); result=9; break; }
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
    if (g_log) { fclose(g_log); g_log=nullptr; }
    if (g_mesa_log) { fclose(g_mesa_log); g_mesa_log=nullptr; }
    WaitForExit();
    consoleExit(nullptr);
    return result;
}
