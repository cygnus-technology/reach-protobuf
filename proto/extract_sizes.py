#
# A python script to extract #defines from the .options file.

input_file_path = "reach.options"
output_file_path = "../ansic/build/reach_proto_sizes.h"

# Check if the input and output file paths are the same
if input_file_path == output_file_path:
    print("Error: Input and output file paths are the same. Please choose different paths.")
else:
    # Open the input and output files
    with open(input_file_path, "r") as input_file, open(output_file_path, "w") as output_file:
        # Flag to check if any lines have been written to the output file
        lines_written = False

        output_file.write("// reach_proto_sizes.h\n")
        output_file.write("// Structure sizes defined in reach.options\n")
        output_file.write("// (c) 2023 i3pd.com, a Helios company.\n\n")

        # Iterate through each line in the input file
        for line in input_file:
            # Check if the line starts with "#define"
            if line.strip().startswith("#define"):
                # If it does, write it to the output file
                output_file.write(line)
                lines_written = True

    # Check if any lines were written to the output file
    if lines_written:
        print(f"Lines beginning with '#define' have been written to '{output_file_path}'.")
    else:
        print(f"No lines beginning with '#define' found in '{input_file_path}', the output file is empty.")

