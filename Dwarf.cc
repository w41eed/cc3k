//
// Created by john on 20/11/16.
//

#include "Dwarf.h"
#include "Player.h"

// ctor
Dwarf::Dwarf(Grid *g): Enemy( 100, 20, 30, 1, g) {
}

// gets char to be printed
char Dwarf::getChar() {
    return 'W';
}

// strikes player
void Dwarf::strike(Player &other) {
 other.getStruckBy(*this);
}

// gets struck by player
void Dwarf::getStruckBy(Player &other) {
 int net = other.getAtk() - Def;
 if (net <= 0) {
  net = 0;
 }
 HP -= net;
}
