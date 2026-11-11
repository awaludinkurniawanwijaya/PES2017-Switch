# Private PPC input for the Switch GitHub Actions build

The full Switch NRO workflow deliberately keeps title-specific generated PPC output out of this public repository.

## 1. Create a private repository

Create a new **private** repository under your GitHub account, for example:

`PES2017-Switch-PPC`

Its root must contain the generated directory in this layout:

```text
PES2017-Switch-PPC/
└── ppc/
    ├── XEX_TARGET
    ├── ppc_func_mapping.cpp
    ├── stubs_generated.cpp
    └── ppc_recomp.*.cpp
```

Upload only the generated `ppc/` directory from your own local recompilation. Do not upload `default.xex`, ISO/disc images, extracted game assets, or other copyrighted game files.

The expected target manifest for the currently configured build is:
- title ID: `0x4A3007D1`
- XEX version: `0x00000012`
- XEX SHA-256: `b914ec9a1abb3a9b42a64255b6aa8ff27312da126f7c18f8c880106b832779e6`

## 2. Give Actions read-only access

Create a fine-grained personal access token restricted to this private repository, with **Contents: Read-only** permission. Do not put the token in source files or commit it.

In the public `PES2017-Switch` repository, open **Settings → Secrets and variables → Actions** and add:

Repository variable:
- Name: `PES17_PPC_REPOSITORY`
- Value: `YOUR_GITHUB_USERNAME/PES2017-Switch-PPC`

Repository secret:
- Name: `PES17_PPC_READ_TOKEN`
- Value: the fine-grained token

The workflow uses the token only to check out the private PPC repository. It does not print the token.

## 3. Run the full build

Open **Actions → Switch Vulkan BO2 Mesa SDK → Run workflow** on branch `work/switch-libnx-platform`.

The workflow has two jobs:
- The existing Vulkan probe job, which builds the small diagnostic NRO.
- `Build full PES 2017 Switch NRO (private PPC)`, which checks out your private PPC, compiles the actual generated PPC and runtime, and packages `pes17.nro`.

Only the resulting NRO is uploaded as the `pes17-switch-full-nro` artifact (7-day retention). The private PPC checkout is used on the ephemeral runner and is not uploaded as an artifact.

A successful compile is not proof that the game is playable; the NRO must still be tested on the physical Switch and remaining runtime/import/render/audio issues may need work.
