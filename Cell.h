#ifndef CELL_H_
#define CELL_H_

#include "Subject.h"
#include "Character.h"
//#include "Item.h"
class Item;

class Cell: public Subject{
protected:
 char symbol; // symbol to be printed
 int x; // x coordinate
 int y; // y coordinate
 Character *c; // ability for character to stand atop
 Item *i; // ability for item to be placed atop

public:
 void cleanCell() override; //sets the pointer to item and character to null
 virtual char getChar() = 0; // gets character to be printed
 virtual bool canWalk() = 0; // checks if Cell can be walked on
 virtual bool canPlace() = 0; // checks if Cell can be placed on
 virtual void place(Character *) = 0; // place Character on Cell
 virtual void place(Item *) = 0; // place Item on Cell
 virtual void moveOff() = 0; // move item/character off Cell
 virtual ~Cell(); // dtor
 Cell(char, int, int); // ctor
 int getX() override; // returns x coordinate
 int getY() override; // returns y coordinate
 bool nextFloor(); //determines if player is on stairs
 Character *getCPtr(); // returns pointer to character on cell
 Item *getIPtr(); //returns a pointer to an item
 void takeOff(); // takes item off cell

};

#endif
