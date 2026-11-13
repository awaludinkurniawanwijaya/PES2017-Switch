#include "settings.h"

#include <cstdlib>
#include <fstream>
#include <string>

namespace
{
    settings::InputOptions g_inputOptions{};

    std::string Trim(std::string value)
    {
        const size_t first = value.find_first_not_of(" \t\r\n");
        if (first == std::string::npos) return {};
        const size_t last = value.find_last_not_of(" \t\r\n");
        return value.substr(first, last - first + 1);
    }
}

std::string settings::Load(const std::filesystem::path& path)
{
    std::string set;
    std::ifstream file(path);
    for (std::string line; std::getline(file, line);)
    {
        while (!line.empty() && (line.back() == '\r' || line.back() == ' ')) line.pop_back();
        const size_t equals = line.find('=');
        if (equals == std::string::npos || line.rfind("PES17_", 0) != 0) continue;
        const std::string name = line.substr(0, equals), value = line.substr(equals + 1);
        if (std::getenv(name.c_str())) continue;
#ifdef _WIN32
        _putenv_s(name.c_str(), value.c_str());
#else
        setenv(name.c_str(), value.c_str(), 0);
#endif
        set += (set.empty() ? "" : " ") + line;
    }
    return set;
}

bool settings::LoadInputConfig(const std::filesystem::path& path)
{
    g_inputOptions = {};
    std::ifstream file(path);
    if (!file) return false;

    bool inInput = false;
    bool foundAny = false;
    for (std::string line; std::getline(file, line);)
    {
        line = Trim(std::move(line));
        if (line.empty() || line.front() == '#') continue;
        if (line.front() == '[' && line.back() == ']')
        {
            inInput = line == "[input]";
            continue;
        }
        if (!inInput) continue;

        const size_t equals = line.find('=');
        if (equals == std::string::npos) continue;
        const std::string key = Trim(line.substr(0, equals));
        std::string value = Trim(line.substr(equals + 1));
        const size_t comment = value.find('#');
        if (comment != std::string::npos) value = Trim(value.substr(0, comment));

        if (key == "swap_a_b" && (value == "true" || value == "false"))
        {
            g_inputOptions.swapAB = value == "true";
            foundAny = true;
        }
        else if (key == "swap_x_y" && (value == "true" || value == "false"))
        {
            g_inputOptions.swapXY = value == "true";
            foundAny = true;
        }
    }
    return foundAny;
}

settings::InputOptions settings::GetInputOptions()
{
    return g_inputOptions;
}
