#include <gtest/gtest.h>

#include "sort.hpp"

TEST(OddEvenSort, sorted_array) {
    int actual[] = {0, 1, 2, 3, 4, 5, 6};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {0, 1, 2, 3, 4, 5, 6};

    biv::odd_even_sort(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

TEST(OddEvenSort, reverse_array) {
    int actual[] = {6, 5, 4, 3, 2, 1, 0};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {0, 1, 2, 3, 4, 5, 6};

    biv::odd_even_sort(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

TEST(OddEvenSort, with_duplicates) {
    int actual[] = {2, 7, 2, 7, 2, 7};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {2, 2, 2, 7, 7, 7};

    biv::odd_even_sort(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
