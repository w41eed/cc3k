#include "Cell.h"

class Wall: public Cell {
 bool hor;

 public:
 Wall(char, int, int);
 char getChar() override;

};