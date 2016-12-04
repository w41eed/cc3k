#include "Drow.h"
#include <math.h>

// ctor
Drow::Drow() :
 Player(150, 25, 15, 0, "Drow") {}

// Elf strikes Drow only once
void Drow::getStruckBy(Elf &other) {
 int net = ceil((100.0 / (100.0 + static_cast<float>(Def))) * static_cast<float>(other.getAtk()));
 if (net <= 0) {
  net = 0;
 }
 HP -= net;
}
