#include "Drow.h"

// ctor
Drow::Drow() :
 Player(150, 25, 15, 0, "Drow") {}

// Elf strikes Drow only once
void Drow::getStruckBy(Elf &other) {
 int net = other.getAtk() - Def;
 if (net <= 0) {
  net = 0;
 }
 HP -= net;
}
