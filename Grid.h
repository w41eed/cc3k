#ifndef GRID_H_
#define GRID_H_


#include <vector>
#include <fstream>
#include "Cell.h"
#include "TextDisplay.h"
#include "ActionBar.h"

class Grid {
 std::vector<std::vector<Cell *>> theGrid; // the actual grid
 int gridLen; // length of the Grid
 TextDisplay *td; // TextDisplay for displaying the Grid
 ActionBar *ab; //ActionBar for Displaying Player Stats

 public:
 Grid(); // ctor
 void init(std::ifstream &file); // initialize via map text file
 void printIt(); // prints Grid using TextDisplay
 ~Grid(); // dtor
 bool canWalk(int, int); // checks if Cell at X, Y is walkable
 bool canPlace(int, int); // chefcks if Cell at X, Y is placeable
 bool place(int, int, Character *); // places Character at X, Y
 bool place(int, int, Item *); // places Item at X, Y
 void moveOff(int, int); // moves Character off X, Y
 void takeOff(int, int); // takes Item off of X, Y
 char getChar(int, int) const; // gets char at x,y
 void cleanGrid(); // removes all the pointers to all the characters and items
 bool nextFloor(int x, int y); //returns true if player is on stairs
 Character *getCPtr(int, int) const; //  returns character ptr at X, Y
 Item *getIPtr(int, int) const; //  returns item ptr at X, Y
 ActionBar * getAction() const; // return a pointer to the ActionBar
};

#endif
