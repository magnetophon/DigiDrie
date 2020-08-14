# C++ Code Generation
Run following command to generate C++ code.

```bash
python3 extract_parameter.py
python3 generate_parameter_hpp.py
```

## Dependencies
- [Jinja](https://jinja.palletsprojects.com/en/2.11.x/).

## extract_parameter.py
Extracts parameter group information from `DigiFaustMidi.dsp.json`. Outputs `parameter_group_info_generated.json`.

`parameter_group_info_generated.json` is a barebone of `parameter_group_info.json` which is edited by hand to add `value_type` and `hints`.

TODO:
- Determin parameter group value type.
  - "button", "checkbox" are bool.
- Extract option menu infomation.
  - `elem["meta"]["style"]` in `DigiFaustMidi.dsp.json`.
  - Add documentation around local scale metadata.
- Make sure there's no parameter which has same label and different meaning.

## generate_parameter_hpp.py
- Generates `parameter.cpp` from `parameter.cpp.template`.
- Generates `parameter.hpp` from `parameter.hpp.template`.

Using Jinja for template.

TODO:
- Check if `static` in `Scales` are used or not.
  - `static` is added to change scaling from UI. However, current implementation changes scaling on all instances at once. This is undesirable.
  - If it's possible to hide certain parameters hidden from user, then remove `static`.

## generate_ui_cpp.py
Generates `ui.cpp` from `ui.cpp.template`. Using Jinja for template.

TODO:
- Check all parameters are exposed.
- Change small knob style.
- Stop making `test.json` which provides debug infromation.
- The names of the category (filter,A,B,C,D) to the left of the knobs instead of above the knobs.
