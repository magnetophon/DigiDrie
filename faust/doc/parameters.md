# Parameters
There are many parameters (~ 1000) in DigiDrie parameters. However, most of them has same meaning with different destination.

The aim of this document is list those parameter groups and its meaning, and provides name mapping between Faust and C++.

## Parameter Type
There are 2 types of Faust parameter: active and passive.

Active parameter is user input.

Passive parameter do not accept user input, and is used for indicaters. A passive parameter can be used to send a DSP value to GUI.

Parameter is active when using following primitives.

- button
- checkbox
- hslider
- vslider
- nentry

Parameter is passive when using following primitives.

- vbargraph
- hbargraph

## Crossfade
### Ab_cd
TODO: Add image.

- In Faust: `ab/cd`
- In C++: `Ab_cd`

### Ac_bd
TODO: Add image.

- In Faust: `ac/bd`
- In C++: `Ac_bd`

## Envelope
### Attack, Decay, Sustain, Release
Envelope A, D, S, R time.

- In Faust: `attack`
- In C++: `Attack`

---

- In Faust: `decay`
- In C++: `Decay`

---

- In Faust: `sustain`
- In C++: `Sustain`

---

- In Faust: `release`
- In C++: `Release`

### Env0, Env1, Env2, Env3
Amount of modulation from envelope 0, 1, 2, 3.

- In Faust: `env 0`
- In C++: `Env0`

---

- In Faust: `env 1`
- In C++: `Env1`

---

- In Faust: `env 2`
- In C++: `Env2`

---

- In Faust: `env 3`
- In C++: `Env3`

### Velsens
TODO

- In Faust: `vel sens`
- In C++: `Velsens`

## Macro
### Curve
TODO

- In Faust: `curve`
- In C++: `Curve`

### Downtime, Uptime
TODO

- In Faust: `down time`
- In C++: `Downtime`

---

- In Faust: `up time`
- In C++: `Uptime`

### Macro
DC signal amplitude of a macro signal.

- In Faust: `macro`
- In C++: `Macro`

### Mix
A mixed macro signal before modulation. Passive parameter.

- In Faust: `mix`
- In C++: `Mix`

### Level
Amount of modulation from a macro signal.

- In Faust: `level`
- In C++: `Level`

## Global
### Freefloatosc
TODO

- In Faust: `free float osc`
- In C++: `Freefloatosc`

### Masterphase
TODO

- In Faust: `masterPhase`
- In C++: `Masterphase`

### Portamento
Portamento time.

- In Faust: `portamento`
- In C++: `Portamento`

### Portaoff_auto_on
TODO

- In Faust: `porta off/auto/on`
- In C++: `Portaoff_auto_on`

## MIDI
### Freq
Note frequency in Hz.

- In Faust: `freq`
- In C++: `Freq`

### Gain
Note gain.

- In Faust: `gain`
- In C++: `Gain`

### Gate
Gate of a note.

- In Faust: `gate`
- In C++: `Gate`

## LFO
### Lfo0, Lfo1, Lfo2, Lfo3
Amount of modulation from LFO 0, 1, 2, 3.

- In Faust: `LFO  0`, `lfo 0`
- In C++: `Lfo0`

---

- In Faust: `LFO  1`, `lfo 1`
- In C++: `Lfo1`

---

- In Faust: `LFO  2`, `lfo 2`
- In C++: `Lfo2`

---

- In Faust: `LFO  3`, `lfo 3`
- In C++: `Lfo3`

### Lfofreq
TODO: Unit.

- In Faust: `lfo freq`
- In C++: `Lfofreq`

## Filter
### Normfreq
Filter cutoff in normalized frequency.

- In Faust: `normFreq`
- In C++: `Normfreq`

### Q
Filter Q (quality factor, or resonance).

- In Faust: `Q`
- In C++: `Q`

## Oscillator
### Index
TODO: Index of PM or CZ osc?

- In Faust: `index`
- In C++: `Index`

### Octave
Oscillator octave.

- In Faust: `octave`
- In C++: `Octave`

### Phase
Oscillator phase.

- In Faust: `phase`
- In C++: `Phase`

### Pma, Pmb, Pmc, Pmd
Phase modulation amount from oscillator A, B, C, D.

- In Faust: `PM A`
- In C++: `Pma`

---

- In Faust: `PM B`
- In C++: `Pmb`

---

- In Faust: `PM C`
- In C++: `Pmc`

---

- In Faust: `PM D`
- In C++: `Pmd`

### Type
TODO: Waveform of oscillator or phazor?

- In Faust: `type`
- In C++: `Type`

## Appendix
All parameter labels in python3 dict format. The script print out parameter labels in dictionary order.

```python
from typing import List, Set, Dict, Tuple, Optional

def format_name(name: str):
    nm = name.replace(" ", "").replace("_", "").replace("-", "_").replace("/", "_")
    nm = nm.replace("&", "_")
    return nm.capitalize()

cpp_label = {
    "Freefloatosc", "Masterphase", "Portaoff_auto_on", "Portamento", "Env0", "Env1",
    "Env2", "Env3", "Lfo0", "Lfo1", "Lfo2", "Lfo3", "Ab_cd", "Ac_bd", "Level", "Normfreq",
    "Q", "Index", "Octave", "Phase", "Pma", "Pmb", "Pmc", "Pmd", "Type", "Attack",
    "Decay", "Sustain", "Release", "Velsens", "Lfofreq", "Uptime", "Downtime", "Macro",
    "Mix", "Curve"
}

faust_label = {
    'lfo 0', 'env 3', 'gain', 'release', 'LFO  2', 'PM C', 'lfo 3', 'masterPhase',
    'LFO  3', 'macro', 'index', 'PM B', 'curve', 'down time', 'porta off/auto/on',
    'ab/cd', 'gate', 'freq', 'sustain', 'mix', 'decay', 'env 0', 'LFO  0', 'octave',
    'env 1', 'vel sens', 'lfo freq', 'up time', 'free float osc', 'normFreq', 'PM A',
    'lfo 1', 'phase', 'PM D', 'level', 'attack', 'ac/bd', 'LFO  1', 'Q', 'env 2', 'type',
    'lfo 2', 'portamento'
}

text = []
for label in faust_label:
    lbl = format_name(label)
    if lbl not in cpp_label:
        print(f"Error: {label}, {lbl}")
        continue
    text.append(f"# {lbl}\n- In Faust: `{label}`\n- In C++: `{lbl}`\n")

print("\n".join(sorted(text)))
```
