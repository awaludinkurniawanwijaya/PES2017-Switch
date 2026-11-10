#pragma once
#include <memory>

namespace vk::instance
{
    // Owns the VkInstance; surfaces and logical devices must be destroyed first.
    class Instance final
    {
    public:
        static std::unique_ptr<Instance> Adopt(void* handle);
        ~Instance();
        Instance(const Instance&) = delete;
        Instance& operator=(const Instance&) = delete;
        void* Handle() const { return handle_; }
    private:
        explicit Instance(void* handle) : handle_(handle) {}
        void* handle_ = nullptr;
    };
}
