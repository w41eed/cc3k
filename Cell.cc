#include "Cell.h"

// dtor
Cell::~Cell() {
 delete c;
}

// ctor
Cell::Cell(char symbol, int x, int y) :
  symbol{symbol}, x{x}, y{y}, c{nullptr}, i{nullptr} {}

// returns x coordinate
int Cell::getX() {
 return x;
}

// returns y coordinate
int Cell::getY() {
 return y;
}
