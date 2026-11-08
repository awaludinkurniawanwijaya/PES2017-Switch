#include "../runtime/install/install.h"

int main()
{
#ifdef __SWITCH__
    static_assert(install::IsPlayerStartArgumentCount(0));
    static_assert(install::IsPlayerStartArgumentCount(1));
    static_assert(!install::IsPlayerStartArgumentCount(2));
#else
    static_assert(!install::IsPlayerStartArgumentCount(0));
    static_assert(install::IsPlayerStartArgumentCount(1));
    static_assert(!install::IsPlayerStartArgumentCount(2));
#endif
    return 0;
}
