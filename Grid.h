#include <vector>
#include <fstream>
#include "Cell.h"
#include "TextDisplay.h"

class Grid {
 std::vector<std::vector<Cell *>> theGrid;
 int gridLen;
 TextDisplay *td;

 public:
 Grid();
 void init(std::ifstream &file);
 void printIt();
 ~Grid();
 bool canWalk(int, int);
 bool canPlace(int, int);
 bool place(int, int, Character *);
 void moveOff(int, int);

};
