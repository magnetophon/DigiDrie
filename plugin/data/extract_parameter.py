import json
from pathlib import Path
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

def get_group(items: List[Dict]):
    faust_label = set()
    cpp_label = set()

    for item in items:
        faust_label.add(item["label"])
        cpp_label.add(format_name(item["label"]))

    group = {"faust_label": sorted(faust_label), "cpp_label": sorted(cpp_label)}

    with open("label_group.json", "w", encoding="utf-8") as fi:
        json.dump(group, fi, indent=2)

    return group

def check_if_identical(info, item):
    if ("init" in item) and (info["init"] != item["init"]):
        print(
            f"Error: Found mismatch of init in {item['address']}.",
            info["init"],
            item,
            sep="\n",
        )
        exit()
    if ("min" in item) and (info["min"] != item["min"]):
        print(
            f"Error: Found mismatch of min in {item['address']}.",
            info["min"],
            item,
            sep="\n",
        )
        exit()
    if ("max" in item) and (info["max"] != item["max"]):
        print(
            f"Error: Found mismatch of max in {item['address']}.",
            info["max"],
            item,
            sep="\n",
        )
        exit()

def get_scale(item: Dict):
    """
    Reterns: (scale, hints)
    """
    hints = []

    prim_type = item["type"]
    if "bargraph" not in prim_type:
        hints.append("kParameterIsAutomable")

    if "meta" not in item:
        return ("Linear", hints)

    scale = [x for x in item["meta"] if "scale" in x]
    if len(scale) == 0:
        return ("Linear", hints)
    if len(scale) > 1:
        print(f"Warning: 2 scale metadatas {scale} in {item['address']}.")
    scale = scale[0]["scale"]

    if scale == "int":
        hints.append("kParameterIsInteger")
    elif scale == "log":
        hints.append("kParameterIsLogarithmic")

    return (scale, hints)

def get_label(item: Dict):
    label = item["label"]
    if not label.isdigit():
        return format_name(label)
    return format_name(Path(item["address"]).parts[-2])

def set_scale(items: List[Dict]):
    info_dict = {}
    for item in items:
        label = get_label(item)
        if label in info_dict:
            check_if_identical(info_dict[label], item)
            continue

        scale, hints = get_scale(item)

        info_dict[label] = {
            "type": scale.capitalize(),
            "hints": hints,
            "init": item["init"] if "init" in item else 0,
            "min": item["min"] if "min" in item else 0,
            "max": item["max"] if "max" in item else 1,
        }

    with open("parameter_group_info.json", "w", encoding="utf-8") as fi:
        json.dump(info_dict, fi, indent=2)

with open("DigiFaustMidi.dsp.json", "r", encoding="utf-8") as fi:
    data = json.load(fi)

items = []
for elem in data["ui"]:
    walk_ui(elem, items)

# write_labels(items)
group = get_group(items)
set_scale(items)
