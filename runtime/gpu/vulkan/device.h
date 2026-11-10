#pragma once
#include <cstdint>
#include <memory>

namespace vk::device
{
    // Owns a logical Vulkan device and retains the physical-device/queue
    // identity selected for it. The VkInstance remains owned by Provider.
    class Device final
    {
    public:
        static std::unique_ptr<Device> Adopt(void* physical, void* logical,
                                             void* queue, uint32_t queueFamily);
        ~Device();
        Device(const Device&) = delete;
        Device& operator=(const Device&) = delete;
        void* Physical() const { return physical_; }
        void* Logical() const { return logical_; }
        void* Queue() const { return queue_; }
        uint32_t QueueFamily() const { return queueFamily_; }
        bool Complete() const { return physical_ && logical_ && queue_; }
    private:
        Device(void* physical, void* logical, void* queue, uint32_t queueFamily);
        void* physical_ = nullptr;
        void* logical_ = nullptr;
        void* queue_ = nullptr;
        uint32_t queueFamily_ = 0;
    };

    // Pipeline borrows this Device; the instance is separately owned by Provider.
    struct BorrowedContext
    {
        void* instance = nullptr;
        const Device* device = nullptr;
        bool Complete() const { return instance && device && device->Complete(); }
    };
}
