//
// Created by john on 20/11/16.
//

#include "Dwarf.h"
#include "Player.h"

// ctor
Dwarf::Dwarf(Grid *g): Enemy( 100, 20, 30, 1, g, "Dwarf") {
}

// gets char to be printed
char Dwarf::getChar() {
    return 'W';
}
