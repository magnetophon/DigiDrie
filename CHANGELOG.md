# Changelog

All notable changes to DigiDrie are recorded here. The format follows
[Keep a Changelog](https://keepachangelog.com/en/1.1.0/), and the project
adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [0.3.1] - unreleased

### Added
- Bundled themes are now installed by `make install` to
  `$prefix/share/magnetophon/themes/`, and the default style.json
  installed alongside is now ArcDark (previously black-on-white).
- macOS releases ship with an `install-macos.sh` helper that copies
  every plug-in format into `~/Library/Audio/Plug-Ins/...` and strips
  the Gatekeeper quarantine attribute in one step.

### Changed
- The hardcoded fallback colors in `Palette` now match the ArcDark
  default, so the rare "no JSON found anywhere" path produces the
  same visual result as a normal load instead of an inconsistent
  black-on-white-with-ArcDark-accents mash-up.
- Renamed `kParameterIsAutomable` to `kParameterIsAutomatable`
  throughout `parameter.hpp` to match the current DPF API. Removes
  ~650 deprecation warnings per build; no semantic change.

### Fixed
- `make install` is now usable by downstream packagers without
  workarounds: `installDoc` reads `README.md` and `LICENSE.txt` from
  the repo root rather than `plugin/dpf/`, `installVST2` no longer
  creates a per-plug-in subdirectory inconsistent with the other
  formats, file modes are set explicitly, and the docs directory is
  named after the project rather than the publisher.
- Parallel `make -j N` builds no longer race: the `patch` step
  (which modifies `lib/DPF/dgl/Widget.hpp`) is now a proper
  prerequisite of the libdgl build instead of a sibling in `all`.
- The runtime style.json search path now follows the `PREFIX` make
  variable via a compile-time `MAGNETOPHON_SYSCONFDIR` macro, so
  Nix and non-`/usr/local` installs find their bundled default
  themes automatically.
- Style.json lookup no longer prints a per-path "is not regular file
  or doesn't exist" message on every plug-in instantiation. The
  "all paths failed" diagnostic is preserved.

## [0.3.0] - 2026-05-18

### Added
- VST3 plug-in format on all platforms (Linux x86_64 / aarch64,
  macOS x86_64 / aarch64, Windows x86_64). VST3 is the most widely
  host-supported format on Windows and macOS.
- CLAP plug-in format on all platforms. CLAP is gaining host support
  rapidly (Bitwig, Reaper, FL Studio, REAPER, recent Live versions).
- AU (AudioUnit) plug-in format on macOS, enabling Logic Pro and
  other AU-only macOS hosts.

### Changed
- Bumped DPF from late-2020 to current 2026 main. The submodule
  pickup spans roughly six years of upstream improvements to
  windowing, host integration, and the plug-in framework itself.

### Fixed
- MIDI Poly Key Pressure (0xA0) and Channel Pressure (0xD0) now
  correctly drive the `aftertouch` parameter. They were previously
  misrouted to `pitchBend` (a copy-paste error from the 0xE0 case),
  and an overly strict size guard silently dropped every 2-byte
  Channel Pressure event before the misroute could even fire.

## [0.2.0] - 2020

Earlier baseline. See git log for details.
