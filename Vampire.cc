#include "Vampire.h"

// ctor
Vampire::Vampire() :
 Player(50, 25, 25, 0) {}

// strikes an enemy
void Vampire::strike(Character &other) {
 other.getStruckBy(*this);
}

// gets struck by an enemy
void Vampire::getStruckBy(Character &other) {
 int net = other.getAtk() - Def;
 if (net <= 0) {
  net = 0;
 }
 HP -= net;
}
