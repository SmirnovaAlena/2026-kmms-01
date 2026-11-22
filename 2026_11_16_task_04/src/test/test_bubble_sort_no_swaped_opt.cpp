#include <gtest/gtest.h>

#include "sort.hpp"

TEST(BubbleSortNoSwapedOpt, sorted_array) {
    int actual[] = {1, 2, 3, 4, 5, 6, 7};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 2, 3, 4, 5, 6, 7};

    biv::bubble_sort_no_swaped_opt(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

TEST(BubbleSortNoSwapedOpt, reverse_array) {
    int actual[] = {7, 6, 5, 4, 3, 2, 1};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 2, 3, 4, 5, 6, 7};

    biv::bubble_sort_no_swaped_opt(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

TEST(BubbleSortNoSwapedOpt, with_duplicates) {
    int actual[] = {5, 2, 5, 1, 2, 5};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 2, 2, 5, 5, 5};

    biv::bubble_sort_no_swaped_opt(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
