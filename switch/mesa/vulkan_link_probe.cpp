#include <switch.h>
#include <cstdio>
#include <vector>

#define VK_NO_PROTOTYPES 1
#include <vulkan/vulkan.h>

extern "C" VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL
vkGetInstanceProcAddr(VkInstance instance, const char* name);

static bool RunProbe()
{
    const auto gipa = &vkGetInstanceProcAddr;
    if (!gipa)
    {
        std::printf("FAIL: public vkGetInstanceProcAddr symbol is null\\n");
        return false;
    }
    std::printf("GIPA: PASS\\n");

    const auto enumerateVersion = reinterpret_cast<PFN_vkEnumerateInstanceVersion>(
        gipa(VK_NULL_HANDLE, "vkEnumerateInstanceVersion"));
    uint32_t apiVersion = VK_API_VERSION_1_0;
    if (enumerateVersion)
    {
        const VkResult versionResult = enumerateVersion(&apiVersion);
        std::printf("vkEnumerateInstanceVersion: result=%d API=%u.%u.%u\\n",
                    int(versionResult), VK_API_VERSION_MAJOR(apiVersion),
                    VK_API_VERSION_MINOR(apiVersion), VK_API_VERSION_PATCH(apiVersion));
        if (versionResult != VK_SUCCESS)
        {
            std::printf("FAIL: Vulkan API version query\\n");
            return false;
        }
    }
    else
    {
        std::printf("Vulkan 1.0 fallback (version query unavailable)\\n");
    }

    const auto createInstance = reinterpret_cast<PFN_vkCreateInstance>(
        gipa(VK_NULL_HANDLE, "vkCreateInstance"));
    if (!createInstance)
    {
        std::printf("FAIL: vkCreateInstance entrypoint unavailable\\n");
        return false;
    }

    VkApplicationInfo appInfo{VK_STRUCTURE_TYPE_APPLICATION_INFO};
    appInfo.pApplicationName = "PES2017 Vulkan probe";
    appInfo.applicationVersion = VK_MAKE_API_VERSION(0, 0, 1, 0);
    appInfo.pEngineName = "PES2017 Switch";
    appInfo.engineVersion = VK_MAKE_API_VERSION(0, 0, 1, 0);
    appInfo.apiVersion = apiVersion;

    VkInstanceCreateInfo instanceInfo{VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO};
    instanceInfo.pApplicationInfo = &appInfo;

    VkInstance instance = VK_NULL_HANDLE;
    const VkResult createResult = createInstance(&instanceInfo, nullptr, &instance);
    std::printf("vkCreateInstance: result=%d\\n", int(createResult));
    if (createResult != VK_SUCCESS || instance == VK_NULL_HANDLE)
    {
        std::printf("FAIL: Vulkan instance creation\\n");
        return false;
    }

    const auto enumeratePhysicalDevices = reinterpret_cast<PFN_vkEnumeratePhysicalDevices>(
        gipa(instance, "vkEnumeratePhysicalDevices"));
    const auto getPhysicalDeviceProperties = reinterpret_cast<PFN_vkGetPhysicalDeviceProperties>(
        gipa(instance, "vkGetPhysicalDeviceProperties"));
    const auto destroyInstance = reinterpret_cast<PFN_vkDestroyInstance>(
        gipa(instance, "vkDestroyInstance"));

    if (!enumeratePhysicalDevices || !getPhysicalDeviceProperties || !destroyInstance)
    {
        std::printf("FAIL: required instance dispatch entrypoint unavailable\\n");
        if (destroyInstance) destroyInstance(instance, nullptr);
        return false;
    }

    uint32_t deviceCount = 0;
    VkResult deviceResult = enumeratePhysicalDevices(instance, &deviceCount, nullptr);
    std::printf("vkEnumeratePhysicalDevices(count): result=%d count=%u\\n",
                int(deviceResult), deviceCount);
    if (deviceResult != VK_SUCCESS || deviceCount == 0)
    {
        std::printf("FAIL: no Vulkan physical device enumerated\\n");
        destroyInstance(instance, nullptr);
        return false;
    }

    std::vector<VkPhysicalDevice> physicalDevices(deviceCount);
    deviceResult = enumeratePhysicalDevices(instance, &deviceCount, physicalDevices.data());
    if (deviceResult != VK_SUCCESS || deviceCount == 0)
    {
        std::printf("FAIL: physical-device list query (result=%d)\\n", int(deviceResult));
        destroyInstance(instance, nullptr);
        return false;
    }

    VkPhysicalDeviceProperties properties{};
    getPhysicalDeviceProperties(physicalDevices[0], &properties);
    std::printf("GPU: %s\\n", properties.deviceName);
    std::printf("GPU API: %u.%u.%u\\n",
                VK_API_VERSION_MAJOR(properties.apiVersion),
                VK_API_VERSION_MINOR(properties.apiVersion),
                VK_API_VERSION_PATCH(properties.apiVersion));
    destroyInstance(instance, nullptr);
    std::printf("RESULT: PASS - GIPA, instance, and physical-device enumeration\\n");
    return true;
}

int main()
{
    consoleInit(nullptr);
    std::printf("PES2017 BO2 Mesa Vulkan runtime probe\\n");
    const bool passed = RunProbe();
    if (!passed)
        std::printf("RESULT: FAIL - inspect the diagnostic above\\n");
    std::printf("Press HOME to exit.\\n");
    while (appletMainLoop())
    {
        consoleUpdate(nullptr);
    }
    consoleExit(nullptr);
    return passed ? 0 : 1;
}
