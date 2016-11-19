#ifndef CELL_H_
#define CELL_H_


class Cell {
protected:
 char symbol;

public:
 virtual char getChar() = 0;
 virtual ~Cell() = 0;
 Cell(char);



};

#endif
