#include "Cell.h"


class Wall: public Cell {

 public:
 Wall(char, int, int);
 char getChar() override;
 bool canWalk() override;
 bool canPlace() override;
 void place(Character *) override;
 void moveOff() override;
};
