#include "Drow.h"

// ctor
Drow::Drow() :
 Player(150, 25, 15, 0) {}

// strikes an enemy
void Drow::strike(Character &other) {
 other.getStruckBy(*this);
}

// gets struck by an enemy
void Drow::getStruckBy(Character &other) {
int net = other.getAtk() - Def;
 if (net <= 0) {
  net = 0;
 }
 HP -= net;
}
