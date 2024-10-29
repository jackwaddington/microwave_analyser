#!/bin/bash

# Clear
clear

# Recompile
make re
make clean

# Run
./microwave_analyser 150 -v
