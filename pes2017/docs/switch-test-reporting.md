# Switch test result semantics

This project reports build and runtime validation as separate evidence levels.
A successful build is not evidence that PES 2017 is playable on Nintendo Switch.

## Required result labels

- `PASS`: the named automated check ran and its assertion succeeded.
- `FAIL`: the named check ran and its assertion failed; include the failing command or diagnostic.
- `NOT RUN`: the check was not executed. State the reason (for example, an earlier dependency failed or physical hardware was unavailable).
- `BLOCKED`: the check requires an input or environment that is not currently available, such as the user's extracted game files or a physical Switch.

## Evidence levels

| Level | What it proves | What it does not prove |
| --- | --- | --- |
| Compile | A named source file or target compiled | That it linked, launched, or ran correctly |
| Link | The named executable/NRO linked successfully | That it launches or renders correctly |
| CI smoke test | The named automated NRO test completed in CI or produced the explicitly stated artifact | That the PES 2017 game runtime works |
| Hardware test | The named test was actually run on a Nintendo Switch; include firmware/Atmosphere details and observed result | Anything not covered by that test |

## Reporting requirements

Every Switch validation workflow should emit a concise test summary in the GitHub Actions job log and job summary. Report each check with its exact scope and one of `PASS`, `FAIL`, or `NOT RUN`. Hardware checks must remain `BLOCKED` until they are performed on the physical console. Do not describe bootstrap NROs or upstream NXVK smoke NROs as a playable PES 2017 build.
