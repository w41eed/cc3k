#include "Vampire.h"
#include "Elf.h"

// ctor
Vampire::Vampire() :
 Player(50, 25, 25, 0, "Vampire") {}

// sets health without health limit
void Vampire::setHealth(int added) {
 HP += added;
}

// strikes and modifies own health
void Vampire::strike(Character &other) {
 other.getStruckBy(*this);
 char c = other.getChar();

 if (c == 'W') {
  setHealth(-5);
 } else {
  setHealth(5);
 }

}
