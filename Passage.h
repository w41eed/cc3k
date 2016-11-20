#ifndef PASSAGE_H
#define PASSAGE_H

#include "Cell.h"


class Passage : public Cell {



public:
 Passage(int, int);
 char getChar() override;
 bool canWalk() override;
 bool canPlace() override;
 void place(Character *) override;
 void moveOff() override;
};

#endif
