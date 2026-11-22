#include <chrono>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

#include "sort.hpp"

double measure(void (*sort)(int*, const int), const std::vector<int>& source) {
    std::vector<int> data = source;

    auto start = std::chrono::high_resolution_clock::now();
    sort(data.data(), (int)data.size());
    auto end = std::chrono::high_resolution_clock::now();

    for (int i = 1; i < (int)data.size(); i++) {
        if (data[i - 1] > data[i]) {
            std::cout << "Ошибка: массив не отсортирован" << std::endl;
            std::exit(1);
        }
    }

    std::chrono::duration<double, std::milli> time = end - start;
    return time.count();
}

int main() {
    const int sizes[] = {10000, 100000};
    std::vector<int> arrays[2];

    std::srand(42);
    for (int k = 0; k < 2; k++) {
        arrays[k].resize(sizes[k]);
        for (int i = 0; i < sizes[k]; i++) {
            arrays[k][i] = std::rand() % 2000001 - 1000000;
        }
    }

    std::ofstream report("benchmark_results.md");
    report << "# Результаты замеров сортировок" << std::endl;
    report << std::endl;
    report << "| Сортировка | 10 000, мс | 100 000, мс |" << std::endl;
    report << "|---|---:|---:|" << std::endl;

    std::string names[] = {
        "Пузырёк классический",
        "Пузырёк с ранним выходом",
        "Пузырёк с оптимизацией правой границы",
        "Шейкерная",
        "Шейкерная с оптимизацией границ",
        "Чёт-нечет",
        "Расчёска",
        "Выбором",
        "Вставками классическая",
        "Вставками с бинарным поиском",
        "Шелла",
    };

    void (*sorts[])(int*, const int) = {
        biv::bubble_sort_classic,
        biv::bubble_sort_no_swaped_opt,
        biv::bubble_sort_last_swap_opt,
        biv::shaker_sort,
        biv::shaker_sort_last_swap_opt,
        biv::odd_even_sort,
        biv::comb_sort,
        biv::selection_sort,
        biv::insertion_sort_classic,
        biv::insertion_sort_binary,
        biv::shell_sort,
    };

    for (int i = 0; i < 11; i++) {
        double time1 = measure(sorts[i], arrays[0]);
        double time2 = measure(sorts[i], arrays[1]);

        report << "| " << names[i] << " | "
               << std::fixed << std::setprecision(2) << time1 << " | " << time2 << " |" << std::endl;
        std::cout << names[i] << ": " << time1 << " мс, " << time2 << " мс" << std::endl;
    }

    report.close();
    return 0;
}
