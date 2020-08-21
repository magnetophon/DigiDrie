"""
active and passive are Element object from `xml.etree.ElementTree`.

- https://docs.python.org/3/library/xml.etree.elementtree.html#element-objects

---

For debugging xml, use following code to write data to file.

```
tree = ET.ElementTree(active)
tree.write("active.xml")
```

Fordebugging dict and list that are passed to template,
use following code to write data to json.

```
# Example to write info_dict.
with open("scale_info.json", "w", encoding="utf-8") as fi:
    json.dump(info_dict, fi, indent=2)
```
"""

import re
import json
import xml.etree.ElementTree as ET
from pathlib import Path
from jinja2 import Environment, FileSystemLoader
from typing import List, Set, Dict, Tuple, Optional

def format_name(name: str):
    nm = name.replace(" ", "").replace("_", "").replace("-", "_").replace("/", "_")
    nm = nm.replace("&", "_")
    return nm.lower()

def format_address(addr: str):
    # addr[1:] remove "/CZsynth" at the start of address.
    addr = "".join([st.capitalize() for st in addr[1:]])
    return addr[0].lower() + addr[1:]

def format_faust_cpp(filename: str):
    with open(filename, "r", encoding="utf-8") as fi:
        text = fi.read()

    # Note that some string contains tab character.
    re_buildUserInterface = re.compile(
        r"\n^	virtual void buildUserInterface\(UI\* ui_interface\) {.*?^	}",
        flags=re.MULTILINE | re.DOTALL,
    )
    re_metadata = re.compile(
        r"\n^	void metadata\(Meta\* m\) {.*?^	}",
        flags=re.MULTILINE | re.DOTALL,
    )
    re_public_dsp = re.compile(" : public dsp")
    re_public_dsp = re.compile(" : public one_sample_dsp")
    re_virtual = re.compile(r"virtual ")
    re_private = re.compile(r"private:")
    re_pragma_once = re.compile(r"(#ifndef  __mydsp_H__)")
    re_include_array = re.compile(r"(#include <algorithm>)")
    re_control_array = re.compile(
        r"^(class mydsp {)",
        flags=re.MULTILINE | re.DOTALL,
    )

    text = re_buildUserInterface.sub("", text)
    text = re_metadata.sub("", text)
    text = re_public_dsp.sub("", text)
    text = re_virtual.sub("", text)
    text = re_private.sub("public:", text)
    text = re_pragma_once.sub(r"#pragma once\n\n\1", text)
    text = re_include_array.sub(r"\1\n#include <array>", text)
    text = re_control_array.sub(
        """\
\\1
 public:
	std::array<int, FAUST_INT_CONTROLS> ictrl{};
	std::array<FAUSTFLOAT, FAUST_REAL_CONTROLS> rctrl{};
""", text)

    with open("generated/faustdsp.hpp", "w", encoding="utf-8") as fi:
        fi.write(text)

def push_address(widgets, ref_id, addr):
    for wdgt in widgets.iter("widget"):
        if wdgt.attrib["id"] == ref_id:
            addr.append(format_name(wdgt.find("label").text))
            elem = ET.SubElement(wdgt, "address")
            elem.text = str(addr)
            elem = ET.SubElement(wdgt, "cppident")
            elem.text = format_address(addr)
            addr.pop()

def add_address(layout, widgets, addr=[]):
    for elem in layout:
        if elem.tag == "group":
            addr.append(format_name(elem.find("label").text))
            add_address(elem, widgets, addr)
            addr.pop()
        elif elem.tag == "widgetref":
            push_address(widgets, elem.attrib["id"], addr)

def get_scale_ident(widget):
    label = widget.find("label").text
    if not label.isdigit():
        return format_name(label)
    return format_name(eval(widget.find("address").text)[-2])

def format_float_string(elem, key):
    value = elem.find(key)
    if value.text[-1] == "f":
        value.text = value.text[:-1]

