import json
from pathlib import Path
from jinja2 import Environment, FileSystemLoader
from typing import List, Set, Dict, Tuple, Optional

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

def get_item_from_list(items, label):
    for it in ui_items:
        if "label" in it and label == it["label"]:
            return it
    return None

def get_nrmacro(ui_items):
    mod = get_item_from_list(ui_items, "modulation")
    if mod is None:
        print("Error: modulation group does not found.")
        exit()
    return len(mod["items"])

def arrange_items(items: List, idents: List):
    arranged = {}
    for idt in idents:
        arranged[idt] = {}

    for itm in items:
        parts = Path(itm["address"]).parts
        for idt in idents:
            if idt not in parts:
                continue

            if "main" in parts:
                arranged[idt]["main"] = format_address(itm)
            elif "L-R_offset" in parts:
                arranged[idt]["L-R_offset"] = format_address(itm)
            else:
                print("Error: arrange_filter() failed.")
                print(itm)
                exit()

    return arranged

def get_osc_type(items: List):
    types = []
    for itm in items:
        if itm["label"] == "type":
            types.append(itm)

    osc_types = {}
    for tp in types:
        key = Path(tp["address"]).parts[-2]
        osc_types[key] = tp

    return osc_types

def get_osc_items(ui_items, nrMacro):
    labels = ["filter", "A", "B", "C", "D"]

    idents_filt = ["moog", "ms20", "oberheim", "normFreq", "Q"]
    idents_osc = ["index", "octave", "phase", "PM_A", "PM_B", "PM_C", "PM_D"]

    osc_items = [get_item_from_list(ui_items, lbl) for lbl in labels]
    for it in osc_items:
        if it is None:
            print("Error: get_osc_items() failed.")
            exit()

    items = []
    for elem in osc_items:
        walk_ui(elem, items)

    osc_type = get_osc_type(items)

    osc_items = {}
    for idx in range(nrMacro + 1):
        macro_items = {}
        for lbl in labels:
            macro_items[lbl] = []

        macro = f"macro_{idx}" # Assuming macro index isn't padded like "01", " 1".
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

    # debug
    with open("test.json", "w", encoding="utf-8") as fi:
        json.dump(osc_items, fi, indent=2)

    return osc_items, osc_type

with open("DigiFaustMidi.dsp.json", "r", encoding="utf-8") as fi:
    data = json.load(fi)
# items = []
# for elem in data["ui"]:
#     walk_ui(elem, items)

ui_items = data["ui"][0]["items"]
nrMacro = get_nrmacro(ui_items)

osc_items, osc_type = get_osc_items(ui_items, nrMacro)
fallback_items = osc_items.pop("macro_0")

jinja_env = Environment(loader=FileSystemLoader("."))
template = jinja_env.get_template("ui.cpp.template")
text = template.render(
    nrMacro=nrMacro,
    osc_type=osc_type,
    osc_items=osc_items,
    fallback_items=fallback_items,
)
with open("ui.cpp", "w", encoding="utf-8") as fi:
    fi.write(text)
