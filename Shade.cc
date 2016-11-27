#include "Shade.h"
#include "Player.h"

// ctor
Shade::Shade() :
 Player{125, 25, 25, 0} {}

// strikes an enemy
void Shade::strike(Character &other) {
 other.getStruckBy(*this);
}


// gets struck by an enemy
void Shade::getStruckBy(Character &other) {
 int net = other.getAtk() - Def;
 if (net <= 0) {
  net = 0;
 }

 HP -= net;
}
