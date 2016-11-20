#include "Cell.h"


Cell::~Cell() {
 delete c;
}

Cell::Cell(char symbol, int x, int y) :
  symbol{symbol}, x{x}, y{y}, c{nullptr} {}

int Cell::getX() {
 return x;
}

int Cell::getY() {
 return y;
}
