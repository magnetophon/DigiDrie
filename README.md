# DigiDrie

A monster monophonic synth, written in faust.
<img width="1440" height="740" alt="image" src="https://github.com/user-attachments/assets/5c3d0e13-c382-4e15-ada1-dbb9877b58ac" />

## features

- 4 oscillators in double crossfade configuration, so iow Vector Synthesis.
- each osc is a [CZ style](https://forum.pdpatchrepo.info/topic/5992/casio-cz-oscillators) osc, where you can choose between 9 waveforms
- each osc is phase-locked to a single master oscillator.
- but the phase can be changed and modulated, also by other oscillators.
- each osc can smoothly crossfade between octaves
- the phase signal feeding the CZ oscs can be passed trough a set of lowpass-filters.
  This sounds similar yet very different from filtering the output of an oscillator. For example: when you filter the phase input of a sine-wave, it creates harmonics and you can kind of hear the character of the filter.
  - there are a couple of lowpass-types (moog/oberheim/ms20) that can be dynamically mixed, but the sum of the mix is always 1
- the synth is fully stereo: each parameter has a main slider and a left-right difference slider
- each parameter (and it's l-r-diff brother) can be morphed between 8 settings, called macros, in a 3D cross-fade configuration.
- each macro can be modulated by 4 envelopes and 4 lfo's
- the number of envelopes, lfos can be easily changed at compile time


Here are two short [audio](https://magnetophon.nl/sounds/magnetophon/digiDrie.mp3) [demo's](https://raw.githubusercontent.com/magnetophon/DigiDrie/master/faust/various/digiDrie_III.mp3).


## macros

You can think of the macros as modulate-able presets, arranged in a cube.
Each of the "modulation->1/2/3" settings cross-fades between two sides of the cube, in either the x,y or z dimension.

So:
"modulation->1" cross-fades from preset 1,3,5 and 7 to 2,4,6,8.
"modulation->2" cross-fades from preset 1,2,5,6 to 3,4,7,8.
"modulation->3" cross-fades from preset 1,2,3,4 to 5,6,7,8.

By default, "modulation->1/2/3" are all 0, so you hear preset 1.
When you turn up "modulation->1", the settings morph to preset 2.

## installation

Prebuilt binaries are attached to each [release](https://github.com/magnetophon/DigiDrie/releases) for Linux (x86_64 and aarch64), macOS (x86_64 and Apple Silicon), and Windows (x86_64).
Pick the archive matching your platform, extract it, and copy the plugin into your host's plug-in folder.
DigiDrie ships as VST2 and LV2 on every platform, plus a JACK standalone on Linux.
There's no AU build (Logic Pro is unsupported) and no VST3 build.

### Linux

```bash
# VST2
cp -r DigiDrie-linux-x86_64/lib/vst/DigiDrie-vst.so   ~/.vst/
# LV2 — copy the whole bundle directory, not just the .so files inside
cp -r DigiDrie-linux-x86_64/lib/lv2/DigiDrie.lv2      ~/.lv2/
```

If you want the JACK standalone:

```bash
mkdir -p ~/.local/bin
cp DigiDrie-linux-x86_64/bin/DigiDrie ~/.local/bin/
chmod +x ~/.local/bin/DigiDrie
```

The `chmod +x` step is needed because GitHub's artifact format doesn't preserve file modes; release downloads via the releases page have it already set, but artifacts grabbed directly from a CI run will not.

### macOS

```bash
# VST2 — DigiDrie.vst is a bundle directory; move the whole thing
cp -r DigiDrie-macos-aarch64/lib/vst/DigiDrie.vst     ~/Library/Audio/Plug-Ins/VST/
# LV2 — same: the .lv2 is a directory
cp -r DigiDrie-macos-aarch64/lib/lv2/DigiDrie.lv2     ~/Library/Audio/Plug-Ins/LV2/

# Strip Gatekeeper's quarantine attribute on the downloaded files,
# otherwise hosts will silently refuse to load them.
xattr -dr com.apple.quarantine ~/Library/Audio/Plug-Ins/VST/DigiDrie.vst
xattr -dr com.apple.quarantine ~/Library/Audio/Plug-Ins/LV2/DigiDrie.lv2
```

Substitute `macos-x86_64` for `macos-aarch64` on Intel Macs.
The binaries are ad-hoc codesigned but not Developer-ID-signed and not notarized, which is why the quarantine step is needed.

### Windows

VST2 plugin lookup paths vary by host — Reaper, Bitwig, Studio One, etc.
all read different locations and most let you configure the scan path in settings.
A common system-wide spot is `C:\Program Files\Common Files\VST2\`; per-user, hosts usually accept anywhere under your profile.
Copy `DigiDrie-vst.dll` (and the `DigiDrie.lv2` directory, if your host supports LV2) into whichever folder your host scans.

### themes (optional)

The plugin reads `magnetophon/style/style.json` from `$XDG_CONFIG_HOME` (typically `~/.config/` on Linux and macOS) and falls back to `/usr/local/etc/` and `/etc/`.
The `style/` directory bundled in the archive contains presets you can drop in there; if you don't, the plugin uses a built-in default theme.

## building

### Faust

``` shell
git clone https://github.com/magnetophon/DigiDrie/
cd DigiDrie/faust/
```

To get a jack standalone app:

``` shell
faust2jack -t 0 -time -midi DigiDrie.dsp && ./DigiDrie

```

It's quite a long compile for a single faust program, +/- 7 minutes on my hardware.
The compiler is not hanging!  ;)

To look at a block diagram:

``` shell
faust -lang ocpp -t 0 -time -svg -f 1 DigiDiagram.dsp -o -drf  /dev/null && xdg-open DigiDiagram-svg/process.svg
```

The file ``DigiDiagram.dsp`` is slightly different from the main dsp, in that it doesn't use a [cludge written in faust](https://github.com/magnetophon/DigiDrie/blob/master/lib/lastNote.lib) to work around the [poor monophonic handeling](https://github.com/grame-cncm/faust/issues/252) faust currently has.
It increases the size of the diagram a lot, and doesn't help to clarify the actual synth.


### Plugin

This is work in progress. If something is not working, please open issue.

Building from source works on Linux (x86_64 and aarch64), macOS (x86_64 and Apple Silicon), and Windows via MSYS2 MinGW64.
The CI workflow at `.github/workflows/build.yml` is the authoritative reference for the toolchain and dependencies on each platform.

```bash
git clone --recursive https://github.com/magnetophon/DigiDrie/
cd DigiDrie/plugin/dpf
make -j
```

Plugins are built into `plugin/dpf/bin/`.
Filenames depend on the platform — `.so` on Linux, `.dylib` (wrapped into a `.vst` bundle on macOS by the CI workflow), `.dll` on Windows.
On Linux you additionally get a `DigiDrie` JACK standalone.

To build plugin from Faust code, see [`plugin/data/README.md`](https://github.com/magnetophon/DigiDrie/blob/master/plugin/data/README.md).

## issues

Bug reports, feature requests and other [issues](https://github.com/magnetophon/DigiDrie/issues) welcome!
