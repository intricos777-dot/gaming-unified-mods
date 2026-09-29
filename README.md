# gaming-unified-mods

Third-party mod tooling relocated out of
[`gaming-unified`](https://github.com/intricos777-dot/gaming-unified).

**This repository is private and contains no original work.** Every file here
belongs to an upstream project, credited in `THIRD_PARTY_NOTICE.md`.

## Why this exists

`gaming-unified` is public and MIT-licensed. It previously vendored Mod
Organizer 2 (611 files, GPL-3.0) and xOBSE (362 files, GPL-2.0). MIT is not
compatible with either, so shipping them under that repo's MIT `LICENSE` was a
licence violation. Moving them into this private repository resolves it: the
public repo keeps only original work under its own terms, and the GPL code lives
where its obligations are understood.

## What is here

| Path | Project | Licence |
|---|---|---|
| `oblivion/modorganizer/` | Mod Organizer 2 (modorganizer2/mo) | GPL-3.0 |
| `oblivion/xOBSE/` | Oblivion Script Extender fork (llde/xOBSE) | GPL-2.0 |
| `oblivion/xOBSE/obse/Detours/` | Microsoft Research Detours 4.0.1 | MIT |
| `oblivion/Oblivion-Display-Tweaks/` | New Vegas Tick Fix (carxt) | upstream terms |

## Provenance

Copied verbatim from `gaming-unified` at commit `9a46a98`. No files were
modified, so upstream copyright headers and `LICENSE` files are intact.

See `THIRD_PARTY_NOTICE.md` for full attribution and obligations.
