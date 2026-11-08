#include "../switch/source/input.h"

#include <cassert>
#include <cstdint>

int main()
{
    using namespace switch_input;
    constexpr uint16_t kOther = 0x0001 | 0x0100;

    // Defaults preserve the established Nintendo-to-Xbox translation.
    assert(ApplyFaceButtonSwaps(kButtonA | kOther, false, false) == (kButtonA | kOther));

    // A/B can be changed without affecting X/Y.
    assert(ApplyFaceButtonSwaps(kButtonA | kButtonX | kOther, true, false) ==
           (kButtonB | kButtonX | kOther));
    assert(ApplyFaceButtonSwaps(kButtonB | kButtonY | kOther, true, false) ==
           (kButtonA | kButtonY | kOther));

    // X/Y can be changed without affecting A/B.
    assert(ApplyFaceButtonSwaps(kButtonA | kButtonX | kOther, false, true) ==
           (kButtonA | kButtonY | kOther));
    assert(ApplyFaceButtonSwaps(kButtonB | kButtonY | kOther, false, true) ==
           (kButtonB | kButtonX | kOther));

    // Both options can be enabled together, without losing unrelated bits.
    assert(ApplyFaceButtonSwaps(kButtonA | kButtonX | kOther, true, true) ==
           (kButtonB | kButtonY | kOther));

    // Pressing both buttons in a pair remains both pressed after swapping.
    assert(ApplyFaceButtonSwaps(kButtonA | kButtonB | kButtonX | kButtonY,
                                true, true) ==
           (kButtonA | kButtonB | kButtonX | kButtonY));
    return 0;
}
