#ifndef CELL_H_
#define CELL_H_

#include "Subject.h"
#include "Character.h"

class Cell: public Subject{
protected:
 char symbol;
 int x;
 int y;
 Character *c;

public:
 virtual char getChar() = 0;
 virtual bool canWalk() = 0;
 virtual bool canPlace() = 0;
 virtual void place(Character *) = 0;
 virtual void moveOff() = 0;
 virtual ~Cell() = 0;
 Cell(char, int, int);
 int getX() override;
 int getY() override;


};

#endif
