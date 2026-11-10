#include "provider.h"

#include "../../log.h"
#include "loader.h"
#include "pipeline.h"

#include <atomic>
#include <cstdlib>
#include <cstring>
#include <vector>

#if defined(PES17_USE_SDL)
#include <SDL3/SDL.h>
#include <SDL3/SDL_vulkan.h>
#endif
#if defined(__SWITCH__)
#ifndef VK_USE_PLATFORM_VI_NN
#define VK_USE_PLATFORM_VI_NN 1
#endif
#include <switch.h>
#endif
#if defined(PES17_ANDROID)
#ifndef VK_USE_PLATFORM_ANDROID_KHR
#define VK_USE_PLATFORM_ANDROID_KHR 1
#endif
#endif

namespace
{
    std::atomic<uint64_t> g_validationMessages{ 0 };
    VkDebugUtilsMessengerEXT g_messenger = VK_NULL_HANDLE;

    bool CheckInstance(VkResult result, const char* what)
    {
        if (result == VK_SUCCESS) return true;
        LOGW("vulkan: %s failed (%d)", what, int(result));
        return false;
    }

    template <typename T, typename Enumerate>
    bool EnumerateVector(std::vector<T>& values, Enumerate&& enumerate, const char* what)
    {
        constexpr unsigned kMaxAttempts = 8;
        for (unsigned attempt = 0; attempt < kMaxAttempts; ++attempt)
        {
            uint32_t count = 0;
            VkResult result = enumerate(&count, nullptr);
            if (result != VK_SUCCESS && result != VK_INCOMPLETE)
            {
                LOGW("vulkan: %s count failed (%d)", what, int(result));
                return false;
            }
            values.resize(count);
            if (!count) return true;
            result = enumerate(&count, values.data());
            if (result == VK_INCOMPLETE) continue;
            if (result != VK_SUCCESS)
            {
                LOGW("vulkan: %s enumeration failed (%d)", what, int(result));
                return false;
            }
            values.resize(count);
            return true;
        }
        LOGW("vulkan: %s kept changing during enumeration", what);
        return false;
    }

    bool InstanceHasExtension(const char* name)
    {
        std::vector<VkExtensionProperties> offered;
        if (!EnumerateVector(offered,
                [](uint32_t* count, VkExtensionProperties* data) {
                    return vkEnumerateInstanceExtensionProperties(nullptr, count, data);
                }, "instance extensions"))
            return false;
        for (const auto& e : offered)
            if (std::strcmp(e.extensionName, name) == 0) return true;
        return false;
    }

    bool Validating()
    {
        const char* layers = std::getenv("VK_INSTANCE_LAYERS");
        return layers && std::strstr(layers, "validation");
    }

    VKAPI_ATTR VkBool32 VKAPI_CALL Validation(VkDebugUtilsMessageSeverityFlagBitsEXT severity,
                                              VkDebugUtilsMessageTypeFlagsEXT,
                                              const VkDebugUtilsMessengerCallbackDataEXT* data,
                                              void*)
    {
        const uint64_t n = g_validationMessages.fetch_add(1, std::memory_order_relaxed);
        if (n < 500)
            LOGW("validation %s: %s",
                 severity >= VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT ? "error" : "warning",
                 data && data->pMessage ? data->pMessage : "?");
        return VK_FALSE;
    }
}

