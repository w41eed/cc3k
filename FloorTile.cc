#include "FloorTile.h"

FloorTile::FloorTile(int x, int y) : Cell{'.', x ,y} {
}

char FloorTile::getChar() {
 if (c == nullptr) {
  return symbol;
 } else {
  return c->getChar();
 }
}

bool FloorTile::canPlace() {
 return true;
}

bool FloorTile::canWalk() {
 return true;
}

void FloorTile::place(Character *other) {
 c = other;
 notifyObservers();
}

void FloorTile::moveOff() {
 c = nullptr;
 notifyObservers();
}
