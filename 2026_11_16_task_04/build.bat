@echo off

set BUILD_FOLDER=build_ninja
set SOURCE_FOLDER=src

if not exist %BUILD_FOLDER% mkdir %BUILD_FOLDER%

cd %BUILD_FOLDER%

cmake -G Ninja -DCMAKE_BUILD_TYPE=Release ..\%SOURCE_FOLDER%
cmake --build .

cd ..