bool vk::provider::CreateInstance(VkInstance& instance)
    {
        std::vector<const char*> extensions;
#if defined(PES17_ANDROID)
        // Android has one window system and it is always there.
        extensions.push_back(VK_KHR_SURFACE_EXTENSION_NAME);
        extensions.push_back("VK_KHR_android_surface");
#elif defined(__SWITCH__)
        if (!InstanceHasExtension(VK_KHR_SURFACE_EXTENSION_NAME) ||
            !InstanceHasExtension("VK_NN_vi_surface"))
        {
            LOGW("vulkan: the selected Switch Vulkan implementation does not advertise the required KHR surface and NN VI surface extensions");
            return false;
        }
        extensions.push_back(VK_KHR_SURFACE_EXTENSION_NAME);
        extensions.push_back("VK_NN_vi_surface");
#else
        uint32_t extensionCount = 0;
        const char* const* sdlExtensions = SDL_Vulkan_GetInstanceExtensions(&extensionCount);
        if (!sdlExtensions) { LOGW("vulkan: SDL has no instance extensions (%s)", SDL_GetError()); return false; }
        extensions.assign(sdlExtensions, sdlExtensions + extensionCount);
#endif

        VkApplicationInfo app{ VK_STRUCTURE_TYPE_APPLICATION_INFO };
        app.pApplicationName = "pes17recomp";
        // 1.0 is the floor: negative viewport heights (VK_KHR_maintenance1
        // before that) are an extension too, and 1.0 is the version the APK
        // advertises on its Play-store device filter. Everything newer is
        // optional and asked for by extension or checked at device time.
        // The highest the loader will admit to, capped at 1.3. It matters:
        // dynamic rendering and extended dynamic state are core there, and
        // a driver that has them in core rather than as extensions can only
        // be asked for them by an application that says it targets 1.3.
        app.apiVersion = VK_API_VERSION_1_0;
#if defined(PES17_VULKAN_DYNAMIC)
        if (vkEnumerateInstanceVersion)
#endif
        {
            uint32_t available = 0;
            if (vkEnumerateInstanceVersion(&available) == VK_SUCCESS)
            {
                if (available >= VK_API_VERSION_1_3)
                    app.apiVersion = VK_API_VERSION_1_3;
                else if (available >= VK_API_VERSION_1_1)
                    app.apiVersion = VK_API_VERSION_1_1;
            }
        }

        // The loader would name these itself on Android; everywhere else they
        // come from SDL's list. A 1.0 instance has to name what 1.1 and 1.2
        // make core, because the runtime asks for maintenance1's negative
        // viewport and for `vkGetPhysicalDeviceProperties2` / `...Features2`
        // (properties2's pNext chain, the depth resolve and driver
        // properties read here and in pipeline.cpp) and those are pre-1.1
        // extensions behind both.
        if (app.apiVersion < VK_API_VERSION_1_1)
        {
            if (vkGetInstanceProcAddrFn(VK_NULL_HANDLE, "vkEnumerateInstanceExtensionProperties") &&
                InstanceHasExtension(VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME))
                extensions.push_back(VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME);
            if (InstanceHasExtension(VK_KHR_MAINTENANCE1_EXTENSION_NAME))
                extensions.push_back(VK_KHR_MAINTENANCE1_EXTENSION_NAME);
        }

        VkDebugUtilsMessengerCreateInfoEXT messenger{
            VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT };
        messenger.messageSeverity = VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT |
                                    VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT;
        messenger.messageType = VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT |
                                VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT;
        messenger.pfnUserCallback = Validation;
        const bool validating = Validating();
        if (validating) extensions.push_back(VK_EXT_DEBUG_UTILS_EXTENSION_NAME);

        VkInstanceCreateInfo info{ VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO };
        info.pNext = validating ? &messenger : nullptr;   // instance creation's own messages
        info.pApplicationInfo = &app;
        info.enabledExtensionCount = uint32_t(extensions.size());
        info.ppEnabledExtensionNames = extensions.data();
        if (!CheckInstance(vkCreateInstance(&info, nullptr, &instance), "vkCreateInstance")) return false;
#if defined(PES17_VULKAN_DYNAMIC)
        // Everything past this point is called through the driver's own
        // entry points rather than a link-time symbol (loader.h).
        vk::loader::LoadInstance(instance);
#endif
#ifdef __SWITCH__
        // These WSI entry points are essential for the VI presenter. The
        // generic loader treats extension-owned symbols as optional, so fail
        // here with a useful message rather than calling a null function.
        if (!vkCreateViSurfaceNN || !vkDestroySurfaceKHR ||
            !vkGetPhysicalDeviceSurfaceSupportKHR ||
            !vkGetPhysicalDeviceSurfaceCapabilitiesKHR ||
            !vkGetPhysicalDeviceSurfaceFormatsKHR ||
            !vkGetPhysicalDeviceSurfacePresentModesKHR)
        {
            LOGW("vulkan: the selected Switch Vulkan implementation is missing required VI surface dispatch functions");
            return false;
        }
#endif
        if (validating)
        {
            auto create = reinterpret_cast<PFN_vkCreateDebugUtilsMessengerEXT>(
                vkGetInstanceProcAddrFn(instance, "vkCreateDebugUtilsMessengerEXT"));
            if (!create || create(instance, &messenger, nullptr, &g_messenger) != VK_SUCCESS)
                LOGW("vulkan: validation asked for, but its messages cannot be caught");
            else
                LOGI("vulkan: validation messages go to this log");
        }
        return true;
    }

void vk::provider::DestroyInstance(VkInstance& instance)
{
    if (g_messenger)
    {
        LOGI("vulkan: %llu validation messages", (unsigned long long)g_validationMessages.load());
        if (auto destroy = reinterpret_cast<PFN_vkDestroyDebugUtilsMessengerEXT>(
                vkGetInstanceProcAddrFn(instance, "vkDestroyDebugUtilsMessengerEXT")))
            destroy(instance, g_messenger, nullptr);
        g_messenger = VK_NULL_HANDLE;
    }
    if (instance) vkDestroyInstance(instance, nullptr);
    instance = VK_NULL_HANDLE;
}


