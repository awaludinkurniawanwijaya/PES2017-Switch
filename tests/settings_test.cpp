#include "../runtime/settings.h"

#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <string>

namespace
{
    int g_checks = 0;
    int g_failures = 0;

    void Check(bool ok, const char* what)
    {
        ++g_checks;
        if (ok) return;
        ++g_failures;
        std::fprintf(stderr, "FAIL: %s\n", what);
    }

    void SetEnv(const char* name, const char* value)
    {
#ifdef _WIN32
        _putenv_s(name, value ? value : "");
#else
        if (value) setenv(name, value, 1);
        else unsetenv(name);
#endif
    }
}

int main()
{
    const char* const names[] = {
        "PES17_INPUT_SWAP_A_B", "PES17_INPUT_SWAP_X_Y", "PES17_EXISTING"
    };
    for (const char* name : names) SetEnv(name, nullptr);
    SetEnv("PES17_INPUT_SWAP_X_Y", "process");
    SetEnv("PES17_EXISTING", "from-process");

    const auto root = std::filesystem::temp_directory_path() / "pes17-settings-test";
    const auto config = root / "config";
    std::filesystem::create_directories(config);
    const auto envPath = root / ".env";
    {
        std::ofstream file(config / "PES.toml", std::ios::binary | std::ios::trunc);
        file << "[main]\n"
                "skip_lr = false\n"
                "\n"
                "[input]\n"
                "swap_a_b = true\n"
                "swap_x_y = false # process override must win\n"
                "unknown = true\n";
        Check(bool(file), "write temporary config/PES.toml");
    }
    {
        std::ofstream file(envPath, std::ios::binary | std::ios::trunc);
        file << "PES17_INPUT_SWAP_A_B=1\r\n"
                "PES17_INPUT_SWAP_X_Y=0\n"
                "OTHER_SETTING=ignored\n"
                "PES17_MALFORMED\n"
                "PES17_EXISTING=from-file\n";
        Check(bool(file), "write temporary .env");
    }

    const std::string loaded = settings::Load(envPath);
    const char* ab = std::getenv("PES17_INPUT_SWAP_A_B");
    const char* xy = std::getenv("PES17_INPUT_SWAP_X_Y");
    const char* existing = std::getenv("PES17_EXISTING");

    Check(ab && std::string(ab) == "true", "load boolean A/B setting from config/PES.toml");
    Check(xy && std::string(xy) == "process", "preserve process override over TOML and .env");
    Check(existing && std::string(existing) == "from-process",
          "preserve an existing process setting");
    Check(loaded == "PES17_INPUT_SWAP_A_B=true",
          "report only settings imported from config and .env");

    Check(settings::Load(root / "missing.env").empty(),
          "missing .env and config are harmless");

    std::error_code ignored;
    std::filesystem::remove_all(root, ignored);
    for (const char* name : names) SetEnv(name, nullptr);

    std::printf("%d checks, %d failures\n", g_checks, g_failures);
    return g_failures == 0 ? 0 : 1;
}
