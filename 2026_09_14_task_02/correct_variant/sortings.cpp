#include "sortings.hpp"

#include <utility>

// Сортировка пузырьком по возрастанию
void biv::my_sort(int* const arr, const int size) {
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
