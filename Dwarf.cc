//
// Created by john on 20/11/16.
//

#include "Dwarf.h"
#include "Player.h"

Dwarf::Dwarf(Grid *g): Enemy( 100, 20, 30, 1, g) {
}

char Dwarf::getChar() {
    return 'W';
}

int Dwarf::attack(Player *p) {
 return 0;
}
