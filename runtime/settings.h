#pragma once
// Runtime switches are read from the legacy .env file. Nintendo Switch face-
// button layout is read separately from config/PES.toml [input] as TOML booleans.
#include <filesystem>
#include <string>

namespace settings
{
    // Puts the file's switches in the environment, where the rest of the
    // runtime reads them. One already set there is left as it is, so a
    // switch given on the command line still decides. Called once, before
    // anything reads a switch. Returns what it set, for the log.
    std::string Load(const std::filesystem::path& file);
}
