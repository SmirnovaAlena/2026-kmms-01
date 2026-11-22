#include <gtest/gtest.h>

#include "sort.hpp"

TEST(ShakerSortLastSwapOpt, sorted_array) {
    int actual[] = {1, 2, 3, 4, 5, 6};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 2, 3, 4, 5, 6};

    biv::shaker_sort_last_swap_opt(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

TEST(ShakerSortLastSwapOpt, reverse_array) {
    int actual[] = {6, 5, 4, 3, 2, 1};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 2, 3, 4, 5, 6};

    biv::shaker_sort_last_swap_opt(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

TEST(ShakerSortLastSwapOpt, with_duplicates) {
    int actual[] = {8, 8, 3, 1, 3, 8};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 3, 3, 8, 8, 8};

    biv::shaker_sort_last_swap_opt(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
