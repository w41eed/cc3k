#ifndef DOORWAY_H
#define DOORWAY_H

#include "Cell.h"


class DoorWay: public Cell {


public:
 DoorWay(int, int); // ctor
 char getChar()  override; // returns char to be printed
 bool canWalk() override; // can be walked on
 bool canPlace() override; // can be placed on
 void place(Character *) override; // place Character atop
 void place(Item *) override; // place Item atop
 void moveOff() override; // removes Character from atop
};

#endif
