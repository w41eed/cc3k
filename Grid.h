#include <vector>
#include <fstream>
#include "Cell.h"

class Grid {
 std::vector<std::vector<Cell *>> theGrid;
 int gridLen;

 public:
 void init(std::ifstream &file);
 void printIt();


};
