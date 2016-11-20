#include "Grid.h"
#include <string>
#include <iostream>
#include <fstream>
#include "Character.h"
#include "Player.h"
#include "Shade.h"
#include "Drow.h"
#include "Vampire.h"
#include "Troll.h"
#include "Goblin.h"

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
