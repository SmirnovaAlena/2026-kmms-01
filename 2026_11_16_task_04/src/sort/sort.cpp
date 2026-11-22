#include "sort.hpp"

void biv::bubble_sort_classic(int* arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void biv::bubble_sort_no_swaped_opt(int* arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void biv::bubble_sort_last_swap_opt(int* arr, const int size) {
    int right = size - 1;
    while (right > 0) {
        int last_swap = 0;
        for (int i = 0; i < right; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                last_swap = i;
            }
        }
        right = last_swap;
    }
}

void biv::shaker_sort(int* arr, const int size) {
    int left = 0;
    int right = size - 1;
    while (left < right) {
        for (int i = left; i < right; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        right--;

        for (int i = right; i > left; i--) {
            if (arr[i - 1] > arr[i]) {
                int temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
            }
        }
        left++;
    }
}

void biv::shaker_sort_last_swap_opt(int* arr, const int size) {
    int left = 0;
    int right = size - 1;
    while (left < right) {
        int last_swap = left;
        for (int i = left; i < right; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                last_swap = i;
            }
        }
        right = last_swap;
        if (left >= right) {
            break;
        }

        last_swap = right;
        for (int i = right; i > left; i--) {
            if (arr[i - 1] > arr[i]) {
                int temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
                last_swap = i;
            }
        }
        left = last_swap;
    }
}

void biv::odd_even_sort(int* arr, const int size) {
    bool sorted = false;
    while (!sorted) {
        sorted = true;

        for (int i = 1; i < size - 1; i += 2) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                sorted = false;
            }
        }

        for (int i = 0; i < size - 1; i += 2) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                sorted = false;
            }
        }
    }
}

void biv::comb_sort(int* arr, const int size) {
    int gap = size;
    bool sorted = false;
    while (!sorted) {
        gap = gap / 1.3;
        if (gap < 1) {
            gap = 1;
        }
        if (gap == 1) {
            sorted = true;
        }

        for (int i = 0; i + gap < size; i++) {
            if (arr[i] > arr[i + gap]) {
                int temp = arr[i];
                arr[i] = arr[i + gap];
                arr[i + gap] = temp;
                sorted = false;
            }
        }
    }
}

void biv::selection_sort(int* arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}

void biv::insertion_sort_classic(int* arr, const int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void biv::insertion_sort_binary(int* arr, const int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int left = 0;
        int right = i;
        while (left < right) {
            int middle = (left + right) / 2;
            if (arr[middle] <= key) {
                left = middle + 1;
            } else {
                right = middle;
            }
        }

        for (int j = i; j > left; j--) {
            arr[j] = arr[j - 1];
        }
        arr[left] = key;
    }
}

void biv::shell_sort(int* arr, const int size) {
    for (int gap = size / 2; gap > 0; gap = gap / 2) {
        for (int i = gap; i < size; i++) {
            int key = arr[i];
            int j = i;
            while (j >= gap && arr[j - gap] > key) {
                arr[j] = arr[j - gap];
                j -= gap;
            }
            arr[j] = key;
        }
    }
}
