//
// Created by john on 19/11/16.
//

#include "Human.h"
#include "Player.h"

// ctor
Human::Human(Grid *g) : Enemy(140, 20, 20, 4, g) {}

// gets char to be printed
char Human::getChar() {
    return 'H';
}

// strikes player
void Human::strike(Player &other) {
 other.getStruckBy(*this);
}

// gets struck by player
void Human::getStruckBy(Player &other) {
 int net = other.getAtk() - Def;
 if (net <= 0) {
  net = 0;
 }
 HP -= net;
}
