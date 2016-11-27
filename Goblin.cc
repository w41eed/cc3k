#include "Goblin.h"

// ctor
Goblin::Goblin() :
  Player(110, 15, 20, 0) {}

// strikes an enemy
void Goblin::strike(Enemy &other) {
 other.getStruckBy(*this);
}

void Goblin::getStruckBy(Enemy &other) {
 int net = other.getAtk() - Def;
 if (net <= 0) {
  net = 0;
 }
 HP -= net;

}
