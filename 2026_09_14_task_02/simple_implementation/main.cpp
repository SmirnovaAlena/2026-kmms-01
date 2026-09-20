#include <iostream>
#include <utility>
#include <vector>

void my_sort(int *arr, const int size);

// Интерфейс пользователя должен быть на русском языке
int main() {
    // Пользователь вводит размер массива и элементы массива
    std::cout << "Введите количество элементов массива: ";
    int size = 0;
    if (!(std::cin >> size) || size <= 0) {
        std::cout << "Ошибка: количество элементов должно быть положительным целым числом."
                  << std::endl;
        return 1;
    }

    std::vector<int> arr(size);
    std::cout << "Введите " << size << " целых чисел через пробел: ";
    for (int i = 0; i < size; i++) {
        if (!(std::cin >> arr[i])) {
            std::cout << "Ошибка: элемент массива должен быть целым числом." << std::endl;
            return 1;
        }
    }

    // Вызывается void my_sort(int* arr, int size)
    std::cout << "Массив до сортировки:";
    for (int i = 0; i < size; i++) {
        std::cout << ' ' << arr[i];
    }
    std::cout << std::endl;

    my_sort(arr.data(), size);

    // Выводится первоначальный массив и отсортированный
    std::cout << "Массив после сортировки:";
    for (int i = 0; i < size; i++) {
        std::cout << ' ' << arr[i];
    }
    std::cout << std::endl;

    return 0;
}

// Сортировка пузырьком по возрастанию
void my_sort(int *arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        bool is_sorted = true;
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                is_sorted = false;
            }
        }
        if (is_sorted) {
            break;
        }
    }
}
