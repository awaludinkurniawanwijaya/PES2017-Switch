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
#include <cctype>
#include "shaders/tri_vert.h"
#include "shaders/solid_frag.h"

extern "C" {
u32 __nx_applet_type = AppletType_Application;
u32 __nx_heap_size = 0;
}

static FILE* g_log = nullptr;
// libnx console and the Vulkan VI WSI share the default NWindow. Once the
// Vulkan surface owns that window, consoleUpdate() must not dequeue from it.
static bool g_vulkan_owns_default_window = false;
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
    return VK_FALSE;
}
static void Log(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);

    // Each output destination needs its own copy. vfprintf consumes its
    // va_list, so copying it only after the file write can corrupt the
    // screen output while the persistent SD log still looks correct.
    if (g_log) {
        va_list fileArgs;
        va_copy(fileArgs, ap);
        vfprintf(g_log, fmt, fileArgs);
        va_end(fileArgs);
        fputc('\n', g_log);
        fflush(g_log);
    }

    // Before Vulkan takes the default NWindow, mirror messages to libnx's
    // screen console. Afterwards all diagnostics go to the SD log only: the
    // console renderer and VI WSI must never dequeue the same NWindow buffers.
    if (!g_vulkan_owns_default_window) {
        va_list screenArgs;
        va_copy(screenArgs, ap);
        vprintf(fmt, screenArgs);
        va_end(screenArgs);
        printf("\n");
        consoleUpdate(nullptr);
    }
    va_end(ap);
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

static char g_log_path[1024];
static char g_internal_log_path[1024];
static char g_mesa_log_path[1024];
static char g_nro_path[1024];
static bool g_log_path_from_nro = false;

// Homebrew loaders pass the launched NRO's absolute path as argv[0].
// Use it only when it looks like an SD-card NRO path and the file exists;
// never assume the current working directory is the NRO's directory.
static void ResolveDiagnosticLogPaths(int argc, char** argv)
{
    const char* candidate = (argc > 0 && argv && argv[0]) ? argv[0] : nullptr;
    char path[1024] = {};
    if (candidate && *candidate) {
        size_t n = std::strlen(candidate);
        if (n >= 2 && candidate[0] == '"' && candidate[n - 1] == '"') {
            ++candidate;
            n -= 2;
        }
        if (n < sizeof(path)) {
            std::memcpy(path, candidate, n);
            path[n] = '\0';
            const bool sdPath = std::strncmp(path, "sdmc:/", 6) == 0;
            const char* ext = std::strrchr(path, '.');
            bool nroExtension = ext && std::strlen(ext) == 4 &&
                                (std::tolower((unsigned char)ext[1]) == 'n') &&
                                (std::tolower((unsigned char)ext[2]) == 'r') &&
                                (std::tolower((unsigned char)ext[3]) == 'o');
            if (sdPath && nroExtension) {
                FILE* nro = std::fopen(path, "rb");
                if (nro) {
                    std::fclose(nro);
                    char* slash = std::strrchr(path, '/');
                    if (slash) {
                        *slash = '\0';
                        const int logLen = std::snprintf(g_log_path, sizeof(g_log_path),
                            "%s/pes_nxvk_loader_smoke.log", path);
                        const int internalLen = std::snprintf(g_internal_log_path, sizeof(g_internal_log_path),
                            "%s/nvk_internal.log", path);
                        const int mesaLen = std::snprintf(g_mesa_log_path, sizeof(g_mesa_log_path),
                            "%s/nvk_mesa.log", path);
                        if (path[0] && logLen > 0 && logLen < (int)sizeof(g_log_path) &&
                            internalLen > 0 && internalLen < (int)sizeof(g_internal_log_path) &&
                            mesaLen > 0 && mesaLen < (int)sizeof(g_mesa_log_path)) {
                            std::snprintf(g_nro_path, sizeof(g_nro_path), "%s", candidate);
                            g_log_path_from_nro = true;
                        }
                    }
                }
            }
        }
    }

    if (!g_log_path_from_nro) {
        std::snprintf(g_log_path, sizeof(g_log_path),
                      "sdmc:/switch/pes_nxvk_loader_smoke.log");
    }

    // All diagnostic logs follow the launched NRO directory.
    // Keep the fallback directory consistent when argv[0] is unavailable.
    if (!g_log_path_from_nro) {
        std::snprintf(g_internal_log_path, sizeof(g_internal_log_path),
                      "sdmc:/switch/nvk_internal.log");
        std::snprintf(g_mesa_log_path, sizeof(g_mesa_log_path),
                      "sdmc:/switch/nvk_mesa.log");
    }
}

#define CHECK_VK(expr) if (VkResult r_ = (expr); r_ != VK_SUCCESS) { Log("FAIL %s -> %d", #expr, int(r_)); result = 1; break; }

