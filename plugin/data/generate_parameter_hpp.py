import json
from jinja2 import Environment, FileSystemLoader
from typing import List, Set, Dict, Tuple, Optional

def format_name(name: str):
    nm = name.replace(" ", "").replace("_", "").replace("-", "_").replace("/", "_")
    nm = nm.replace("&", "_")
    return nm.capitalize()

def format_address(item: Dict):
    return "".join([format_name(st) for st in item["address"].split("/")])

def format_scale(name: str):
    return name.lower()

def walk_ui(elem: Dict, items: List[str]):
    if "address" in elem:
        items.append(elem)

    if "items" in elem:
        for item in elem["items"]:
            walk_ui(item, items)

if __name__ == "__main__":
    with open("DigiFaustMidi.dsp.json", "r", encoding="utf-8") as fi:
        param_data = json.load(fi)
    with open("parameter_group_info.json", "r", encoding="utf-8") as fi:
        group_info = json.load(fi)

    scales = []
    for key, value in group_info.items():
        value["label"] = format_scale(key)
        scales.append(value)

    items = []
    for elem in param_data["ui"]:
        walk_ui(elem, items)

    # Gather parameters from `*.dsp.json`.
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
        scale_name = format_scale(cpp_label)
        item["scale"] = scale_name

        if cpp_label in group_info:
            item["value_type"] = group_info[cpp_label]["type"] + "Value"
            item["hints"] = group_info[cpp_label]["hints"]
        else:
            item["value_type"] = "LinearValue"
            item["hints"] = []

        label = format_address(item) + cpp_label
        item["label"] = label

        labels.append(label)
        parameters.append(item)

    jinja_env = Environment(loader=FileSystemLoader("."))

    template = jinja_env.get_template("parameter.hpp.template")
    text = template.render(
        labels=labels,
        parameters=parameters,
        scales=scales,
    )
    with open("parameter.hpp", "w", encoding="utf-8") as fi:
        fi.write(text)

    template = jinja_env.get_template("parameter.cpp.template")
    text = template.render(scales=scales)
    with open("parameter.cpp", "w", encoding="utf-8") as fi:
        fi.write(text)
