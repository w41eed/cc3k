#include "Cell.h"

class Wall: public Cell {
 bool hor;

 public:
 Wall(bool hor);
 char getChar();

};
