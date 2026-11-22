#include <gtest/gtest.h>

#include "sort.hpp"

TEST(ShellSort, sorted_array) {
    int actual[] = {1, 2, 3, 4, 5, 6, 7, 8};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 2, 3, 4, 5, 6, 7, 8};

    biv::shell_sort(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

TEST(ShellSort, reverse_array) {
    int actual[] = {8, 7, 6, 5, 4, 3, 2, 1};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 2, 3, 4, 5, 6, 7, 8};

    biv::shell_sort(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

TEST(ShellSort, with_duplicates) {
    int actual[] = {4, 1, 4, 1, 4, 1};
    const int size = sizeof(actual) / sizeof(actual[0]);
    int expected[] = {1, 1, 1, 4, 4, 4};

    biv::shell_sort(actual, size);

    for (int i = 0; i < size; i++) {
        ASSERT_EQ(expected[i], actual[i])
            << "Массив отсортирован неправильно в элементе " << i;
    }
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
