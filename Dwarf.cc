//
// Created by john on 20/11/16.
//

#include "Dwarf.h"
#include "Player.h"

Dwarf::Dwarf(): Enemy( 100, 20, 30,1) {
}

void Dwarf::move() {

}

char Dwarf::getChar() {
    return 'W';
}

int Dwarf::attack(Player *p) {
 return 0;
}
