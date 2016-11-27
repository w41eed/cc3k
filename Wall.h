#ifndef WALL_H_
#define WALL_H_

#include "Cell.h"


class Wall: public Cell {

 public:
 Wall(char, int, int); // ctor
 char getChar() override; // gets char to be printed
 bool canWalk() override; // can walk atop
 bool canPlace() override; // can place atop
 void place(Character *) override; // place Character atop
 void place(Item *) override; // place Item atop
 void moveOff() override; // move Character/Item off
};

#endif
