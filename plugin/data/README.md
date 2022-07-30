# C++ Code Generation
Run following command to build plugin from Faust code.

```bash
git clone --recursive https://github.com/magnetophon/DigiDrie/
cd DigiDrie

# Generate xml.
cd faust/
faust -t 0 -time -xml -os -mapp -vec DigiFaustMidi.dsp > DigiFaustMidi.hpp
cp DigiFaustMidi.hpp     ../plugin/data/
cp DigiFaustMidi.dsp.xml ../plugin/data/

# Generate C++ code from xml.
cd ../plugin/data
./copy.sh

# Build plugin.
cd ../dpf
make -j
```

Using [Jinja](https://jinja.palletsprojects.com/en/2.11.x/). Templates are found in `template` directory.

Generated files are placed in `generated` directory.

## Dependencies
- [Jinja](https://jinja.palletsprojects.com/en/2.11.x/).

## TODO
- Determin parameter group value type.
  - "button", "checkbox" are bool.
- Add documentation around local scale metadata.
  - `decibel`, `spoly` etc.
- Make sure there's no parameter which has same label and different meaning.
- Check if `static` in `Scales` are used or not.
  - `static` is added to change scaling from UI. However, current implementation changes scaling on all instances at once. This is undesirable.
  - If it's possible to hide certain parameters hidden from user, then remove `static`.
- Check all parameters are exposed.
- Change small knob style.
- The names of the category (filter,A,B,C,D) to the left of the knobs instead of above the knobs.
- Test MIDI
  - note-on with velocity 0 as note-off.
  - Aftertouch.
  - Modulation wheel.
