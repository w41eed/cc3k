#include "Troll.h"

// ctor
Troll::Troll() :
  Player(120, 25, 15, 0) {}

// strikes an enemy
void Troll::strike(Character &other) {
 other.getStruckBy(*this);
}

void Troll::getStruckBy(Character &other) {
 int net = other.getAtk() - Def;
 if (net <= 0) {
  net = 0;
 }
 HP -= net;
}
