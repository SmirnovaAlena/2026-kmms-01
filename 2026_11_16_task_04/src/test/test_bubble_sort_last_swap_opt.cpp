#include <gtest/gtest.h>

#include "sort.hpp"

TEST(BubbleSortLastSwapOpt, sorted_array) {
    int actual[] = {2, 4, 6, 8};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {2, 4, 6, 8};

    biv::bubble_sort_last_swap_opt(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

TEST(BubbleSortLastSwapOpt, reverse_array) {
    int actual[] = {8, 6, 4, 2};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {2, 4, 6, 8};

    biv::bubble_sort_last_swap_opt(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

TEST(BubbleSortLastSwapOpt, with_duplicates) {
    int actual[] = {1, 3, 3, 2, 1, 4};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 1, 2, 3, 3, 4};

    biv::bubble_sort_last_swap_opt(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