def add_parameter_info(widgets):
    no_init_primitives = {"button", "checkbox", "hbargraph", "vbargraph"}

    for wdgt in widgets.iter("widget"):
        if wdgt.attrib["type"] in no_init_primitives:
            elem = ET.SubElement(wdgt, "init")
            elem.text = "0.0f"
        elem = ET.SubElement(wdgt, "scale")
        elem.text = get_scale_ident(wdgt)

def load_faust_xml(xmlfile):
    """
    active: Active widgets.
    passive: Passive widgets.
    layout: UI layout data. Contains hierarchy of groups.
    """
    tree = ET.parse(xmlfile)
    root = tree.getroot()

    ui = root.find("ui")
    if ui is None:
        print(f"Error: ui tag doesn't exist in root of {xmlfile}")
        exit()

    active = ui.find("activewidgets")
    passive = ui.find("passivewidgets")
    layout = ui.find("layout")

    add_address(layout, active)
    add_address(layout, passive)

    add_parameter_info(active)
    add_parameter_info(passive)

    midi = ET.Element("midi")
    for widget in active.iter("widget"):
        addr = eval(widget.find("address").text)
        if addr[1] == "midi":
            midi.append(widget)
    for widget in midi:
        active.remove(widget)

    return active, midi, passive, layout

def generate_dspcore_cpp(active, passive, midi_widgets):
    param_data = []
    for elem in active.iter("widget"):
        data = {
            "ident": elem.find("cppident").text,
            "varname": elem.find("varname").text,
        }
        param_data.append(data)

    midi = {}
    for elem in midi_widgets.iter("widget"):
        addr = eval(elem.find("address").text)
        midi[addr[2]] = {"varname": elem.find("varname").text}

    jinja_env = Environment(loader=FileSystemLoader("."))
    template = jinja_env.get_template("template/dspcore.cpp.template")
    text = template.render(
        param_data=param_data,
        midi=midi,
    )
    with open("generated/dspcore.cpp", "w", encoding="utf-8") as fi:
        fi.write(text)

def compare_value_tag(info, wdgt, key):
    elem = wdgt.find(key)
    if (elem is not None) and (info[key] != float(elem.text[:-1])):
        addr = wdgt.find("address").text
        print(
            f"Error: Found mismatch of {key} in {addr}.",
            info[key],
            sep="\n",
        )
        ET.dump(wdgt)
        exit()

def check_if_identical(info, wdgt):
    compare_value_tag(info, wdgt, "init")
    compare_value_tag(info, wdgt, "min")
    compare_value_tag(info, wdgt, "max")

def get_scale_data(wdgt):
    """
    Reterns: (scale, hints)
    """
    hints = []

    prim_type = wdgt.attrib["type"]
    if "bargraph" not in prim_type:
        hints.append("kParameterIsAutomable")

    if wdgt.find("meta") is None:
        return ("Linear", hints)

    scale = [x for x in wdgt.findall("meta") if x.attrib["key"] == "scale"]

    if len(scale) == 0:
        return ("Linear", hints)
    if len(scale) > 1:
        print(f"Warning: 2 scale metadatas {scale} in {wdgt.find('address').text}.")
    scale = scale[0].text

    if scale == "int":
        hints.append("kParameterIsInteger")
    elif scale == "log":
        hints.append("kParameterIsLogarithmic")

    if scale == "spoly":
        scale = "SPoly"
    else:
        scale = scale.capitalize()

    return (scale, hints)

def get_value_with_fallback(widget, key, fallback):
    elem = widget.find(key)
    if elem is None:
        return fallback
    if elem.text[-1] == "f":
        return float(elem.text[:-1])
    print('Warning: get_value_with_fallback() elem.text is not int nor ".f"')
    print(f"key: {key}")
    ET.dump(widget)
    return float(elem.text)