bool vk::provider::PickPhysicalDevice(VkInstance instance, VkSurfaceKHR surface,
                                             VkPhysicalDevice& physical, uint32_t& queueFamily)
    {
        std::vector<VkPhysicalDevice> devices;
        if (!EnumerateVector(devices,
                [instance](uint32_t* count, VkPhysicalDevice* data) {
                    return vkEnumeratePhysicalDevices(instance, count, data);
                }, "physical devices"))
            return false;
        if (devices.empty()) { LOGW("vulkan: no physical devices"); return false; }

        // Prefer a discrete device, but take whatever can present.
        VkPhysicalDevice fallback = VK_NULL_HANDLE;
        uint32_t fallbackFamily = 0;
        for (VkPhysicalDevice candidate : devices)
        {
            std::vector<VkQueueFamilyProperties> properties;
            if (!EnumerateVector(properties,
                    [candidate](uint32_t* count, VkQueueFamilyProperties* data) {
                        vkGetPhysicalDeviceQueueFamilyProperties(candidate, count, data);
                        return VK_SUCCESS;
                    }, "queue families"))
                continue;

            for (uint32_t i = 0; i < properties.size(); i++)
            {
                if (!(properties[i].queueFlags & VK_QUEUE_GRAPHICS_BIT)) continue;
                VkBool32 canPresent = VK_FALSE;
                const VkResult supportResult =
                    vkGetPhysicalDeviceSurfaceSupportKHR(candidate, i, surface, &canPresent);
                if (supportResult != VK_SUCCESS)
                {
                    LOGW("vulkan: surface support query failed for queue family %u (%d)",
                         i, int(supportResult));
                    continue;
                }
                if (!canPresent) continue;

                VkPhysicalDeviceProperties info{};
                vkGetPhysicalDeviceProperties(candidate, &info);
                if (info.deviceType == VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU)
                {
                    physical = candidate; queueFamily = i;
                    LOGI("vulkan: %s", info.deviceName);
                    return true;
                }
                if (!fallback) { fallback = candidate; fallbackFamily = i; }
                break;
            }
        }
        if (!fallback) { LOGW("vulkan: no device can present to the window"); return false; }
        physical = fallback; queueFamily = fallbackFamily;
        VkPhysicalDeviceProperties info{};
        vkGetPhysicalDeviceProperties(physical, &info);
        LOGI("vulkan: %s", info.deviceName);
        return true;
    }
bool vk::provider::CreatePresentationDevice(VkPhysicalDevice physical, uint32_t queueFamily,
                                            VkDevice& device, VkQueue& queue, bool& presentWait)
{
    std::vector<const char*> extensions{ VK_KHR_SWAPCHAIN_EXTENSION_NAME };
    VkPhysicalDevicePresentIdFeaturesKHR presentId{
        VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR };
    VkPhysicalDevicePresentWaitFeaturesKHR presentWaitFeatures{
        VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR };
    void* features = nullptr;
    presentWait = false;
    if (vk::pipeline::DeviceHasExtension(physical, VK_KHR_PRESENT_ID_EXTENSION_NAME) &&
        vk::pipeline::DeviceHasExtension(physical, VK_KHR_PRESENT_WAIT_EXTENSION_NAME))
    {
        presentId.pNext = &presentWaitFeatures;
        VkPhysicalDeviceFeatures2 query{ VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2 };
        query.pNext = &presentId;
        vkGetPhysicalDeviceFeatures2(physical, &query);
        if (presentId.presentId && presentWaitFeatures.presentWait)
        {
            extensions.push_back(VK_KHR_PRESENT_ID_EXTENSION_NAME);
            extensions.push_back(VK_KHR_PRESENT_WAIT_EXTENSION_NAME);
            presentWaitFeatures.pNext = nullptr;
            features = &presentId;
            presentWait = true;
        }
    }
    void* createdDevice = nullptr;
    void* createdQueue = nullptr;
    if (!vk::pipeline::CreateDevice(physical, queueFamily, extensions.data(),
                                    uint32_t(extensions.size()), &createdDevice,
                                    &createdQueue, features))
    {
        presentWait = false;
        return false;
    }
    device = static_cast<VkDevice>(createdDevice);
    queue = static_cast<VkQueue>(createdQueue);
    return true;
}
VkResult vk::provider::CreateLogicalDevice(VkPhysicalDevice physical, const VkDeviceCreateInfo& info,
                                        uint32_t queueFamily, VkDevice& device, VkQueue& queue)
{
    device = VK_NULL_HANDLE;
    queue = VK_NULL_HANDLE;
    const VkResult result = vkCreateDevice(physical, &info, nullptr, &device);
    if (result != VK_SUCCESS) return result;
#if defined(PES17_VULKAN_DYNAMIC)
    // Device entrypoints become valid only after the driver-created device exists.
    vk::loader::LoadDevice(device);
#endif
    vkGetDeviceQueue(device, queueFamily, 0, &queue);
    if (!queue)
    {
        vkDestroyDevice(device, nullptr);
#if defined(PES17_VULKAN_DYNAMIC)
        vk::loader::ForgetDevice();
#endif
        device = VK_NULL_HANDLE;
        return VK_ERROR_INITIALIZATION_FAILED;
    }
    return VK_SUCCESS;
}

void vk::provider::DestroyLogicalDevice(VkDevice& device)
{
    if (!device) return;
    vkDestroyDevice(device, nullptr);
#if defined(PES17_VULKAN_DYNAMIC)
    vk::loader::ForgetDevice();
#endif
    device = VK_NULL_HANDLE;
}
