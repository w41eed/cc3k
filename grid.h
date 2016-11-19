#include <vector>
#include <fstream>

class Grid {
 std::vector<std::vector<char> > theGrid;
 int gridLen;

 public:
 void init(std::ifstream &file);
 void printIt();


};
