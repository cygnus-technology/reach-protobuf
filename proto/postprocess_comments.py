#!/usr/bin/env python
# Updates a reach..pb.h to make Doxygen comments.

# Specify the file you want to perform replacements on
filename  = "reach.pb.h"

print("postprocess_comments.py performs a search and replace to create doxygen format comments.")
print("  Source H file is ", filename);

import fileinput
import sys
import re

# Function to replace text in a file
def replace_text(filename, pattern, replacement):
    with fileinput.FileInput(filename, inplace=True, backup='.bak') as file:
        for line in file:
            sys.stdout.write(re.sub(pattern, replacement, line))

# Pattern to search for
pattern = r"/\* /<"
# Replacement text
replacement = "/**<"# Perform replacement
replace_text(filename, pattern, replacement)

# Pattern to search for
pattern = r"/\* /"
# Replacement text
replacement = '/**'
# Perform replacement
replace_text(filename, pattern, replacement)

print("Replacement complete.")
