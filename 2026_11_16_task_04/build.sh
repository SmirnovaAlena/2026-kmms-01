#!/bin/bash

mkdir -p build_ninja
cd build_ninja
cmake -G Ninja -DCMAKE_BUILD_TYPE=Release ../src
cmake --build .
cd ..
