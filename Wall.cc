#include "Wall.h"

Wall::Wall(bool hor) :
 hor{hor}, Cell{'|'} {}

char Wall::getChar() {
 return symbol;
}
