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

 // reads in file name
 string fileName;
 cin >> fileName;

 ifstream file(fileName);

 Character *c = new Shade;

 Grid g;
 g.init(file);

 file.close();

 g.place(4, 4, c);
 g.printIt();

 cout << "Moving" << endl;

 string input;

 int curX;
 int curY;


 while(1) {
  cin >> input;
  curX = c->getX();
  curY = c->getY();

  if (input == "no") {
    if (g.canWalk(curX, curY - 1)) {
     g.moveOff(curX, curY);
     g.place(curX, curY - 1, c);
     c->setX(curX);
     c->setY(curY - 1);
    }
   } else if (input == "ea") {
    if (g.canWalk(curX + 1, curY)) {
     g.moveOff(curX, curY);
     g.place(curX + 1, curY, c);
     c->setX(curX + 1);
     c->setY(curY);
    }
   } else if (input == "q") {
    break;
   }




  

   g.printIt();






 }




 return 0;

}
