#include "install/install.h"

static_assert(install::IsPlayerStartArgumentCount(0),
              "Homebrew Menu launch with argc=0 must start the installed game");
static_assert(install::IsPlayerStartArgumentCount(1),
              "Homebrew launch with one argv entry must start the installed game");
static_assert(!install::IsPlayerStartArgumentCount(2),
              "An explicit image argument must remain a development launch");
