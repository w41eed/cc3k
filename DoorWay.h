#include "Cell.h"


class DoorWay: public Cell {


public:
 DoorWay(int, int);
 char getChar() override;
 bool canWalk() override;
 bool canPlace() override;
 void place(Character *) override;
 void moveOff() override;
};
