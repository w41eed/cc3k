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
