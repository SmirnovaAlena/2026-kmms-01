#include <gtest/gtest.h>

#include "sort.hpp"

TEST(SelectionSort, sorted_array) {
    int actual[] = {1, 2, 3, 4};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 2, 3, 4};

    biv::selection_sort(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

TEST(SelectionSort, reverse_array) {
    int actual[] = {4, 3, 2, 1};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 2, 3, 4};

    biv::selection_sort(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

TEST(SelectionSort, with_duplicates) {
    int actual[] = {6, 2, 6, 2, 6};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {2, 2, 6, 6, 6};

    biv::selection_sort(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
