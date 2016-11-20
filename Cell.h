#ifndef CELL_H_
#define CELL_H_

#include "Subject.h"

class Cell: public Subject{
protected:
 char symbol;
 int x;
 int y;

public:
 virtual char getChar() = 0;
 virtual ~Cell() = 0;
 Cell(char, int, int);
 int getX() override;
 int getY() override;


};

#endif