def get_scale_info(widgets):
    info_dict = {}
    for wdgt in widgets.iter("widget"):
        label = wdgt.find("scale").text
        if label in info_dict:
            check_if_identical(info_dict[label], wdgt)
            continue

        scale, hints = get_scale_data(wdgt)

        info_dict[label] = {
            "type": scale,
            "hints": hints,
            "init": get_value_with_fallback(wdgt, "init", 0),
            "min": get_value_with_fallback(wdgt, "min", 0),
            "max": get_value_with_fallback(wdgt, "max", 1),
        }

    return info_dict

def generate_parameter_hpp(active, passive):
    scale_info = get_scale_info(active)

    scales = []
    for key, value in scale_info.items():
        value["label"] = key
        scales.append(value)

    parameters = []
    for widget in active.iter("widget"):
        prm = {
            "ident": widget.find("cppident").text,
            "scale": widget.find("scale").text,
            "init": widget.find("init").text,
        }

        scale_name = widget.find("scale").text
        if scale_name in scale_info:
            prm["value_type"] = scale_info[scale_name]["type"] + "Value"
            prm["hints"] = scale_info[scale_name]["hints"]
        else:
            prm["value_type"] = "LinearValue"
            prm["hints"] = []

        parameters.append(prm)

    jinja_env = Environment(loader=FileSystemLoader("."))
    template = jinja_env.get_template("template/parameter.hpp.template")
    text = template.render(
        parameters=parameters,
        scales=scales,
    )
    with open("generated/parameter.hpp", "w", encoding="utf-8") as fi:
        fi.write(text)

    template = jinja_env.get_template("template/parameter.cpp.template")
    text = template.render(scales=scales)
    with open("generated/parameter.cpp", "w", encoding="utf-8") as fi:
        fi.write(text)

def get_label_in_address(addr, label_list):
    label = None
    for lbl in label_list:
        if lbl in addr:
            label = lbl
            break
    return label

def format_menu(text: str):
    return json.loads(text[4:].replace("'", '"').replace(";", ","))

def get_osc_items(widgets, nrMacro):
    # Assuming macro index isn't padded like "01", " 1".
    macro_labels = [f"macro{idx + 1}" for idx in range(nrMacro)]
    section_labels = ["filter", "a", "b", "c", "d"]
    offset_labels = ["main", "l_roffset"]
    idents_filt = ["normfreq", "q", "svf", "ms20", "oberheim"]
    idents_osc = ["index", "octave", "phase", "pma", "pmb", "pmc", "pmd"]

    osc_items = {}
    for mcr in macro_labels:
        osc_items[mcr] = {}
        for sctn in section_labels:
            osc_items[mcr][sctn] = {}
            if sctn == "filter":
                for ident in idents_filt:
                    osc_items[mcr][sctn][ident] = {}
            else:
                for ident in idents_osc:
                    osc_items[mcr][sctn][ident] = {}

    for elem in widgets.iter("widget"):
        addr = eval(elem.find("address").text)

        section = get_label_in_address(addr, section_labels)
        if section is None:
            continue

        macro = get_label_in_address(addr, macro_labels)
        if macro is None:
            continue

        ident = None
        if section == "filter":
            ident = get_label_in_address(addr, idents_filt)
        else:
            ident = get_label_in_address(addr, idents_osc)
        if ident is None:
            continue

        offset = get_label_in_address(addr, offset_labels)
        if offset is None:
            continue

        osc_items[macro][section][ident][offset] = elem.find("cppident").text

    osc_type = {}
    for elem in widgets.iter("widget"):
        addr = eval(elem.find("address").text)
        if addr[-1] == "type":
            menu = elem.findall("meta[@key='style']")[0].text
            item = {}
            item["address"] = elem.find("cppident").text
            item["menu"] = format_menu(menu)
            osc_type[addr[1]] = item

    return osc_items, osc_type

def get_envelope_items(widgets):
    items = {}
    for elem in widgets.iter("widget"):
        addr = eval(elem.find("address").text)
        if addr[1] != "envelopes":
            continue
        if addr[2] not in items.keys():
            items[addr[2]] = {}
        items[addr[2]][addr[3]] = elem.find("cppident").text
    return items

