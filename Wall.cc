#include "Wall.h"

Wall::Wall(char c, int x, int y) :
 hor{hor}, Cell{c, x, y} {}

char Wall::getChar() {
 return symbol;
}

bool Wall::canWalk() {
 return false;
}

bool Wall::canPlace() {
 return false;
}
