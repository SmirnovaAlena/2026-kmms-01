#include <gtest/gtest.h>

#include "sort.hpp"

TEST(BubbleSortClassic, sorted_array) {
    int actual[] = {1, 2, 3, 4, 5};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 2, 3, 4, 5};

    biv::bubble_sort_classic(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

TEST(BubbleSortClassic, reverse_array) {
    int actual[] = {5, 4, 3, 2, 1};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 2, 3, 4, 5};

    biv::bubble_sort_classic(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

TEST(BubbleSortClassic, with_duplicates) {
    int actual[] = {3, 1, 2, 3, 1, 2};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 1, 2, 2, 3, 3};

    biv::bubble_sort_classic(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