int main(int argc, char** argv)
{
    consoleInit(nullptr);
    printf("PES NXVK loader diagnostic\n");
    printf("stage 1: entered main()\n");
    consoleUpdate(nullptr);

    const Result mountResult = fsdevMountSdmc();
    printf("stage 2: fsdevMountSdmc = 0x%08X\n", unsigned(mountResult));
    consoleUpdate(nullptr);

    ResolveDiagnosticLogPaths(argc, argv);
    printf("stage 2a: NRO path %s (%s)\\n",
           g_log_path_from_nro ? g_nro_path : "unavailable; using fallback sdmc:/switch",
           g_log_path_from_nro ? "detected" : "fallback");
    consoleUpdate(nullptr);

    g_log = fopen(g_log_path, "w");
    if (!g_log) {
        printf("stage 3: fopen FAILED (errno=%d)\n", errno);
        WaitForExit();
        consoleExit(nullptr);
        return 2;
    }
    Log("=== PES-owned NXVK loader smoke ===");
    Log("diagnostic log directory source=%s", g_log_path_from_nro ? "argv[0] NRO path" : "fallback");
    if (g_log_path_from_nro) Log("running NRO=%s", g_nro_path);
    Log("diagnostic log=%s", g_log_path);
    Log("sd mount result=0x%08X", unsigned(mountResult));
    Log("stage 3: log file opened");
    // Route Mesa/NVK stderr diagnostics to a separate SD-card log.
    if (freopen(g_internal_log_path, "w", stderr)) {
        setvbuf(stderr, nullptr, _IONBF, 0);
        Log("stage 3a: NVK internal stderr capture opened");
    } else {
        Log("WARN could not redirect stderr to nvk_internal.log errno=%d", errno);
    }

    // Apply NVK's opt-in after libnx console/SD initialization, but before
    // vkCreateInstance and physical-device enumeration. This avoids touching
    // the process environment during the earliest app startup path.
    Log("stage 4: configuring NVK environment");
    if (setenv("NVK_I_WANT_A_BROKEN_VULKAN_DRIVER", "1", 1) != 0 ||
        setenv("MESA_SHADER_CACHE_SHOW_STATS", "1", 1) != 0 ||
        setenv("MESA_LOG", "file", 1) != 0 ||
        setenv("MESA_LOG_FILE", g_mesa_log_path, 1) != 0) {
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
    std::vector<VkSemaphore> renderComplete;
    VkCommandPool commandPool = VK_NULL_HANDLE;
    VkCommandBuffer commandBuffer = VK_NULL_HANDLE;
    VkRenderPass renderPass = VK_NULL_HANDLE;
    VkPipelineLayout pipelineLayout = VK_NULL_HANDLE;
    VkPipeline graphicsPipeline = VK_NULL_HANDLE;
    VkShaderModule vertexShader = VK_NULL_HANDLE;
    VkShaderModule fragmentShader = VK_NULL_HANDLE;
    VkImage offscreenImage = VK_NULL_HANDLE;
    VkDeviceMemory offscreenMemory = VK_NULL_HANDLE;
    VkImageView offscreenView = VK_NULL_HANDLE;
    VkFramebuffer offscreenFramebuffer = VK_NULL_HANDLE;
    PFN_vkDestroyFramebuffer destroyFramebufferDirect = nullptr;
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
    // vkCreateViSurfaceNN binds Vulkan WSI to nwindowGetDefault(). The libnx
    // console uses that same NWindow; calling consoleUpdate() after this point
    // races WSI's buffer dequeue/acquire and can deadlock immediately after
    // vkAcquireNextImageKHR. Keep logging to the flushed SD file until teardown.
    g_vulkan_owns_default_window = true;
    Log("vkCreateViSurfaceNN OK; screen console disabled to reserve default NWindow for Vulkan WSI");

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

    // Keep all calls on the loader-owned dispatch path. The Mesa ICD-private
    // vk_icdGetInstanceProcAddr entry point must not receive a loader-owned
    // VkInstance; BO2 uses loader/instance dispatch before device dispatch.
    uint32_t physicalCount = 0;
    Log("stage 7b: entering loader vkEnumeratePhysicalDevices(count)");
    VkResult enumResult = vkEnumeratePhysicalDevices(instance, &physicalCount, nullptr);
    Log("stage 7c: loader vkEnumeratePhysicalDevices(count) returned %d count=%u",
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
    for (uint32_t i = 0; i < qCount; ++i) {
        VkBool32 present = VK_FALSE;
        const VkResult supportResult =
            vkGetPhysicalDeviceSurfaceSupportKHR(physical, i, surface, &present);
        Log("queue family %u: flags=0x%08x queues=%u present_result=%d present=%u",
            i, qprops[i].queueFlags, qprops[i].queueCount,
            int(supportResult), unsigned(present));
        // The same queue submits graphics commands and presents the VI image.
        // Do not select a present-only family for a graphics pipeline.
        const bool graphics = (qprops[i].queueFlags & VK_QUEUE_GRAPHICS_BIT) != 0;
        if (qprops[i].queueCount && graphics &&
            supportResult == VK_SUCCESS && present) {
            qFamily = i;
            break;
        }
    }
    if (qFamily == UINT32_MAX) {
        Log("FAIL no queue family supports both GRAPHICS and VI present");
        result = 5;
        break;
    }

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

    Log("stage 8a: querying surface capabilities");
    VkSurfaceCapabilitiesKHR caps{};
    CHECK_VK(vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physical,surface,&caps));
    Log("surface caps: images=%u..%u extent=%ux%u..%ux%u current=%ux%u usage=0x%08x alpha=0x%08x transform=0x%08x",
        caps.minImageCount,caps.maxImageCount,caps.minImageExtent.width,caps.minImageExtent.height,
        caps.maxImageExtent.width,caps.maxImageExtent.height,caps.currentExtent.width,caps.currentExtent.height,
        caps.supportedUsageFlags,caps.supportedCompositeAlpha,caps.supportedTransforms);

    Log("stage 8b: querying surface formats");
    uint32_t formatCount = 0;
    CHECK_VK(vkGetPhysicalDeviceSurfaceFormatsKHR(physical,surface,&formatCount,nullptr));
    Log("surface format count=%u",formatCount);
    if (!formatCount) { Log("FAIL no surface formats"); result = 6; break; }
    std::vector<VkSurfaceFormatKHR> formats(formatCount);
    CHECK_VK(vkGetPhysicalDeviceSurfaceFormatsKHR(physical,surface,&formatCount,formats.data()));
    VkSurfaceFormatKHR format = formats[0];
    if (format.format == VK_FORMAT_UNDEFINED) format.format = VK_FORMAT_B8G8R8A8_UNORM;
    Log("selected surface format=%u colorspace=%u",unsigned(format.format),unsigned(format.colorSpace));

    Log("stage 8c: querying present modes");
    uint32_t presentModeCount = 0;
    CHECK_VK(vkGetPhysicalDeviceSurfacePresentModesKHR(physical,surface,&presentModeCount,nullptr));
    Log("surface present mode count=%u",presentModeCount);
    if (!presentModeCount) { Log("FAIL no surface present modes"); result = 6; break; }
    std::vector<VkPresentModeKHR> presentModes(presentModeCount);
    CHECK_VK(vkGetPhysicalDeviceSurfacePresentModesKHR(physical,surface,&presentModeCount,presentModes.data()));
    bool fifoSupported = false;
    for (VkPresentModeKHR mode : presentModes) if (mode == VK_PRESENT_MODE_FIFO_KHR) fifoSupported = true;
    if (!fifoSupported) { Log("FAIL FIFO present mode is not advertised"); result = 6; break; }

    VkExtent2D extent = caps.currentExtent;
    if (extent.width == UINT32_MAX || extent.height == UINT32_MAX) {
        extent.width = 1280;
        extent.height = 720;
        if (extent.width < caps.minImageExtent.width) extent.width = caps.minImageExtent.width;
        if (extent.width > caps.maxImageExtent.width) extent.width = caps.maxImageExtent.width;
        if (extent.height < caps.minImageExtent.height) extent.height = caps.minImageExtent.height;
        if (extent.height > caps.maxImageExtent.height) extent.height = caps.maxImageExtent.height;
    }
    if (!extent.width || !extent.height || extent.width < caps.minImageExtent.width ||
        extent.width > caps.maxImageExtent.width || extent.height < caps.minImageExtent.height ||
        extent.height > caps.maxImageExtent.height) {
        Log("FAIL invalid surface extent %ux%u",extent.width,extent.height); result=6; break;
    }

    uint32_t imageCount = caps.minImageCount + 1;
    if (caps.maxImageCount && imageCount > caps.maxImageCount) imageCount=caps.maxImageCount;
    if (imageCount < caps.minImageCount || !imageCount) {
        Log("FAIL invalid swapchain image count=%u min=%u max=%u",imageCount,caps.minImageCount,caps.maxImageCount);
        result=6; break;
    }
    // The WSI image is only a transfer destination. Rendering happens in the
    // app-owned offscreen image, so do not require COLOR_ATTACHMENT usage from VI.
    const VkImageUsageFlags requiredUsage = VK_IMAGE_USAGE_TRANSFER_DST_BIT;
    if ((caps.supportedUsageFlags & requiredUsage) != requiredUsage) {
        Log("FAIL surface lacks required TRANSFER_DST usage (0x%08x)",
            caps.supportedUsageFlags);
        result=6; break;
    }
    VkFormatProperties formatProps{};
    vkGetPhysicalDeviceFormatProperties(physical, format.format, &formatProps);
    const VkFormatFeatureFlags offscreenFeatures =
        VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT | VK_FORMAT_FEATURE_TRANSFER_SRC_BIT;
    if ((formatProps.optimalTilingFeatures & offscreenFeatures) != offscreenFeatures) {
        Log("FAIL format=%u lacks optimal COLOR_ATTACHMENT|TRANSFER_SRC features (0x%08x)",
            unsigned(format.format), formatProps.optimalTilingFeatures);
        result=6; break;
    }
    VkImageUsageFlags imageUsage = requiredUsage;
    VkCompositeAlphaFlagBitsKHR alpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
    if (!(caps.supportedCompositeAlpha & alpha)) {
        alpha = (VkCompositeAlphaFlagBitsKHR)0;
        for (uint32_t bit=1; bit<=VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR; bit<<=1)
            if (caps.supportedCompositeAlpha & bit) { alpha=(VkCompositeAlphaFlagBitsKHR)bit; break; }
    }
    if (!alpha) { Log("FAIL no supported composite alpha mode"); result=6; break; }
    VkSwapchainCreateInfoKHR swci{VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR};
    swci.surface=surface; swci.minImageCount=imageCount; swci.imageFormat=format.format;
    swci.imageColorSpace=format.colorSpace; swci.imageExtent=extent; swci.imageArrayLayers=1;
    swci.imageUsage=imageUsage;
    swci.imageSharingMode=VK_SHARING_MODE_EXCLUSIVE; swci.preTransform=caps.currentTransform;
    swci.compositeAlpha=alpha; swci.presentMode=VK_PRESENT_MODE_FIFO_KHR; swci.clipped=VK_TRUE;
    Log("swapchain create args: images=%u extent=%ux%u format=%u colorspace=%u usage=0x%08x alpha=0x%08x transform=0x%08x present=FIFO",
        imageCount,extent.width,extent.height,unsigned(format.format),unsigned(format.colorSpace),
        imageUsage,unsigned(alpha),unsigned(caps.currentTransform));
    Log("stage 9: entering vkCreateSwapchainKHR");
    CHECK_VK(vkCreateSwapchainKHR(device,&swci,nullptr,&swapchain));
    Log("vkCreateSwapchainKHR returned VK_SUCCESS swapchain=%p",reinterpret_cast<void*>(swapchain));
    uint32_t actualImages=0;
    CHECK_VK(vkGetSwapchainImagesKHR(device,swapchain,&actualImages,nullptr));
    if (!actualImages) { Log("FAIL swapchain returned zero images"); result=6; break; }
    std::vector<VkImage> swapchainImages(actualImages);
    CHECK_VK(vkGetSwapchainImagesKHR(device,swapchain,&actualImages,swapchainImages.data()));
    Log("swapchain=%ux%u images=%u format=%u",extent.width,extent.height,actualImages,unsigned(format.format));

    // Follow the pinned NXVK nvk_gfx.h reference: render into an app-owned
    // optimal-tiled color image, not directly into WSI's CPU-copy swapchain
    // images. The latter are presentable but their framebuffer path stalls
    // on this Switch/NVK combination. Copy the completed render target to the
    // acquired swapchain image before present.
    // Match the pinned upstream nvk_tri target size first. This isolates the
    // framebuffer path from the 1280x720 VI surface dimensions.
    const VkExtent2D renderExtent{256, 256};
    VkImageCreateInfo offscreenInfo{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO};
    offscreenInfo.imageType = VK_IMAGE_TYPE_2D;
    offscreenInfo.format = format.format;
    offscreenInfo.extent = { renderExtent.width, renderExtent.height, 1 };
    offscreenInfo.mipLevels = 1;
    offscreenInfo.arrayLayers = 1;
    offscreenInfo.samples = VK_SAMPLE_COUNT_1_BIT;
    offscreenInfo.tiling = VK_IMAGE_TILING_OPTIMAL;
    offscreenInfo.usage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
    offscreenInfo.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    offscreenInfo.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    Log("[PIPELINE] before app-owned offscreen vkCreateImage");
    CHECK_VK(vkCreateImage(device, &offscreenInfo, nullptr, &offscreenImage));
    VkMemoryRequirements offscreenRequirements{};
    vkGetImageMemoryRequirements(device, offscreenImage, &offscreenRequirements);
    VkPhysicalDeviceMemoryProperties memoryProperties{};
    vkGetPhysicalDeviceMemoryProperties(physical, &memoryProperties);
    uint32_t memoryType = UINT32_MAX;
    for (uint32_t i = 0; i < memoryProperties.memoryTypeCount; ++i) {
        if ((offscreenRequirements.memoryTypeBits & (1u << i)) &&
            (memoryProperties.memoryTypes[i].propertyFlags & VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT)) {
            memoryType = i;
            break;
        }
    }
    if (memoryType == UINT32_MAX) {
        for (uint32_t i = 0; i < memoryProperties.memoryTypeCount; ++i) {
            if (offscreenRequirements.memoryTypeBits & (1u << i)) { memoryType = i; break; }
        }
    }
    if (memoryType == UINT32_MAX) {
        Log("FAIL no compatible memory type for offscreen color image");
        result = 14;
        break;
    }
    VkMemoryAllocateInfo offscreenAllocation{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    offscreenAllocation.allocationSize = offscreenRequirements.size;
    offscreenAllocation.memoryTypeIndex = memoryType;
    Log("[PIPELINE] before offscreen vkAllocateMemory size=%llu type=%u",
        (unsigned long long)offscreenRequirements.size, memoryType);
    CHECK_VK(vkAllocateMemory(device, &offscreenAllocation, nullptr, &offscreenMemory));
    CHECK_VK(vkBindImageMemory(device, offscreenImage, offscreenMemory, 0));
    VkImageViewCreateInfo offscreenViewInfo{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
    offscreenViewInfo.image = offscreenImage;
    offscreenViewInfo.viewType = VK_IMAGE_VIEW_TYPE_2D;
    offscreenViewInfo.format = format.format;
    offscreenViewInfo.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
    offscreenViewInfo.subresourceRange.levelCount = 1;
    offscreenViewInfo.subresourceRange.layerCount = 1;
    Log("[PIPELINE] before app-owned vkCreateImageView");
    CHECK_VK(vkCreateImageView(device, &offscreenViewInfo, nullptr, &offscreenView));

    VkAttachmentDescription colorAttachment{};
    colorAttachment.format = format.format;
    colorAttachment.samples = VK_SAMPLE_COUNT_1_BIT;
    colorAttachment.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    colorAttachment.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    colorAttachment.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    colorAttachment.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    colorAttachment.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    colorAttachment.finalLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
    VkAttachmentReference colorReference{0, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL};
    VkSubpassDescription subpass{};
    subpass.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    subpass.colorAttachmentCount = 1;
    subpass.pColorAttachments = &colorReference;
    // Keep the same single post-render dependency used by upstream nvk_tri.
    VkSubpassDependency dependencies[1]{};
    dependencies[0].srcSubpass = 0;
    dependencies[0].dstSubpass = VK_SUBPASS_EXTERNAL;
    dependencies[0].srcStageMask = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    dependencies[0].dstStageMask = VK_PIPELINE_STAGE_TRANSFER_BIT;
    dependencies[0].srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
    dependencies[0].dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
    VkRenderPassCreateInfo renderPassInfo{VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO};
    renderPassInfo.attachmentCount = 1;
    renderPassInfo.pAttachments = &colorAttachment;
    renderPassInfo.subpassCount = 1;
    renderPassInfo.pSubpasses = &subpass;
    renderPassInfo.dependencyCount = 1;
    renderPassInfo.pDependencies = dependencies;
    Log("[PIPELINE] before vkCreateRenderPass");
    CHECK_VK(vkCreateRenderPass(device, &renderPassInfo, nullptr, &renderPass));
    Log("[PIPELINE] render pass created; loader framebuffer dispatch=%p",
        reinterpret_cast<void*>(vkCreateFramebuffer));
    // Match BO2's VulkanDevice::Functions contract: obtain device commands
    // from the Vulkan loader's vkGetDeviceProcAddr after LoadDevice(device).
    // Do not call the Mesa ICD-private vk_icdGetInstanceProcAddr interface
    // with a loader-owned VkInstance.
    if (!vkGetDeviceProcAddr) {
        Log("FAIL vkGetDeviceProcAddr is null after device creation");
        result = 12;
        break;
    }
    auto createFramebufferDirect = reinterpret_cast<PFN_vkCreateFramebuffer>(
        vkGetDeviceProcAddr(device, "vkCreateFramebuffer"));
    destroyFramebufferDirect = reinterpret_cast<PFN_vkDestroyFramebuffer>(
        vkGetDeviceProcAddr(device, "vkDestroyFramebuffer"));
    Log("[PIPELINE] BO2-style device dispatch framebuffer create=%p destroy=%p",
        reinterpret_cast<void*>(createFramebufferDirect),
        reinterpret_cast<void*>(destroyFramebufferDirect));
    if (!createFramebufferDirect || !destroyFramebufferDirect) {
        Log("FAIL BO2-style device dispatch is incomplete (create=%p destroy=%p)",
            reinterpret_cast<void*>(createFramebufferDirect),
            reinterpret_cast<void*>(destroyFramebufferDirect));
        result = 12;
        break;
    }
    VkFramebufferCreateInfo framebufferInfo{VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO};
    framebufferInfo.renderPass = renderPass;
    framebufferInfo.attachmentCount = 1;
    framebufferInfo.pAttachments = &offscreenView;
    framebufferInfo.width = renderExtent.width;
    framebufferInfo.height = renderExtent.height;
    framebufferInfo.layers = 1;
    Log("[PIPELINE] before app-owned vkCreateFramebuffer view=%p extent=%ux%u format=%u",
        reinterpret_cast<void*>(offscreenView), renderExtent.width, renderExtent.height, unsigned(format.format));
    VkResult framebufferResult = createFramebufferDirect(
        device, &framebufferInfo, nullptr, &offscreenFramebuffer);
    if (framebufferResult != VK_SUCCESS) {
        Log("FAIL BO2-style vkGetDeviceProcAddr(vkCreateFramebuffer) -> %d", int(framebufferResult));
        result = 12;
        break;
    }
    Log("[PIPELINE] app-owned framebuffer created via BO2-style device dispatch handle=%p",
        reinterpret_cast<void*>(offscreenFramebuffer));

    VkShaderModuleCreateInfo shaderInfo{VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO};
    shaderInfo.codeSize = sizeof(tri_vert_spv);
    shaderInfo.pCode = tri_vert_spv;
    CHECK_VK(vkCreateShaderModule(device, &shaderInfo, nullptr, &vertexShader));
    shaderInfo.codeSize = sizeof(solid_frag_spv);
    shaderInfo.pCode = solid_frag_spv;
    CHECK_VK(vkCreateShaderModule(device, &shaderInfo, nullptr, &fragmentShader));
    Log("[PIPELINE] vertex and fragment shader modules created");

    VkPipelineLayoutCreateInfo layoutInfo{VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
    CHECK_VK(vkCreatePipelineLayout(device, &layoutInfo, nullptr, &pipelineLayout));
    VkPipelineShaderStageCreateInfo shaderStages[2]{};
    shaderStages[0].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    shaderStages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
    shaderStages[0].module = vertexShader;
    shaderStages[0].pName = "main";
    shaderStages[1].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    shaderStages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
    shaderStages[1].module = fragmentShader;
    shaderStages[1].pName = "main";
    VkPipelineVertexInputStateCreateInfo vertexInput{VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO};
    VkPipelineInputAssemblyStateCreateInfo inputAssembly{VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO};
    inputAssembly.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    VkPipelineViewportStateCreateInfo viewportState{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO};
    viewportState.viewportCount = 1;
    viewportState.scissorCount = 1;
    VkPipelineRasterizationStateCreateInfo rasterization{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
    rasterization.polygonMode = VK_POLYGON_MODE_FILL;
    rasterization.cullMode = VK_CULL_MODE_NONE;
    rasterization.frontFace = VK_FRONT_FACE_COUNTER_CLOCKWISE;
    rasterization.lineWidth = 1.0f;
    VkPipelineMultisampleStateCreateInfo multisample{VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO};
    multisample.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
    VkPipelineColorBlendAttachmentState blendAttachment{};
    blendAttachment.colorWriteMask = VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT |
                                     VK_COLOR_COMPONENT_B_BIT | VK_COLOR_COMPONENT_A_BIT;
    VkPipelineColorBlendStateCreateInfo blendState{VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO};
    blendState.attachmentCount = 1;
    blendState.pAttachments = &blendAttachment;
    VkDynamicState dynamicStates[] = { VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR };
    VkPipelineDynamicStateCreateInfo dynamicState{VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO};
    dynamicState.dynamicStateCount = 2;
    dynamicState.pDynamicStates = dynamicStates;
    VkGraphicsPipelineCreateInfo pipelineInfo{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO};
    pipelineInfo.stageCount = 2;
    pipelineInfo.pStages = shaderStages;
    pipelineInfo.pVertexInputState = &vertexInput;
    pipelineInfo.pInputAssemblyState = &inputAssembly;
    pipelineInfo.pViewportState = &viewportState;
    pipelineInfo.pRasterizationState = &rasterization;
    pipelineInfo.pMultisampleState = &multisample;
    pipelineInfo.pColorBlendState = &blendState;
    pipelineInfo.pDynamicState = &dynamicState;
    pipelineInfo.layout = pipelineLayout;
    pipelineInfo.renderPass = renderPass;
    pipelineInfo.subpass = 0;
    Log("[PIPELINE] before vkCreateGraphicsPipelines");
    CHECK_VK(vkCreateGraphicsPipelines(device, VK_NULL_HANDLE, 1, &pipelineInfo,
                                       nullptr, &graphicsPipeline));
    Log("[PIPELINE] vkCreateGraphicsPipelines returned VK_SUCCESS");



    VkSemaphoreCreateInfo semci{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
    CHECK_VK(vkCreateSemaphore(device,&semci,nullptr,&acquired));
    renderComplete.resize(actualImages,VK_NULL_HANDLE);
    for (uint32_t i=0;i<actualImages;++i)
        CHECK_VK(vkCreateSemaphore(device,&semci,nullptr,&renderComplete[i]));
    VkCommandPoolCreateInfo cpci{VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO};
    cpci.flags=VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
    cpci.queueFamilyIndex=qFamily;
    CHECK_VK(vkCreateCommandPool(device,&cpci,nullptr,&commandPool));
    VkCommandBufferAllocateInfo cbai{VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
    cbai.commandPool=commandPool;
    cbai.level=VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    cbai.commandBufferCount=1;
    CHECK_VK(vkAllocateCommandBuffers(device,&cbai,&commandBuffer));

    for (uint32_t frame=0; frame<120; ++frame) {
        Log("[FRAME %u] before acquire", frame);
        uint32_t imageIndex=0;
        VkResult ar=vkAcquireNextImageKHR(device,swapchain,UINT64_MAX,acquired,VK_NULL_HANDLE,&imageIndex);
        if (ar!=VK_SUCCESS && ar!=VK_SUBOPTIMAL_KHR) { Log("FAIL acquire frame=%u result=%d",frame,int(ar)); result=7; break; }
        Log("[FRAME %u] after acquire result=%d image=%u", frame, int(ar), imageIndex);
        Log("[FRAME %u] before acquired-image bounds check", frame);
        const size_t acquiredImageCount = swapchainImages.size();
        Log("[FRAME %u] acquired-image bounds values index=%u count=%zu", frame, imageIndex, acquiredImageCount);
        if (imageIndex>=acquiredImageCount) { Log("FAIL acquire returned invalid image index=%u count=%zu",imageIndex,acquiredImageCount); result=7; break; }
        Log("[FRAME %u] after acquired-image bounds check", frame);

        // Draw the upstream nvk_tri RGB triangle into the PES-owned
        // offscreen framebuffer; gl_VertexIndex supplies all vertices.
        // The completed offscreen image is copied into this acquired VI image.
        Log("[FRAME %u] before reset command buffer", frame);
        VkResult resetResult=vkResetCommandBuffer(commandBuffer,0);
        if (resetResult!=VK_SUCCESS) { Log("FAIL reset command buffer frame=%u result=%d",frame,int(resetResult)); result=9; break; }
        VkCommandBufferBeginInfo begin{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
        begin.flags=VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
        VkResult beginResult=vkBeginCommandBuffer(commandBuffer,&begin);
        if (beginResult!=VK_SUCCESS) { Log("FAIL begin command buffer frame=%u result=%d",frame,int(beginResult)); result=9; break; }

        VkClearValue clear{};
        clear.color.float32[0] = 0.015f;
        clear.color.float32[1] = 0.020f;
        clear.color.float32[2] = 0.060f;
        clear.color.float32[3] = 1.0f;
        VkRenderPassBeginInfo passBegin{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO};
        passBegin.renderPass = renderPass;
        passBegin.framebuffer = offscreenFramebuffer;
        passBegin.renderArea.offset = {0, 0};
        passBegin.renderArea.extent = renderExtent;
        passBegin.clearValueCount = 1;
        passBegin.pClearValues = &clear;
        Log("[FRAME %u] before vkCmdBeginRenderPass", frame);
        vkCmdBeginRenderPass(commandBuffer, &passBegin, VK_SUBPASS_CONTENTS_INLINE);
        VkViewport viewport{0.0f, 0.0f, (float)renderExtent.width, (float)renderExtent.height, 0.0f, 1.0f};
        VkRect2D scissor{{0, 0}, renderExtent};
        vkCmdSetViewport(commandBuffer, 0, 1, &viewport);
        vkCmdSetScissor(commandBuffer, 0, 1, &scissor);
        vkCmdBindPipeline(commandBuffer, VK_PIPELINE_BIND_POINT_GRAPHICS, graphicsPipeline);
        Log("[FRAME %u] before vkCmdDraw vertexCount=3", frame);
        vkCmdDraw(commandBuffer, 3, 1, 0, 0);
        Log("[FRAME %u] after vkCmdDraw", frame);
        vkCmdEndRenderPass(commandBuffer);

        // Copy the app-owned render target into the acquired WSI image. The
        // render pass leaves offscreenImage in TRANSFER_SRC_OPTIMAL.
        VkImageMemoryBarrier toTransfer{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
        toTransfer.srcAccessMask = 0;
        toTransfer.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        toTransfer.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
        toTransfer.newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
        toTransfer.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        toTransfer.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        toTransfer.image = swapchainImages[imageIndex];
        toTransfer.subresourceRange = { VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1 };
        vkCmdPipelineBarrier(commandBuffer, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                             VK_PIPELINE_STAGE_TRANSFER_BIT, 0, 0, nullptr, 0, nullptr,
                             1, &toTransfer);
        // Clear the acquired VI image, then center the 256x256 upstream target.
        VkClearColorValue background{};
        background.float32[0] = 0.015f;
        background.float32[1] = 0.020f;
        background.float32[2] = 0.060f;
        background.float32[3] = 1.0f;
        vkCmdClearColorImage(commandBuffer, swapchainImages[imageIndex],
                             VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, &background, 1,
                             &toTransfer.subresourceRange);
        VkImageCopy copyRegion{};
        copyRegion.srcSubresource = { VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1 };
        copyRegion.dstSubresource = { VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1 };
        copyRegion.dstOffset = { (int32_t)((extent.width - renderExtent.width) / 2),
                                 (int32_t)((extent.height - renderExtent.height) / 2), 0 };
        copyRegion.extent = { renderExtent.width, renderExtent.height, 1 };
        vkCmdCopyImage(commandBuffer, offscreenImage, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                       swapchainImages[imageIndex], VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                       1, &copyRegion);
        VkImageMemoryBarrier toPresent{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
        toPresent.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
        toPresent.dstAccessMask = 0;
        toPresent.oldLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
        toPresent.newLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
        toPresent.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        toPresent.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
        toPresent.image = swapchainImages[imageIndex];
        toPresent.subresourceRange = { VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1 };
        vkCmdPipelineBarrier(commandBuffer, VK_PIPELINE_STAGE_TRANSFER_BIT,
                             VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT, 0, 0, nullptr, 0, nullptr,
                             1, &toPresent);
        VkResult endResult=vkEndCommandBuffer(commandBuffer);
        if (endResult!=VK_SUCCESS) { Log("FAIL end command buffer frame=%u result=%d",frame,int(endResult)); result=9; break; }

        // Acquire protects the WSI image's first use, which is the copy transfer.
        // Waiting only at COLOR_ATTACHMENT_OUTPUT would let the earlier transfer run.
        const VkPipelineStageFlags waitStage=VK_PIPELINE_STAGE_TRANSFER_BIT;
        VkSubmitInfo submit{VK_STRUCTURE_TYPE_SUBMIT_INFO};
        submit.waitSemaphoreCount=1;
        submit.pWaitSemaphores=&acquired;
        submit.pWaitDstStageMask=&waitStage;
        submit.commandBufferCount=1;
        submit.pCommandBuffers=&commandBuffer;
        VkSemaphore frameComplete=renderComplete[imageIndex];
        submit.signalSemaphoreCount=1;
        submit.pSignalSemaphores=&frameComplete;
        Log("[FRAME %u] before queue submit", frame);
        VkResult submitResult=vkQueueSubmit(queue,1,&submit,VK_NULL_HANDLE);
        if (submitResult!=VK_SUCCESS) { Log("FAIL queue submit frame=%u result=%d",frame,int(submitResult)); result=9; break; }
        Log("[FRAME %u] after queue submit", frame);

        VkPresentInfoKHR pi{VK_STRUCTURE_TYPE_PRESENT_INFO_KHR};
        pi.waitSemaphoreCount=1; pi.pWaitSemaphores=&frameComplete;
        pi.swapchainCount=1; pi.pSwapchains=&swapchain; pi.pImageIndices=&imageIndex;
        Log("[FRAME %u] before queue present", frame);
        VkResult pr=vkQueuePresentKHR(queue,&pi);
        if (pr!=VK_SUCCESS && pr!=VK_SUBOPTIMAL_KHR) { Log("FAIL present frame=%u result=%d",frame,int(pr)); result=8; break; }
        Log("[FRAME %u] after queue present result=%d", frame, int(pr));
        Log("[FRAME %u] before device wait idle", frame);
        VkResult idle = vkDeviceWaitIdle(device);
        if (idle != VK_SUCCESS) { Log("FAIL device idle frame=%u result=%d",frame,int(idle)); result=9; break; }
        Log("[FRAME %u] after device wait idle", frame);
        if ((frame+1)%30==0) Log("presented %u / 120",frame+1);
    }
    if (!result) Log("=== PES-OWNED VI GRAPHICS PIPELINE + TRIANGLE DRAW PASSED ===");
    } while (false);

    if (device) {
        vkDeviceWaitIdle(device);
        if (commandPool) vkDestroyCommandPool(device,commandPool,nullptr);
        if (offscreenFramebuffer && destroyFramebufferDirect)
            destroyFramebufferDirect(device, offscreenFramebuffer, nullptr);
        else if (offscreenFramebuffer)
            vkDestroyFramebuffer(device, offscreenFramebuffer, nullptr);
        if (graphicsPipeline) vkDestroyPipeline(device, graphicsPipeline, nullptr);
        if (pipelineLayout) vkDestroyPipelineLayout(device, pipelineLayout, nullptr);
        if (vertexShader) vkDestroyShaderModule(device, vertexShader, nullptr);
        if (fragmentShader) vkDestroyShaderModule(device, fragmentShader, nullptr);
        if (renderPass) vkDestroyRenderPass(device, renderPass, nullptr);
        if (offscreenView) vkDestroyImageView(device, offscreenView, nullptr);
        if (offscreenImage) vkDestroyImage(device, offscreenImage, nullptr);
        if (offscreenMemory) vkFreeMemory(device, offscreenMemory, nullptr);
        for (VkSemaphore semaphore : renderComplete)
            if (semaphore) vkDestroySemaphore(device,semaphore,nullptr);
        if (acquired) vkDestroySemaphore(device,acquired,nullptr);
        if (swapchain) vkDestroySwapchainKHR(device,swapchain,nullptr);
        vk::loader::ForgetDevice();
        vkDestroyDevice(device,nullptr);
    }
    if (surface && instance) vkDestroySurfaceKHR(instance,surface,nullptr);
    g_vulkan_owns_default_window = false;
    if (instance) vkDestroyInstance(instance,nullptr);
    Log("exit=%d",result);
    if (g_log) { fclose(g_log); g_log=nullptr; }
    WaitForExit();
    consoleExit(nullptr);
    return result;
}
