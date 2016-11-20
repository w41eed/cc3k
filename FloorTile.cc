#include "FloorTile.h"

FloorTile::FloorTile(int x, int y) : Cell{'.', x ,y} {
}

char FloorTile::getChar() {
 return symbol;
}

bool FloorTile::canPlace() {
 return true;
}

bool FloorTile::canWalk() {
 return true;
}

void FloorTile::place(Character *other) {
 c = other;
}

void FloorTile::moveOff() {
 c = nullptr;
}
