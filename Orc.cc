//
// Created by john on 20/11/16.
//

#include "Orc.h"
#include "Player.h"


// ctor
Orc::Orc(Grid *g): Enemy(180, 30, 25, 1, g) {}

// gets char to be printed
char Orc::getChar() {
    return 'O';
}

// strikes player
void Orc::strike(Character &other) {
 other.getStruckBy(*this);
}

// gets struck by player
void Orc::getStruckBy(Character &other) {
 int net = other.getAtk() - Def;
 if (net <= 0) {
  net = 0;
 }

 HP -= net;

}
