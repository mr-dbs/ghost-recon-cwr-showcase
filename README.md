# Ghost Recon conversion for CW:R — r002 test build

Private testing project bringing Ghost Recon characters, their custom animation rig, movement and idle poses to Arma: Cold War Assault Remastered. Uses the public game executable: This version is missing other addons ECP, RHS, BAS, BWmod or MFCTI. Those addons were test for visual enhancements but increased the size of the addon into the gigs.

## Play the test build

1. Open **Releases** and download `GR-CWR-Showcase-r002.zip`. GitHub access to this private repository is required.
2. Extract the whole ZIP into a writable folder. Keep the launchers beside `@DBS_GR_Showcase` and `Missions`.
3. Run **Play_CWR_Showcase.cmd** for the normal game/editor, or **Preview_CWR_Showcase.cmd** for the sample lineup.
4. If discovery cannot find CW:R, drag the Remastered `PoseidonGame.exe` onto the launcher, or pass its game folder as the first argument.

Steam libraries on disconnected drives are skipped. Launchers use their own `.runtime` profile/cache and copy the demonstration into their private editor missions folder on first use. Existing edits to that private copy are preserved.

Do **not** enable this alongside the older `@DBS_GhostRecon` development pack: both editions deliberately retain the same legacy class and asset names. Do not use original OFP/CWA executables; this build targets CW:R. The private test build already contains converted assets and does not presently extract them from a GR installation.

## Contents

- 107 GR character entries, original GR bodies and the custom movement/idle/handgun animation tables.
- Native GR weapon imports, stock BIS sights and RPG/AA fallback equipment.
- No donor weapon packs or custom engine commands.
- Desert Island lineup mission, editable through the mission editor.
- r002 fixes both native AT4 model heights and reversed muzzle/bore direction.

This edition omits the donor-specific SOBR variants and OSV-96 winter sniper. PKM loadouts use the native GR RPK; donor scoped/suppressed AK variants use available native GR AKs. See [loadout substitutions](docs/loadouts.json).

## Validation and known limits

Tested with the installed Steam CW:R executable reporting **3.03**. GR bodies, native weapons, prone/kneeling idle poses and actual GR-player forward movement were observed. All 987 addon payload files match source. Both AT4 definitions generated native firing events; the forward-axis correction is validated from their model memory data. The attempted target-impact test did not establish a hit, so trajectory/impact confirmation in normal play remains requested.

Not an exhaustive test of all characters, optics, reloads, stance transitions, automated AI idles, multiplayer or other CW:R versions. Report the game version, exact unit/weapon and steps to reproduce a problem. [AT4 change details](docs/Changes.md).

## Source and builds

`Source/dbsgr` contains the full local test source, including converted assets. The release ZIP contains a ready-made PBO. Contributors with a compatible PoseidonTools build can run:

```powershell
./scripts/Build.ps1 -ToolsPath "path/to/PoseidonTools.exe"
```

Building uses tools; playing the release does not require a development checkout. Generated PBOs are stored in `Build/Working` and excluded from Git.

## Distribution status

This repository and release are **private test materials**, not a cleared public redistribution. Assets include conversions from Ghost Recon, Desert Siege and Island Thunder, plus base-game references/retargeting. A portable installer that rebuilds from a user's own installed content is not finished. Owning the source games is not represented as permission to redistribute their assets. Review provenance and permissions before making this repository or its releases public. See [NOTICES.md](NOTICES.md).
