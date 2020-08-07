import json
from jinja2 import Environment, FileSystemLoader
from typing import List, Set, Dict, Tuple, Optional

def format_name(name: str):
    nm = name.replace(" ", "").replace("_", "").replace("-", "_").replace("/", "_")
    nm = nm.replace("&", "_")
    return nm.capitalize()

def format_address(item: Dict):
    return "".join([format_name(st) for st in item["address"].split("/")])

def walk_ui(elem: Dict, items: List[str]):
    if "address" in elem:
        items.append(elem)

    if "items" in elem:
        for item in elem["items"]:
            walk_ui(item, items)

def get_group(items: List[Dict]):
    faust_label = set()
    cpp_label = set()

    for item in items:
        label = format_name(item["label"])
        faust_label.add(item["label"])
        cpp_label.add(format_name(item["label"]))

    return {"faust_label": sorted(faust_label), "cpp_label": sorted(cpp_label)}

def jinja_temp(items: List[Dict]):
    with open("parameter_group_info.json", "r", encoding="utf-8") as fi:
        group_info = json.load(fi)

    no_init_primitives = {"button", "checkbox", "hbargraph", "vbargraph"}

    labels = []
    parameters = []
    for item in items:
        if "address" not in item:
            print("Error: Following item do not contain key \"address\".")
            print(item)
            continue

        if item["type"] in no_init_primitives:
            item["init"] = 0

        cpp_label = format_name(item["label"])
        item["scale"] = cpp_label.lower()

        if cpp_label in group_info:
            item["value_type"] = group_info[cpp_label]["value_type"]
            item["hints"] = group_info[cpp_label]["hints"]
        else:
            item["value_type"] = "LinearValue"
            item["hints"] = []

        label = format_address(item) + cpp_label
        item["label"] = label

        labels.append(label)
        parameters.append(item)

    env = Environment(loader=FileSystemLoader("."))
    template = env.get_template("parameter.hpp.template")

    text = template.render(
        labels=labels,
        parameters=parameters,
    )

    with open("parameter.hpp", "w", encoding="utf-8") as fi:
        fi.write(text)

if __name__ == "__main__":
    with open("DigiFaustMidi.dsp.json", "r", encoding="utf-8") as fi:
        data = json.load(fi)

    items = []
    for elem in data["ui"]:
        walk_ui(elem, items)

    # generate(items)

    jinja_temp(items)
