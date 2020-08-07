import json
from typing import List, Set, Dict, Tuple, Optional

def format_name(name: str):
    nm = name.replace(" ", "").replace("_", "").replace("-", "_").replace("/", "_")
    nm = nm.replace("&", "_")
    return nm.capitalize()

def get_label(item: Dict):
    address = "".join([format_name(st) for st in item["address"].split("/")])
    return address + format_name(item["label"])

def walk_ui(elem: Dict, items: List[str]):
    if "address" in elem:
        items.append(elem)

    if "items" in elem:
        for item in elem["items"]:
            walk_ui(item, items)

def write_labels(items: List[Dict]):
    labels = []
    for item in items:
        if "address" not in item:
            print("Error: Following item do not contain key \"address\".")
            print(item)
            continue
        labels.append(get_label(item))

    with open("labels", "w", encoding="utf-8") as fi:
        fi.write("\n".join(labels))

def get_group(items: List[Dict]):
    faust_label = set()
    cpp_label = set()

    for item in items:
        label = format_name(item["label"])
        faust_label.add(item["label"])
        cpp_label.add(format_name(item["label"]))

    group = {"faust_label": sorted(faust_label), "cpp_label": sorted(cpp_label)}

    with open("label_group.json", "w", encoding="utf-8") as fi:
        json.dump(group, fi, indent=2)

    return group

def set_scale(group: List[str]):
    info = {}
    for grp in group:
        info[grp] = {"value_type": "LinearValue", "hints": []}
    with open("parameter_group_info_generated.json", "w", encoding="utf-8") as fi:
        json.dump(info, fi, indent=2)

with open("DigiFaustMidi.dsp.json", "r", encoding="utf-8") as fi:
    data = json.load(fi)

items = []
for elem in data["ui"]:
    walk_ui(elem, items)

# write_labels(items)
group = get_group(items)
set_scale(group["cpp_label"])
