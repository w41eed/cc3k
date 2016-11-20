#include "Grid.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main() {

 string fileName;
 cin >> fileName;

 ifstream file(fileName);

 Grid g;
 g.init(file);
 g.printIt();

 return 0;

}
