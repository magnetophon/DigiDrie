import json
from pathlib import Path
from jinja2 import Environment, FileSystemLoader
from typing import List, Set, Dict, Tuple, Optional

# Debug
import pprint
pp = pprint.PrettyPrinter(indent=2)

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
                arranged[idt]["main"] = itm["address"]
            elif "L-R_offset" in parts:
                arranged[idt]["L-R_offset"] = itm["address"]
            else:
                print("Error: arrange_filter() failed.")
                print(itm)
                exit()

    return arranged

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
    exit()

    return osc_items

with open("DigiFaustMidi.dsp.json", "r", encoding="utf-8") as fi:
    data = json.load(fi)
# items = []
# for elem in data["ui"]:
#     walk_ui(elem, items)

ui_items = data["ui"][0]["items"]
nrMacro = get_nrmacro(ui_items)

osc_page_items = get_osc_items(ui_items, nrMacro)
# pp.pprint(osc_page_items)

jinja_env = Environment(loader=FileSystemLoader("."))

template = jinja_env.get_template("ui.cpp.template")
text = template.render(nrMacro=nrMacro,)
with open("ui.cpp", "w", encoding="utf-8") as fi:
    fi.write(text)
