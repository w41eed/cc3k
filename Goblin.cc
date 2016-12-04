#include "Goblin.h"

// ctor
Goblin::Goblin() :
  Player(110, 15, 20, 0, "Goblin") {}

// gets 50% more damage taken from Orc
void Goblin::getStruckBy(Orc &other) {
 int net = other.getAtk() - Def;
 net = net + (net / 2);

 if (net <= 0) {
  net = 0;
 }



 HP -= net;
 if (HP <= 0) {
  HP = 0;
 }

}
