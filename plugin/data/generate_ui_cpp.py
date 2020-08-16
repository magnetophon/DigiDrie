import json
from pathlib import Path
from jinja2 import Environment, FileSystemLoader
from typing import List, Set, Dict, Tuple, Optional

import pprint # debug
pp = pprint.PrettyPrinter(indent=2)

def format_name(name: str):
    nm = name.replace(" ", "").replace("_", "").replace("-", "_").replace("/", "_")
    nm = nm.replace("&", "_")
    return nm.lower()

def format_address(item: Dict):
    # Last [2:] at addr expression remove "/CZsynth" at the start of address.
    addr = item["address"].split("/")[2:]
    address = "".join([format_name(st).capitalize() for st in addr])
    return address[0].lower() + address[1:]

def walk_ui(elem: Dict, items: List):
    if "address" in elem:
        items.append(elem)

    if "items" in elem:
        for item in elem["items"]:
            walk_ui(item, items)

def get_item_by_label(items, label):
    for it in ui_items:
        if "label" in it and label == it["label"]:
            return it
    return None

def get_menu(item):
    if "meta" not in item:
        return None

    style = None
    for meta in item["meta"]:
        if "style" in meta:
            style = meta["style"]
            break
    if style is None:
        return None

    if "menu" not in style:
        return None
    return json.loads(style[4:].replace("'", '"').replace(";", ","))

def get_nrmacro(ui_items):
    # TODO: Implement this.
    return 8

def arrange_main_lr_offset(dest, label, parts, item):
    if "main" in parts:
        dest[label]["main"] = format_address(item)
    elif "L-R_offset" in parts:
        dest[label]["L-R_offset"] = format_address(item)
    else:
        print("Error: arrange_main_lr_offset() failed.")
        print(item)
        exit()

def arrange_items(items: List, idents: List):
    arranged = {}
    for idt in idents:
        arranged[idt] = {}

    for itm in items:
        parts = Path(itm["address"]).parts
        for idt in idents:
            if idt not in parts:
                continue
            arrange_main_lr_offset(arranged, idt, parts, itm)
    return arranged

def get_osc_type(items: List):
    types = []
    for itm in items:
        if itm["label"] == "type":
            types.append(itm)

    osc_types = {}
    for tp in types:
        key = Path(tp["address"]).parts[-2]
        osc_types[key] = {
            "address": format_address(tp),
            "menu": get_menu(tp),
        }

    return osc_types

def get_osc_items(ui_items, nrMacro):
    labels = ["filter", "A", "B", "C", "D"]

    idents_filt = ["SVF", "ms20", "oberheim", "normFreq", "Q"]
    idents_osc = ["index", "octave", "phase", "PM_A", "PM_B", "PM_C", "PM_D"]

    osc_items = [get_item_by_label(ui_items, lbl) for lbl in labels]
    for it in osc_items:
        if it is None:
            print("Error: get_osc_items() failed.")
            exit()

    items = []
    for elem in osc_items:
        walk_ui(elem, items)

    osc_type = get_osc_type(items)

    osc_items = {}
    for idx in range(nrMacro):
        macro_items = {}
        for lbl in labels:
            macro_items[lbl] = []

        macro = f"macro_{idx + 1}" # Assuming macro index isn't padded like "01", " 1".
        for itm in items:
            parts = Path(itm["address"]).parts
            if macro in parts:
                macro_items[parts[2]].append(itm)
        macro_items["filter"] = arrange_items(macro_items["filter"], idents_filt)
        macro_items["A"] = arrange_items(macro_items["A"], idents_osc)
        macro_items["B"] = arrange_items(macro_items["B"], idents_osc)
        macro_items["C"] = arrange_items(macro_items["C"], idents_osc)
        macro_items["D"] = arrange_items(macro_items["D"], idents_osc)
        osc_items[macro] = macro_items

    return osc_items, osc_type

def get_envelope_items(ui_items):
    items = get_item_by_label(ui_items, "envelopes")["items"]

    env_items = {}
    for itm in items:
        env_elem = {}
        for elem in itm["items"]:
            if elem["type"] == "hbargraph": # TODO: Implement bargraph.
                continue
            env_elem[format_name(elem["label"])] = format_address(elem)
        env_items[format_name(itm["label"])] = env_elem
    return env_items

