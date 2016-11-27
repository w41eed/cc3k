//
// Created by john on 20/11/16.
//

#include "Orc.h"
#include "Player.h"

Orc::Orc(Grid *g): Enemy(180, 30, 25, 1, g) {}

char Orc::getChar() {
    return 'O';
}

int Orc::attack(Player *p) {
 return 0;
}
