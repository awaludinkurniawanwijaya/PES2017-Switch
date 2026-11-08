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

    const auto path = std::filesystem::temp_directory_path() / "pes17-settings-test.env";
    {
        std::ofstream file(path, std::ios::binary | std::ios::trunc);
        file << "PES17_INPUT_SWAP_A_B=1\r\n"
                "PES17_INPUT_SWAP_X_Y=0\n"
                "OTHER_SETTING=ignored\n"
                "PES17_MALFORMED\n"
                "PES17_EXISTING=from-file\n";
        Check(bool(file), "write temporary settings file");
    }

    const std::string loaded = settings::Load(path);
    const char* ab = std::getenv("PES17_INPUT_SWAP_A_B");
    const char* xy = std::getenv("PES17_INPUT_SWAP_X_Y");
    const char* existing = std::getenv("PES17_EXISTING");

    Check(ab && std::string(ab) == "1", "load A/B setting from .env");
    Check(xy && std::string(xy) == "0", "load X/Y setting independently from .env");
    Check(existing && std::string(existing) == "from-process",
          "preserve an existing process setting");
    Check(loaded == "PES17_INPUT_SWAP_A_B=1 PES17_INPUT_SWAP_X_Y=0",
          "report only settings imported from the file");

    Check(settings::Load(path.string() + ".missing").empty(),
          "missing settings file is harmless");

    std::error_code ignored;
    std::filesystem::remove(path, ignored);
    for (const char* name : names) SetEnv(name, nullptr);

    std::printf("%d checks, %d failures\n", g_checks, g_failures);
    return g_failures == 0 ? 0 : 1;
}
