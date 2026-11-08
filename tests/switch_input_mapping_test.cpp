#include "../switch/source/input.h"

#include <cstdint>
#include <cstdio>
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
}

int main()
{
    using namespace switch_input;
    constexpr uint16_t kOther = 0x0001 | 0x0100;

    Check(ApplyFaceButtonSwaps(kButtonA | kOther, false, false) ==
              (kButtonA | kOther),
          "defaults preserve the established mapping");

    Check(ApplyFaceButtonSwaps(kButtonA | kButtonX | kOther, true, false) ==
              (kButtonB | kButtonX | kOther),
          "A/B swap does not affect X/Y");
    Check(ApplyFaceButtonSwaps(kButtonB | kButtonY | kOther, true, false) ==
              (kButtonA | kButtonY | kOther),
          "A/B swap works in both directions");

    Check(ApplyFaceButtonSwaps(kButtonA | kButtonX | kOther, false, true) ==
              (kButtonA | kButtonY | kOther),
          "X/Y swap does not affect A/B");
    Check(ApplyFaceButtonSwaps(kButtonB | kButtonY | kOther, false, true) ==
              (kButtonB | kButtonX | kOther),
          "X/Y swap works in both directions");

    Check(ApplyFaceButtonSwaps(kButtonA | kButtonX | kOther, true, true) ==
              (kButtonB | kButtonY | kOther),
          "both independent swaps can be enabled together");
    Check(ApplyFaceButtonSwaps(kButtonA | kButtonB | kButtonX | kButtonY,
                               true, true) ==
              (kButtonA | kButtonB | kButtonX | kButtonY),
          "simultaneous presses remain simultaneous");
    Check(ApplyFaceButtonSwaps(kOther, true, true) == kOther,
          "unrelated buttons are preserved");

    std::printf("%d checks, %d failures\n", g_checks, g_failures);
    return g_failures == 0 ? 0 : 1;
}
