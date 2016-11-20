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

using namespace std;




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

int main() {

 // reads in file name
 cout << "Please enter map file: ";

 string fileName;
 cin >> fileName;

 ifstream file(fileName);

 Character *c = selectCharacter();

 Grid g;
 g.init(file);

 file.close();

 g.place(4, 4, c);
 g.printIt();

 cout << "Please enter command: ";

 string input;

 int curX;
 int curY;

// command loop
 while(1) {
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
   g.printIt();
 }
 return 0;
}