def get_lfo_items(widgets):
    items = {}
    for elem in widgets.iter("widget"):
        addr = eval(elem.find("address").text)
        if addr[1] != "lfos":
            continue
        if addr[2] not in items.keys():
            items[addr[2]] = {}
        items[addr[2]][addr[3]] = elem.find("cppident").text
    return items

def get_modulation_items(widgets):
    group_labels = ["env", "lfo"]

    items = {}
    axes = {}
    for elem in widgets.iter("widget"):
        addr = eval(elem.find("address").text)
        if addr[1] != "modulation":
            continue
        if addr[3] == "macro":
            axes[addr[2]] = elem.find("cppident").text
            continue
        if addr[2] not in items.keys():
            items[addr[2]] = {}
        if addr[3] in group_labels:
            items[addr[2]][addr[3] + addr[4]] = elem.find("cppident").text
            continue
        items[addr[2]][addr[3]] = elem.find("cppident").text

    return items, axes

def get_global_items(widgets, nrMacro):
    # Assuming macro index isn't padded like "01", " 1".
    macro_labels = [f"macro{idx + 1}" for idx in range(nrMacro)]
    idents_crossfade = ["ab_cd", "ac_bd"]
    offset_labels = ["main", "l_roffset"]

    crossfade_items = {}
    for mcr in macro_labels:
        crossfade_items[mcr] = {}
        for crs in idents_crossfade:
            crossfade_items[mcr][crs] = {}

    global_items = {}
    global_checkboxes = {}
    global_menus = {}
    for elem in widgets.iter("widget"):
        addr = eval(elem.find("address").text)
        if addr[1] != "global":
            continue

        crossfade = get_label_in_address(addr, idents_crossfade)
        if crossfade is not None:
            macro = get_label_in_address(addr, macro_labels)
            if macro is None:
                continue

            offset = get_label_in_address(addr, offset_labels)
            if offset is None:
                continue

            crossfade_items[macro][crossfade][offset] = elem.find("cppident").text
            continue

        menu_meta = elem.findall("meta[@key='style']")
        if len(menu_meta) != 0:
            menu = menu_meta[0].text
            item = {}
            item["address"] = elem.find("cppident").text
            item["menu"] = format_menu(menu)
            global_menus[addr[-1]] = item
            continue

        if elem.attrib["type"] == "checkbox":
            global_checkboxes[addr[-1]] = elem.find("cppident").text
        else:
            global_items[addr[-1]] = {
                "address": elem.find("cppident").text,
                "scale": elem.find("scale").text
            }

    return global_items, global_menus, global_checkboxes, crossfade_items

def generate_ui_cpp(active, passive):
    nrMacro = 8 # TODO: Get info from xml.

    osc_items, osc_type = get_osc_items(active, nrMacro)
    envelope_items = get_envelope_items(active)
    lfo_items = get_lfo_items(active)
    modulation_items, modulation_axes = get_modulation_items(active)
    global_items, global_menus, global_checkboxes, crossfade_items = get_global_items(
        active, nrMacro)

    jinja_env = Environment(loader=FileSystemLoader("."))
    template = jinja_env.get_template("template/ui.cpp.template")
    text = template.render(
        nrMacro=nrMacro,
        osc_items=osc_items,
        osc_type=osc_type,
        crossfade_items=crossfade_items,
        global_items=global_items,
        global_menus=global_menus,
        global_checkboxes=global_checkboxes,
        envelope_items=envelope_items,
        lfo_items=lfo_items,
        modulation_items=modulation_items,
        modulation_axes=modulation_axes,
    )
    with open("generated/ui.cpp", "w", encoding="utf-8") as fi:
        fi.write(text)

if __name__ == "__main__":
    format_faust_cpp("DigiFaustMidi.hpp")
    active, midi, passive, layout = load_faust_xml("DigiFaustMidi.dsp.xml")

    generate_dspcore_cpp(active, passive, midi)
    generate_parameter_hpp(active, passive)
    generate_ui_cpp(active, passive)
