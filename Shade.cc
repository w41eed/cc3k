#include "Shade.h"
#include "Player.h"

// ctor
Shade::Shade() :
 Player{125, 25, 25, 0, "Shade"} {}

// get struck by an Elf
void Shade::getStruckBy(Elf &other) {
 int net = (2 * other.getAtk()) - (2 * Def);
 if (net <= 0) {
  
 }

}
