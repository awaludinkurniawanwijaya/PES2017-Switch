#pragma once
#include <cstdint>

// Transitional non-owning Device contract. Presenter owns the window-path
// handles; Pipeline borrows them and must never destroy them. The headless
// Pipeline path creates and owns its own context.
namespace vk::device
{
    struct BorrowedContext
    {
        void* instance = nullptr;
        void* physical = nullptr;
        void* logical = nullptr;
        void* queue = nullptr;
        uint32_t queueFamily = 0;
        bool Complete() const { return instance && physical && logical && queue; }
    };
}
