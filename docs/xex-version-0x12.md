# PES 2017 XEX target: Europe v0x12

This Switch project is being prepared against the user's locally owned PES 2017
Xbox 360 Europe executable whose XEX execution-info version is **0x00000012**
and title ID is **0x4A3007D1**.

The value in the XEX execution-info header is not a parser-wide restriction.
The runtime reads it from each XEX. The build input is deliberately checked
against the selected target so a different regional/revision executable cannot
silently generate PPC code for the wrong addresses.

## Local validation and recompilation

Keep the original game files local; do not commit or upload them. From the
project root, run:

```sh
GAME="$HOME/storage/shared/PES2017-Extracted" \
XEX_VERSION=0x00000012 \
RECOMPILE_ONLY=1 ./build.sh
```

Before XenonAnalyse and XenonRecomp run, `tools/verify_xex.py` checks:

- XEX2 structure and execution-info header;
- title ID `0x4A3007D1`;
- execution-info version `0x00000012`;
- and prints the exact local SHA-256.

The build copies the selected `GAME/default.xex` into the private
`pes/default.xex` input when it differs, then regenerates the flat PE image
when the XEX changes. The build writes `ppc/XEX_TARGET` with the title ID, version, and SHA-256
used to generate that PPC output. CMake requires that manifest and compares it
to the current `pes/default.xex` before linking; it also repeats the XEX
metadata check. The install-time SHA-256 is derived from those same bytes, so
the installed executable must match the one used for recompilation.

To intentionally validate another execution-info version for development,
override `XEX_VERSION` in the shell and
`PES17_EXPECTED_XEX_VERSION` in CMake. That alone does not establish that
the corresponding game build is supported: its PPC output must be regenerated
and validated separately.
