#include <iostream>
#include <utility>

void my_sort(int* arr, const int size);
void print_array(const char* mmm, const int* arr, int size);

int main() {
    std::cout << "Введите количество элементов массива: ";
    int size = 0;
    if (!(std::cin >> size) || size <= 0) {
        std::cout << "Ошибка: количество элементов должно быть положительным целым числом."
            << std::endl;
        return 1;
    }

    int* arr = new int[size];

    std::cout << "Введите " << size << " целых чисел через пробел: ";
    for (int i = 0; i < size; ++i) {
        if (!(std::cin >> arr[i])) {
            std::cout << "Ошибка: элемент массива должен быть целым числом." << std::endl;
            delete[] arr;
            return 1;
        }
    }

    print_array("Массив до сортировки:", arr, size);

    my_sort(arr, size);

    print_array("Массив после сортировки:", arr, size);

    delete[] arr; 
    return 0;
}

void print_array(const char* mmm, const int* arr, int size) {
    std::cout << mmm;
    for (int i = 0; i < size; ++i) {
        std::cout << ' ' << arr[i];
    }
    std::cout << std::endl;
}

void my_sort(int* arr, const int size) {
    for (int i = 0; i < size - 1; ++i) {
        bool flag1 = true;
        for (int j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                flag1 = false;
            }
        }
        if (flag1) {
            break;
        }
    }
}
