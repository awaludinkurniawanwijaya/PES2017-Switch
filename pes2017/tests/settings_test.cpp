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
    SetEnv("PES17_EXISTING", "from-process");

    const auto envPath = std::filesystem::temp_directory_path() / "pes17-settings-test.env";
    {
        std::ofstream file(envPath, std::ios::binary | std::ios::trunc);
        file << "PES17_EXISTING=from-file\nOTHER_SETTING=ignored\nPES17_MALFORMED\n";
        Check(bool(file), "write temporary legacy environment file");
    }
    const std::string loaded = settings::Load(envPath);
    const char* existing = std::getenv("PES17_EXISTING");
    Check(existing && std::string(existing) == "from-process", "preserve existing process setting");
    Check(loaded.empty(), "ignore non-runtime entries and preserve existing values");

    const auto tomlPath = std::filesystem::temp_directory_path() / "pes17-settings-test.toml";
    {
        std::ofstream file(tomlPath, std::ios::binary | std::ios::trunc);
        file << "[main]\nskip_lr = false\n[input]\nswap_a_b = true # enabled\nswap_x_y = false\n[other]\nswap_a_b = false\n";
        Check(bool(file), "write temporary TOML input config");
    }
    Check(settings::LoadInputConfig(tomlPath), "load TOML input table");
    auto options = settings::GetInputOptions();
    Check(options.swapAB, "read true A/B boolean");
    Check(!options.swapXY, "read false X/Y boolean independently");

    {
        std::ofstream file(tomlPath, std::ios::binary | std::ios::trunc);
        file << "[input]\nswap_a_b = false\nswap_x_y = true\n";
    }
    Check(settings::LoadInputConfig(tomlPath), "reload changed TOML values");
    options = settings::GetInputOptions();
    Check(!options.swapAB && options.swapXY, "reload each pair independently");

    {
        std::ofstream file(tomlPath, std::ios::binary | std::ios::trunc);
        file << "[input]\nswap_a_b = 1\nswap_x_y = \"true\"\n";
    }
    Check(!settings::LoadInputConfig(tomlPath), "reject non-boolean TOML values");
    options = settings::GetInputOptions();
    Check(!options.swapAB && !options.swapXY, "invalid values safely default to false");

    Check(!settings::LoadInputConfig(tomlPath.string() + ".missing"), "missing TOML file returns false");
    options = settings::GetInputOptions();
    Check(!options.swapAB && !options.swapXY, "missing file resets to defaults");

    std::error_code ignored;
    std::filesystem::remove(envPath, ignored);
    std::filesystem::remove(tomlPath, ignored);
    for (const char* name : names) SetEnv(name, nullptr);

    std::printf("%d checks, %d failures\n", g_checks, g_failures);
    return g_failures == 0 ? 0 : 1;
}
