#include "FloorTile.h"

// ctor
FloorTile::FloorTile(int x, int y) : Cell{'.', x ,y} {
}

// gets char to be printed
char FloorTile::getChar() {
 if (c == nullptr) {
  return symbol;
 } else {
  return c->getChar();
 }
}

// can place atop
bool FloorTile::canPlace() {
 return true;
}

// can walk atop
bool FloorTile::canWalk() {
 return true;
}

// place Character atop
void FloorTile::place(Character *other) {
 c = other;
 notifyObservers();
}

// move Character/Item off top
void FloorTile::moveOff() {
 c = nullptr;
 notifyObservers();
}
