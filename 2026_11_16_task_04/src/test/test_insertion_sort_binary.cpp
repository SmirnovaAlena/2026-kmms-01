#include <gtest/gtest.h>

#include "sort.hpp"

TEST(InsertionSortBinary, sorted_array) {
    int actual[] = {1, 4, 7, 10};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 4, 7, 10};

    biv::insertion_sort_binary(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

TEST(InsertionSortBinary, reverse_array) {
    int actual[] = {10, 7, 4, 1};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 4, 7, 10};

    biv::insertion_sort_binary(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

TEST(InsertionSortBinary, with_duplicates) {
    int actual[] = {5, 5, 2, 2, 9, 9};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {2, 2, 5, 5, 9, 9};

    biv::insertion_sort_binary(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
