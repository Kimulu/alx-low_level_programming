#!/bin/bash

# Compile all .c files into object files
gcc -Wall -fPIC -c *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up: Remove object files
rm *.o
