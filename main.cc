#include "Grid.h"
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "Character.h"
#include "Player.h"
#include "Shade.h"
#include "Drow.h"
#include "Vampire.h"
#include "Troll.h"
#include "Goblin.h"
#include "Enemy.h"
#include "Orc.h"
#include "Human.h"
#include "Dwarf.h"
#include "Elf.h"
#include "Merchant.h"
#include "Dragon.h"
#include "Halfling.h"
#include "Potions.h"
#include "BoostAttack.h"
#include "BoostDefence.h"
#include "DragonGold.h"
#include "Item.h"
#include "MerchantGold.h"
#include "NormalGold.h"
#include "PoisonHealth.h"
#include "RestoreHealth.h"
#include "SmallGold.h"
#include "WoundAttack.h"
#include "WoundDefence.h"
#include "Stairs.h"

using namespace std;


int getRand(int min, int max) {
 double f = 1.0 / (RAND_MAX + 1.0);
 int x = rand() * f * (max - min + 1) + min;
 return x;
}

Character *selectCharacter() {
cout << "Please select your class: ";
char c;
cin >> c;

 if (c == 's') {
  cout << "Shade selected." << endl;
  return new Shade;
 } else if (c == 'd') {
  cout << "Drow selected." << endl;
  return new Drow;
 } else if (c == 'v') {
  cout << "Vampire selected." << endl;
  return new Vampire;
 } else if (c == 'g') {
  cout << "Goblin selected." << endl;
  return new Goblin;
 } else{
  cout << "Troll selected." << endl;
  return new Troll;
 }
}




void randPlace(Character *ch, Grid &g) {

 int x;
 int y;

 while(1) {
  x = getRand(0, 78);
  y = getRand(0, 24);

 char c = g.getChar(x, y);

 ch->setX(x);
 ch->setY(y);


  if (g.canWalk(x,y) && c != '+' && c != '#') {
   g.place(x, y, ch);
   break;
  }
 }

}


void randPlace(Item *i, Grid &g) {

 int x;
 int y;

 while(1) {
  x = getRand(0, 78);
  y = getRand(0, 24);

 char c = g.getChar(x, y);

// i->setX(x);
// i->setY(y);


  if (g.canWalk(x,y) && c != '+' && c != '#') {
   g.place(x, y, i);
   break;
  }
 }

}



int main() {
 /*
 ifstream bannerfile("banner.txt");
 string s;

 while(getline(bannerfile, s)) {
  cout << s;
 }
 cout << endl;
 */
 srand(time(0));

 // reads in file name
 cout << "Please enter map file: ";

 string fileName;
 cin >> fileName;

 ifstream file(fileName);

 Character *c = selectCharacter();
 Item *sp = new Stairs; 

 Grid g;
 g.init(file);

 file.close();

 int floorNum = 1;

while(floorNum <= 5) {
//loop starts here for new floor

 randPlace(c, g);
 randPlace(sp,g);

 int type = 0;

 vector<Enemy *> enemyVec;

 for (int i = 0; i < 20; ++i) {
  type = getRand(1, 18);
  Enemy *e = nullptr;
  if (type <= 2) {
    e = new Merchant(&g);
    enemyVec.emplace_back(e);
  } else if (type <= 4 ) {
    e = new Orc(&g);
    enemyVec.emplace_back(e);
  } else if (type <= 6 ) {
    e = new Elf(&g);
    enemyVec.emplace_back(e);
  } else if (type <= 11 ) {
    e = new Halfling(&g);
    enemyVec.emplace_back(e);
  } else if (type <= 14) {
    e = new Dwarf(&g);
    enemyVec.emplace_back(e);
  } else if (type <= 18) {
    e = new Human(&g);
    enemyVec.emplace_back(e);
  }

  randPlace(e, g);

 }

 g.printIt();

 string input;

 int curX;
 int curY;

// command loop
 while(1) {
  cout << "Please enter command: ";
  cin >> input;
  if (cin.fail()) {
   break;
  }

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
   } else if (input == "so") {
    if (g.canWalk(curX, curY + 1)) {
     g.moveOff(curX, curY);
     g.place(curX, curY + 1, c);
     c->setX(curX);
     c->setY(curY + 1);
    }
   } else if (input == "we") {
    if (g.canWalk(curX - 1, curY)) {
     g.moveOff(curX, curY);
     g.place(curX - 1, curY, c);
     c->setX(curX - 1);
     c->setY(curY);
    }
   } else if (input == "ne") {
    if (g.canWalk(curX + 1, curY - 1)) {
     g.moveOff(curX, curY);
     g.place(curX + 1, curY - 1, c);
     c->setX(curX + 1);
     c->setY(curY - 1);
    }
   } else if (input == "nw") {
    if (g.canWalk(curX - 1, curY - 1)) {
     g.moveOff(curX, curY);
     g.place(curX - 1, curY - 1, c);
     c->setX(curX - 1);
     c->setY(curY - 1);
    }
   } else if (input == "se") {
    if (g.canWalk(curX + 1, curY + 1)) {
     g.moveOff(curX, curY);
     g.place(curX + 1, curY + 1, c);
     c->setX(curX + 1);
     c->setY(curY + 1);
    }
   } else if (input == "sw") {
    if (g.canWalk(curX - 1, curY + 1)) {
     g.moveOff(curX, curY);
     g.place(curX - 1, curY + 1, c);
     c->setX(curX - 1);
     c->setY(curY + 1);
    }
   }

 else if (input == "q") {
    break;
   }

 for (int i = 0; i < 20; ++i) {
   enemyVec[i]->Move();
  }
   g.printIt();
 } //inner loop ends

  g.cleanGrid();
 //if(input == "q"){ break;}
}
 //loop ends here for new floor
 return 0;
}
