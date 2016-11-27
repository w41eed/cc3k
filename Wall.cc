#include "Wall.h"

// ctor
Wall::Wall(char c, int x, int y) :
 Cell{c, x, y} {}

// get char to be printed
char Wall::getChar() {
 return symbol;
}

// can walk atop
bool Wall::canWalk() {
 return false;
}

// can place atop
bool Wall::canPlace() {
 return false;
}

// place Character atop
void Wall::place(Character *other) {
 return;
}

// place Item atop
void Wall::place(Item *other) {
 return;
}

// move Character/Item off
void Wall::moveOff() {
 return;
}
