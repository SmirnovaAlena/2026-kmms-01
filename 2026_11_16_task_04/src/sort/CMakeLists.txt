add_library(${SORT_LIB} SHARED sort.cpp)

target_include_directories(${SORT_LIB} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
