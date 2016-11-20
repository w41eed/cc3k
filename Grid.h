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

};
