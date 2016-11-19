#include "Cell.h"


Cell::~Cell() {
}

Cell::Cell(char symbol, int x, int y) :
  symbol{symbol}, x{x}, y{y} {}

int Cell::getX() {
 return x;
}

int Cell::getY() {
 return y;
}
