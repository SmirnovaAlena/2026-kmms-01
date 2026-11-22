set(SOURCES 
	test_bubble_sort_classic.cpp
)

add_executable(test_bubble_sort_classic ${SOURCES})

target_link_libraries(test_bubble_sort_classic 
	gtest
	${SORT_LIB}
)

add_test(test_bubble_sort_classic test_bubble_sort_classic)

set(SOURCES 
	test_bubble_sort_no_swaped_opt.cpp
)

add_executable(test_bubble_sort_no_swaped_opt ${SOURCES})

target_link_libraries(test_bubble_sort_no_swaped_opt 
	gtest
	${SORT_LIB}
)

add_test(test_bubble_sort_no_swaped_opt test_bubble_sort_no_swaped_opt)

set(SOURCES 
	test_bubble_sort_last_swap_opt.cpp
)

add_executable(test_bubble_sort_last_swap_opt ${SOURCES})

target_link_libraries(test_bubble_sort_last_swap_opt 
	gtest
	${SORT_LIB}
)

add_test(test_bubble_sort_last_swap_opt test_bubble_sort_last_swap_opt)

set(SOURCES 
	test_shaker_sort.cpp
)

add_executable(test_shaker_sort ${SOURCES})

target_link_libraries(test_shaker_sort 
	gtest
	${SORT_LIB}
)

add_test(test_shaker_sort test_shaker_sort)

set(SOURCES 
	test_shaker_sort_last_swap_opt.cpp
)

add_executable(test_shaker_sort_last_swap_opt ${SOURCES})

target_link_libraries(test_shaker_sort_last_swap_opt 
	gtest
	${SORT_LIB}
)

add_test(test_shaker_sort_last_swap_opt test_shaker_sort_last_swap_opt)

set(SOURCES 
	test_odd_even_sort.cpp
)

add_executable(test_odd_even_sort ${SOURCES})

target_link_libraries(test_odd_even_sort 
	gtest
	${SORT_LIB}
)

add_test(test_odd_even_sort test_odd_even_sort)

set(SOURCES 
	test_comb_sort.cpp
)

add_executable(test_comb_sort ${SOURCES})

target_link_libraries(test_comb_sort 
	gtest
	${SORT_LIB}
)

add_test(test_comb_sort test_comb_sort)

set(SOURCES 
	test_selection_sort.cpp
)

add_executable(test_selection_sort ${SOURCES})

target_link_libraries(test_selection_sort 
	gtest
	${SORT_LIB}
)

add_test(test_selection_sort test_selection_sort)

set(SOURCES 
	test_insertion_sort_classic.cpp
)

add_executable(test_insertion_sort_classic ${SOURCES})

target_link_libraries(test_insertion_sort_classic 
	gtest
	${SORT_LIB}
)

add_test(test_insertion_sort_classic test_insertion_sort_classic)

set(SOURCES 
	test_insertion_sort_binary.cpp
)

add_executable(test_insertion_sort_binary ${SOURCES})

target_link_libraries(test_insertion_sort_binary 
	gtest
	${SORT_LIB}
)

add_test(test_insertion_sort_binary test_insertion_sort_binary)

set(SOURCES 
	test_shell_sort.cpp
)

add_executable(test_shell_sort ${SOURCES})

target_link_libraries(test_shell_sort 
	gtest
	${SORT_LIB}
)

add_test(test_shell_sort test_shell_sort)
