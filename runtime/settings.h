#pragma once
// General runtime environment switches plus the player's native input options.
#include <filesystem>
#include <string>

namespace settings
{
    struct InputOptions
    {
        bool swapAB = false;
        bool swapXY = false;
    };

    // Imports PES17_* entries from the legacy runtime .env file.
    std::string Load(const std::filesystem::path& file);

    // Reads the [input] table from config/PES.toml. Missing or invalid
    // boolean values retain the safe default (false).
    bool LoadInputConfig(const std::filesystem::path& file);
    InputOptions GetInputOptions();
}
