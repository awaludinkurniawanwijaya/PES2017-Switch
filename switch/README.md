# Nintendo Switch bring-up

## Current status

The current `switch/Makefile` produces a **bootstrap NRO**. It verifies
libnx platform, controller, and selected install-source compilation paths; it
does not yet link the recompiled PES 2017 guest runtime, generated PPC code,
Xenos GPU renderer, or audio output. A successful NRO build is not evidence
that the game can boot.

## Local build

Install devkitPro with devkitA64, libnx, and switch-tools, then run:

```sh
cd switch
make
```

The output is `pes2017-switch-bootstrap.nro`. Press **+** to exit the
bootstrap controller diagnostic screen.

## SD-card location reserved for the runtime

The Switch platform initializer mounts SDMC and uses:

```text
sdmc:/switch/PES2017/
  pes2017-switch-bootstrap.nro
  game/
    default.xex
    *.cpk
  saves/
```

The runtime install code looks for the build-matched `default.xex` under
`game/`; the XEX is checked against the SHA-256 embedded in that build.
The CPK archives and other legally obtained game data belong beside it.
Do not commit game executables, disc images, CPK archives, generated PPC
output, or other proprietary game data to this repository.

This layout documents the intended runtime location only. The present
bootstrap does not load or launch these files, and the desktop installer
(`pes17-launcher`) is not available on Switch. The full runtime still needs
a Switch-native installation/import flow or a documented manual setup path
before this directory can be used to play.

## Remaining platform work

1. Link the complete runtime and generated PPC output into a Switch target.
2. Replace the Vulkan-only renderer with a native Switch GPU backend (likely
   deko3d); the current GPU backend interface is not itself a renderer.
3. Implement Switch audio output (Audren) and complete input/vibration mapping.
4. Audit thread lifecycle, filesystem behavior, process/title switching, and
   shutdown on libnx.
5. Validate on actual Switch hardware with legally obtained game data.

## CI

The GitHub Actions workflow `.github/workflows/switch-nro.yml` builds the
bootstrap and uploads the NRO as an artifact. CI success is a compile check,
not a gameplay test.
