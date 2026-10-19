#include "menu_functions.hpp"
#include <cstdlib>
#include <iostream>
const ASmirnova::MenuItem* ASmirnova::show_menu(const MenuItem* current) {
    std::cout << "\n--- Меню ---" << std::endl;
    for (int i = 1; i < current->children_count; ++i) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    
    std::cout << "Выбор > ";
    int user_input;
    std::cin >> user_input;
    return current->children[user_input];
}
const ASmirnova::MenuItem* ASmirnova::exit(const MenuItem*) {
    std::exit(0);
}
const ASmirnova::MenuItem* ASmirnova::go_back(const MenuItem* current) {
    if (current->parent != nullptr && current->parent->parent != nullptr) {
        return current->parent->parent;
    }
    if (current->parent != nullptr) {
        return current->parent;
    }
    return current;
}
const ASmirnova::MenuItem* ASmirnova::artist_rublev(const MenuItem* current) {
    
    std::cout << "Ничего нет" << std::endl;
    return current->parent;
}
const ASmirnova::MenuItem* ASmirnova::artist_polenov(const MenuItem* current) {
    std::cout << "Ничего нет" << std::endl;
    return current->parent;
}
const ASmirnova::MenuItem* ASmirnova::artist_aivazovsky(const MenuItem* current) {
    std::cout << "Ничего нет" << std::endl;
    return current->parent;
}
const ASmirnova::MenuItem* ASmirnova::musicians_stub(const MenuItem* current) {
    std::cout << "Ничего нет" << std::endl;
    return current->parent;
}