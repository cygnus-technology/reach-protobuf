#!/usr/bin/env python
import argparse

parser = argparse.ArgumentParser(
                    description='Updates a reach.options file based on a prototype file and associated .h file')
parser.add_argument('-i', '--h-file-location', help="The .h file with size defines to use",
                    default="../../reach-c-stack/include/reach_ble_proto_sizes.h")
parser.add_argument('-p', '--prototype-location', help="The prototype file to use", default="reach.options.prototype")
parser.add_argument('-o', '--options-location', help="The path for the generated .options file", default="reach.options")

args = parser.parse_args()


# Specify the file you want to perform replacements on
input_h_file = args.h_file_location
input_file  = args.prototype_location
output_file =  args.options_location

print("preprocess_options.py creates the reach.options file")
print("by replacing size macros in a prototype.")
print("The input H file is also used by the C code.")
print("  Source H file is ", input_h_file);

# Define the search and replace pairs
replace_pairs={}

# Get the replacements out of the H file.
with open(input_h_file, 'r') as h_file:
    for line in h_file:
        # Check if the line contains a #define statement
        if line.startswith("#define"):
            parts = line.split()
            if len(parts) == 3:
                key = parts[1]
                value = parts[2]
                replace_pairs[key] = value

# Read the content of the file
with open(input_file, 'r') as file:
    file_content = file.read()

# Perform the replacements
for search, replace in replace_pairs.items():
    file_content = file_content.replace(search, replace)

# Write the modified content back to the file
with open(output_file, 'w') as file:
    file.write(file_content)

print("Replacement complete.")
