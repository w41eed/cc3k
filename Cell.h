#ifndef CELL_H_
#define CELL_H_

#include "Subject.h"
#include "Character.h"

class Cell: public Subject{
protected:
 char symbol; // symbol to be printed
 int x; // x coordinate
 int y; // y coordinate
 Character *c; // ability for character to stand atop

public:
 virtual char getChar() = 0; // gets character to be printed
 virtual bool canWalk() = 0; // checks if Cell can be walked on
 virtual bool canPlace() = 0; // checks if Cell can be placed on
 virtual void place(Character *) = 0; // place Character on Cell
 virtual void moveOff() = 0; // move item/character off Cell
 virtual ~Cell(); // dtor
 Cell(char, int, int); // ctor
 int getX() override; // returns x coordinate
 int getY() override; // returns y coordinate


};

#endif
