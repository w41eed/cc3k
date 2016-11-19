#ifndef CELL_H_
#define CELL_H_

class Cell{
protected:
 char symbol;
 int x;
 int y;

public:
 virtual char getChar() = 0;
 virtual ~Cell() = 0;
 Cell(char, int, int);
 int getX();
 int getY();


};

#endif
