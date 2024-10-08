"""
Usage: python te2c.py dest src_folder
Usage for TE: py te2c.py source/script/builtin scripts
Creator: https://github.com/maddiethecafebabe
"""

import os
import sys
import string
from typing import List, Tuple, Dict

IDENTCHARS = string.ascii_letters + string.digits

SOURCE_HEADER = """ /* this file has been autogenerated with te2c.py */
#include "{}"\n
"""

HEADER_DEF = """ /* this file has been autogenerated with te2c.py */
#ifndef TE_EMBEDDED_SCRIPTS_H
#define TE_EMBEDDED_SCRIPTS_H

typedef struct {{
    const char const * script;
    const char const * name;
}} embedded_script_t;

extern const embedded_script_t embedded_scripts_g[];

#define EMBEDDED_SCRIPTS_LEN {}

#endif /* TE_EMBEDDED_SCRIPTS_H */
"""

def gather_scripts(path: str, suffix: str=".te") -> List[Tuple[str, str]]:
    files = []
    for dirname, _, filenames in os.walk(path):
        files += [(f, os.path.join(dirname, f)) for f in filenames if f.endswith(suffix)]
    return files

def process_script(path: str) -> str:
    with open(path, "r") as fp:
        raw = fp.readlines()
    return str().join(line.__repr__()[1:-1].replace("\"", "\\\"").replace("\\t", "") for line in raw)

def process_name(name: str) -> str:
    return "script_" + str().join(c for c in name.split(".")[0] if c in IDENTCHARS) + "_g"

def map_scripts_from(path: str, suffix: str=".te") -> Dict[str, Dict[str, str]]:
    return {process_name(name): {"script": process_script(path), "og-name": name} for (name, path) in gather_scripts(path, suffix=suffix)}

def te2c(dest: str, path: str, suffix: str=".te"):
    script_map = map_scripts_from(path, suffix=suffix)
    with open(dest + ".c", "w") as fp:
        fp.write(SOURCE_HEADER.format(os.path.basename(dest) + ".h"))
        fp.write(
            "const embedded_script_t embedded_scripts_g[] = {{\n{}}};\n".format(
                str().join(
                    f"\t{{ .name = \"{vals['og-name']}\", .script = \"{vals['script']}\"}}, \n" for name, vals in script_map.items()
                )
            )
        )

    with open(dest + ".h", "w") as fp:
        fp.write(HEADER_DEF.format(len(script_map)))

if __name__ == "__main__":
    te2c(dest=sys.argv[1], path=sys.argv[2])
    print("converting .te files done!")