def get_lfo_items(ui_items):
    items = get_item_by_label(ui_items, "LFOs")["items"]

    lfo_items = {}
    for itm in items:
        lfo_elem = {}
        for elem in itm["items"]:
            if elem["type"] == "hbargraph": # TODO: Implement bargraph.
                continue
            lfo_elem[format_name(elem["label"])] = format_address(elem)
        lfo_items[format_name(itm["label"])] = lfo_elem
    return lfo_items

def arrange_env_lfo_items(mod_group, env_lfo_group):
    for item in env_lfo_group["items"]:
        label = "".join(Path(item["address"]).parts[-2:])
        mod_group[label] = format_address(item)

def get_modulation_items(ui_items):
    group_labels = ["env", "lfo"]

    groups = get_item_by_label(ui_items, "modulation")["items"]

    mod_axes = {}
    mod_items = {}
    for grp in groups:
        grp_label = grp["label"]
        grp_items = {}
        for item in grp["items"]:
            if item["label"] == "macro":
                mod_axes[grp_label] = format_address(item)
            elif item["label"] in group_labels:
                arrange_env_lfo_items(grp_items, item)
            elif item["type"] == "hbargraph":
                continue # TODO: Implement bargraph.
            else:
                grp_items[item["label"]] = format_address(item)
        mod_items[grp_label] = grp_items
    return mod_axes, mod_items

def get_global_items(ui_items, nrMacro):

    items = get_item_by_label(ui_items, "global")["items"]

    idents_crossfade = ["ab-cd", "ac-bd"]
    cf_items = []
    for itm in items:
        if itm["label"] == "stereo":
            walk_ui(items.pop(items.index(itm)), cf_items)
            break
    crossfade_items = {}
    for idx in range(nrMacro):
        macro_items = {}
        for lbl in idents_crossfade:
            macro_items[lbl] = {}

        macro = f"macro_{idx + 1}" # Assuming macro index isn't padded like "01", " 1".
        for itm in cf_items:
            parts = Path(itm["address"]).parts
            if macro in parts:
                arrange_main_lr_offset(macro_items, itm["label"], parts, itm)
        crossfade_items[macro] = macro_items

    # crossfade_items = arrange_items(crossfade_items, crossfade_idents)

    temp_items = []
    for itm in items:
        pp.pprint(itm)
        walk_ui(itm, temp_items)

    global_items = {}
    global_menus = {}
    global_checkboxes = {}
    for itm in temp_items:
        if itm["type"] == "checkbox":
            global_checkboxes[format_name(itm["label"])] = format_address(itm)
            continue
        menu = get_menu(itm)
        if menu is None:
            global_items[format_name(itm["label"])] = format_address(itm)
        else:
            global_menus[format_name(itm["label"])] = {
                "address": format_address(itm),
                "menu": menu,
            }

    return global_items, global_menus, global_checkboxes, crossfade_items

with open("DigiFaustMidi.dsp.json", "r", encoding="utf-8") as fi:
    data = json.load(fi)
# items = []
# for elem in data["ui"]:
#     walk_ui(elem, items)

ui_items = data["ui"][0]["items"]
nrMacro = get_nrmacro(ui_items)

osc_items, osc_type = get_osc_items(ui_items, nrMacro)
envelope_items = get_envelope_items(ui_items)
lfo_items = get_lfo_items(ui_items)
modulation_axes, modulation_items = get_modulation_items(ui_items)
global_items, global_menus, global_checkboxes, crossfade_items = get_global_items(
    ui_items, nrMacro)

# debug
formatted = {
    "nrMacro": nrMacro,
    "osc_items": osc_items,
    "osc_type": osc_type,
    "crossfade_items": crossfade_items,
    "global_items": global_items,
    "global_menus": global_menus,
    "global_checkboxes": global_checkboxes,
    "envelope_items": envelope_items,
    "lfo_items": lfo_items,
    "modulation_items": modulation_items,
    "modulation_axes": modulation_axes,
}
with open("test.json", "w", encoding="utf-8") as fi:
    json.dump(formatted, fi, indent=2)

jinja_env = Environment(loader=FileSystemLoader("."))
template = jinja_env.get_template("ui.cpp.template")
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
with open("ui.cpp", "w", encoding="utf-8") as fi:
    fi.write(text)
