//
// Created by john on 19/11/16.
//

#include "Human.h"
#include "Player.h"

Human::Human(Grid *g) : Enemy(140, 20, 20, 4, g) {}

char Human::getChar() {
    return 'H';
}

int Human::attack(Player *P) {
 return 0;
}
