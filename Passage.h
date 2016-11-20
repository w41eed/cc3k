#include "Cell.h"


class Passage : public Cell {



public:
 Passage(int, int);
 char getChar() override;
 bool canWalk() override;
 bool canPlace() override;
};
