#include <gtest/gtest.h>

#include "sort.hpp"

TEST(InsertionSortClassic, sorted_array) {
    int actual[] = {-5, -2, 0, 3, 8};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {-5, -2, 0, 3, 8};

    biv::insertion_sort_classic(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

TEST(InsertionSortClassic, reverse_array) {
    int actual[] = {8, 3, 0, -2, -5};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {-5, -2, 0, 3, 8};

    biv::insertion_sort_classic(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

TEST(InsertionSortClassic, with_duplicates) {
    int actual[] = {3, 3, 1, 2, 1, 3};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 1, 2, 3, 3, 3};

    biv::insertion_sort_classic(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
