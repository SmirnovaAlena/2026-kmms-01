cmake_minimum_required(VERSION 3.16)
project(sort_lib)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_SUPPRESS_REGENERATION true)

set(SORT_LIB sort_lib)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../lib/googletest
                 ${CMAKE_CURRENT_BINARY_DIR}/googletest)

enable_testing()

add_subdirectory(sort)
add_subdirectory(test)
add_subdirectory(benchmark)
