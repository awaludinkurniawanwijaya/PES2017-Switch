#include <switch.h>
#include <cstdio>

#define VK_NO_PROTOTYPES 1
#include <vulkan/vulkan.h>

extern "C" VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL
vkGetInstanceProcAddr(VkInstance instance, const char* name);

int main()
{
    consoleInit(nullptr);
    std::printf("PES2017 BO2 Mesa Vulkan SDK probe\n");

    const auto enumerate = reinterpret_cast<PFN_vkEnumerateInstanceVersion>(
        vkGetInstanceProcAddr(VK_NULL_HANDLE, "vkEnumerateInstanceVersion"));
    if (!enumerate)
    {
        printf("FAIL: vkGetInstanceProcAddr did not return vkEnumerateInstanceVersion\n");
    }
    else
    {
        uint32_t version = VK_API_VERSION_1_0;
        const VkResult result = enumerate(&version);
        printf("GIPA: PASS; vkEnumerateInstanceVersion result=%d API=%u.%u.%u\n",
               int(result), VK_API_VERSION_MAJOR(version),
               VK_API_VERSION_MINOR(version), VK_API_VERSION_PATCH(version));
    }

    printf("Press HOME to exit.\n");
    while (appletMainLoop())
    {
        consoleUpdate(nullptr);
    }
    consoleExit(nullptr);
    return 0;
}
