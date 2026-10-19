#include "menu.hpp"
#include "menu_items.hpp"

int main() {
    const ASmirnova::MenuItem* current = &ASmirnova::MAIN;
    do {
        current = current->func(current);
    } while (true);

    return 0;
}