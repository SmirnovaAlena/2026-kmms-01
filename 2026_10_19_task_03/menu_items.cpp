#include "menu_items.hpp"
#include "menu_functions.hpp"
const ASmirnova::MenuItem ASmirnova::ARTIST_RUBLEV = {
    "1 - Андрей Иванов сын Рублёв", ASmirnova::artist_rublev, &ASmirnova::ART_ARTISTS
};
const ASmirnova::MenuItem ASmirnova::ARTIST_POLENOV = {
    "2 - Василий Дмитриевич Поленов", ASmirnova::artist_polenov, &ASmirnova::ART_ARTISTS
};
const ASmirnova::MenuItem ASmirnova::ARTIST_AIVAZOVSKY = {
    "3 - Иван Константинович Айвазовский", ASmirnova::artist_aivazovsky, &ASmirnova::ART_ARTISTS
};
const ASmirnova::MenuItem ASmirnova::ART_ARTISTS_GO_BACK = {
    "0 - Выйти в предыдущее меню", ASmirnova::go_back, &ASmirnova::ART_ARTISTS
};
const ASmirnova::MenuItem ASmirnova::EXIT = {
    "0 - Выйти", ASmirnova::exit, &ASmirnova::MAIN
};
const ASmirnova::MenuItem ASmirnova::ART_GO_BACK = {
    "0 - Выйти в главное меню", ASmirnova::go_back, &ASmirnova::ART
};
namespace {
    const ASmirnova::MenuItem* const artists_children[] = {
        &ASmirnova::ART_ARTISTS_GO_BACK,
        &ASmirnova::ARTIST_RUBLEV,
        &ASmirnova::ARTIST_POLENOV,
        &ASmirnova::ARTIST_AIVAZOVSKY
    };
    const int artists_size = sizeof(artists_children) / sizeof(artists_children[0]);
    const ASmirnova::MenuItem* const art_children[] = {
        &ASmirnova::ART_GO_BACK,
        &ASmirnova::ART_ARTISTS,
        &ASmirnova::ART_MUSICIANS
    };
    const int art_size = sizeof(art_children) / sizeof(art_children[0]);
    const ASmirnova::MenuItem* const main_children[] = {
        &ASmirnova::EXIT,
        &ASmirnova::ART
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}
const ASmirnova::MenuItem ASmirnova::ART_ARTISTS = {
    "1 - Русские художники", ASmirnova::show_menu, &ASmirnova::ART, artists_children, artists_size
};
const ASmirnova::MenuItem ASmirnova::ART_MUSICIANS = {
    "2 - Русские музыканты", ASmirnova::musicians_stub, &ASmirnova::ART
};
const ASmirnova::MenuItem ASmirnova::ART = {
    "1 - Искусство России", ASmirnova::show_menu, &ASmirnova::MAIN, art_children, art_size
};
const ASmirnova::MenuItem ASmirnova::MAIN = {
    nullptr, ASmirnova::show_menu, nullptr, main_children, main_size
};