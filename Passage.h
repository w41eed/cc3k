#ifndef PASSAGE_H
#define PASSAGE_H

#include "Cell.h"


class Passage : public Cell {



public:
 Passage(int, int); //ctor
 char getChar() override; // gets char to be printed
 bool canWalk() override; // can walk atop
 bool canPlace() override; // can place atop
 void place(Character *) override; // place Character atop
 void place(Item *) override; // place Item atop
 void moveOff() override; // move Character/Item off
};

#endif
