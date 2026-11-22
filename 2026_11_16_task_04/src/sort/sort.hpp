#pragma once

namespace biv {

void bubble_sort_classic(int* arr, const int size);
void bubble_sort_no_swaped_opt(int* arr, const int size);
void bubble_sort_last_swap_opt(int* arr, const int size);
void shaker_sort(int* arr, const int size);
void shaker_sort_last_swap_opt(int* arr, const int size);
void odd_even_sort(int* arr, const int size);
void comb_sort(int* arr, const int size);
void selection_sort(int* arr, const int size);
void insertion_sort_classic(int* arr, const int size);
void insertion_sort_binary(int* arr, const int size);
void shell_sort(int* arr, const int size);

}
