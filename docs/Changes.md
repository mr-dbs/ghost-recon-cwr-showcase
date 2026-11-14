# Showcase r002: native GR AT4 correction

Both native GR AT4 definitions W022/W044 corrected. Visual and memory points lowered13cm; muzzle/bore axis now negative modelZ (stock launcher convention) instead of the previous reverse axis. Explicit empty modelSpecial prevents the inherited loaded LAW model override. Both classes explicitly fire the existing GR AT ammunition.

Native GR mesh/texture/topology/normals retained. Only weapons.hpp plus objects/w0119.p3d and w0120.p3d changed; no animation/body/loadout/other weapon or engine changes. Scope is this separate showcase only; Main r047/MFCTI unchanged.

Verified987 package files exactly match source. On installed Steam3.03, both W022/W044 produced actual native Fired events, with lowered shoulder side views captured. nearestObject cannot enumerate projectiles in this engine; early null projectile queries and front/rear no-damage target attempts are not valid proof of trajectory or impact. The direction correction is established from muzzle/bore model data and stock forward convention. Player confirmation of impact/aim in normal play remains useful. Do not describe the no-hit test as a successful target hit.

Build/r001 and Backups/before_r002 retain recovery. Existing launchers and user-edited private editor mission unchanged. This is still a local release candidate, not publicly published or a cleared redistribution package.
