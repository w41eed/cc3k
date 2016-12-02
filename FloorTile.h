#ifndef FLOORTILE_H
#define FLOORTILE_H


#include "Cell.h"
class Item;

class FloorTile: public Cell {


public:
 FloorTile(int, int); // ctor
 char getChar() override; // returns char to be printed
 bool canPlace() override; // can place atop
 bool canWalk() override; // can walk atop
 void place(Character *) override; // place Character atop
 void place(Item *) override; // place Item atop
 void moveOff() override; // move Character/Item off

};

#endif
