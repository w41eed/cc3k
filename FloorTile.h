#ifndef FLOORTILE_H
#define FLOORTILE_H


#include "Cell.h"

class FloorTile: public Cell {


public:
 FloorTile(int, int);
 char getChar() override;
 bool canPlace() override;
 bool canWalk() override;
 void place(Character *) override;
 void moveOff() override;

};

#endif
