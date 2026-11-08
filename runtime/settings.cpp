#include "settings.h"

#include <cstdlib>
#include <fstream>
#include <string>

namespace
{
    std::string Trim(std::string value)
    {
        const size_t first = value.find_first_not_of(" \t\r\n");
        if (first == std::string::npos) return {};
        const size_t last = value.find_last_not_of(" \t\r\n");
        return value.substr(first, last - first + 1);
    }

    void Append(std::string& output, const std::string& line)
    {
        if (!output.empty()) output += " ";
        output += line;
    }

    void SetIfUnset(const char* name, const std::string& value)
    {
        if (std::getenv(name)) return;
#ifdef _WIN32
        _putenv_s(name, value.c_str());
#else
        setenv(name, value.c_str(), 0);
#endif
    }

    // The input section is deliberately a small, strict TOML subset. Keeping
    // this parser local avoids adding a TOML dependency to the runtime/NRO.
    std::string LoadInputToml(const std::filesystem::path& path)
    {
        std::ifstream file(path);
        if (!file) return {};

        std::string loaded;
        std::string section;
        for (std::string line; std::getline(file, line);)
        {
            line = Trim(line);
            if (line.empty() || line[0] == '#') continue;
            if (line.front() == '[' && line.back() == ']')
            {
                section = Trim(line.substr(1, line.size() - 2));
                continue;
            }
            if (section != "input") continue;

            const size_t equals = line.find('=');
            if (equals == std::string::npos) continue;
            const std::string key = Trim(line.substr(0, equals));
            std::string value = Trim(line.substr(equals + 1));
            const size_t comment = value.find('#');
            if (comment != std::string::npos) value = Trim(value.substr(0, comment));

            const char* name = nullptr;
            if (key == "swap_a_b") name = "PES17_INPUT_SWAP_A_B";
            else if (key == "swap_x_y") name = "PES17_INPUT_SWAP_X_Y";
            else continue;

            // TOML booleans are intentionally required; 1/0 and quoted
            // strings are rejected so typos cannot silently change controls.
            if (value != "true" && value != "false") continue;
            if (std::getenv(name)) continue; // explicit process setting wins
            SetIfUnset(name, value);
            Append(loaded, std::string(name) + "=" + value);
        }
        return loaded;
    }
}

std::string settings::Load(const std::filesystem::path& path)
{
    // Controller layout lives in config/PES.toml. Load it before the legacy
    // .env switches so command-line/process overrides retain highest priority.
    std::string set = LoadInputToml(path.parent_path() / "config" / "PES.toml");

    std::ifstream file(path);
    for (std::string line; std::getline(file, line);)
    {
        line = Trim(line);
        const size_t equals = line.find('=');
        // The runtime's own switches, not a way to set any variable at all.
        if (equals == std::string::npos || line.rfind("PES17_", 0) != 0) continue;
        const std::string name = Trim(line.substr(0, equals));
        const std::string value = Trim(line.substr(equals + 1));
        if (std::getenv(name.c_str())) continue;
        SetIfUnset(name.c_str(), value);
        Append(set, name + "=" + value);
    }
    return set;
}
