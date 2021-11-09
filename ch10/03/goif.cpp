#include "goif.h"

#include <iostream>

#pragma warning(disable: 4996)

goif::goif(const char * name, int handicap) {
        strcpy(player_Name, name);
        this -> handicap = handicap;
}

void goif::setHandicap(int handicap) {
        this -> handicap = handicap;
}

void goif::getGolf() {
        std::cout << "_____________" << std::endl;
        std::cout << player_Name << std::endl;
        std::cout << handicap << std::endl;
}
