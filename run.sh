#!/bin/sh
cmake -S . -B build
cmake --build build
printf "\n\n-------------------------------\n\n\n"
build/src/SDLuna