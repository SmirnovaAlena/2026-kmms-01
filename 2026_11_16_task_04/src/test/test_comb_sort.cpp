#include <gtest/gtest.h>

#include "sort.hpp"

TEST(CombSort, sorted_array) {
    int actual[] = {1, 3, 5, 7, 9};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 3, 5, 7, 9};

    biv::comb_sort(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

TEST(CombSort, reverse_array) {
    int actual[] = {9, 7, 5, 3, 1};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 3, 5, 7, 9};

    biv::comb_sort(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

TEST(CombSort, with_duplicates) {
    int actual[] = {-1, 4, -1, 4, 0};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {-1, -1, 0, 4, 4};

    biv::comb_sort(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
