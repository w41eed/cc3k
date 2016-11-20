#include "Passage.h"

Passage::Passage(int x, int y): Cell{'#', x, y} {}

char Passage::getChar() {
 return symbol;
}

bool Passage::canWalk() {
 return true;
}

bool Passage::canPlace() {
 return false;
}

void Passage::place(Character *other) {
 c = other;
}

void Passage::moveOff() {
 c = nullptr;
}
