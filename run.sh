#!/bin/bash

# Compile the C file
gcc -o 01_BareMetalProgramming_HelloPointers 01_BareMetalProgramming_HelloPointers.c

# Check if compilation was successful
if [ $? -eq 0 ]; then
    # Run the compiled program
    ./01_BareMetalProgramming_HelloPointers
else
    echo "Compilation failed!"
    exit 1
fi
