#pragma once

#include "menu.hpp"

namespace ASmirnova {
    const MenuItem* show_menu(const MenuItem* current);
    const MenuItem* exit(const MenuItem* current);
    const MenuItem* go_back(const MenuItem* current);
    const MenuItem* artist_rublev(const MenuItem* current);
    const MenuItem* artist_polenov(const MenuItem* current);
    const MenuItem* artist_aivazovsky(const MenuItem* current);
    const MenuItem* musicians_stub(const MenuItem* current);
}