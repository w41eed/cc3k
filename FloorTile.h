#include "Cell.h"

class FloorTile: public Cell {


public:
 FloorTile(int, int);
 char getChar() override;

};
