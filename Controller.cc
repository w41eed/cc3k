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
#include "Item.h"
#include "BoostAttack.h"
#include "BoostDefence.h"
#include "DragonGold.h"
#include "MerchantGold.h"
#include "NormalGold.h"
#include "PoisonHealth.h"
#include "RestoreHealth.h"
#include "SmallGold.h"
#include "WoundAttack.h"
#include "WoundDefence.h"
#include "Stairs.h"
#include "Controller.h"

using namespace std;

bool Merchant::isHostile = false;

int getRand(int min, int max) {
 double f = 1.0 / (RAND_MAX + 1.0);
 int x = (int) (rand() * f * (max - min + 1) + min);
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

// places the Dragon near the gold
Enemy *placeDragon(int x, int y, Grid &g, int &placedX, int &placedY) {
 Enemy *e = new Dragon(&g);

 if (g.canWalk(x, y -1)) {
  g.place(x, y - 1, e);
  placedX = x;
  placedY = y - 1;
 } else if (g.canWalk(x + 1, y - 1)) {
  g.place(x + 1, y - 1, e);
  placedX = x + 1;
  placedY = y - 1;
 } else if (g.canWalk(x + 1, y)) {
  g.place(x + 1, y, e);
  placedX = x + 1;
  placedY = y;
 } else if (g.canWalk(x + 1, y + 1)) {
  g.place(x + 1, y + 1, e);
  placedX = x + 1;
  placedY = y + 1;
 } else if (g.canWalk(x, y + 1)) {
  g.place(x, y + 1, e);
  placedX = x;
  placedY = y + 1;
 } else if (g.canWalk(x - 1, y + 1)) {
  g.place(x - 1, y + 1, e);
  placedX = x - 1;
  placedY = y + 1;
 } else if (g.canWalk(x - 1, y)) {
  g.place(x - 1, y, e);
  placedX = x - 1;
  placedY = y;
 } else if (g.canWalk(x - 1, y - 1)) {
  g.place(x - 1, y - 1, e);
  placedX = x - 1;
  placedY = y - 1;
 } else {
  g.place(x, y, e);
  placedX = x;
  placedY = y;
 }

 return e;

}
Enemy *randPlace(Item *i, Grid &g, int &placeX, int &placeY) {

 int x;
 int y;

 while(1) {
  x = getRand(0, 78);
  y = getRand(0, 24);

 char c = g.getChar(x, y);

  if (g.canPlace(x,y) && c != '+' && c != '#') {
   g.place(x, y, i);
   break;
  }
 }

 int val = i->getVal();
 Enemy *e = nullptr;

 if (val == 6) {
  e = placeDragon(x, y, g, placeX, placeY);
 }

 return e;

}

std::string eName;
int ePreStrike;
int ePostStrike;
int pPreStrike;


void pAttack(Character *player, Grid &g) {
 string dir;
 cin >> dir;
 Character *enem;
 int x = player->getX();
 int y = player->getY();

 if (dir == "no") {
  enem = g.getCPtr(x, y - 1);
 } else if (dir == "ne") {
  enem = g.getCPtr(x + 1, y - 1);
 } else if (dir == "ea") {
  enem = g.getCPtr(x + 1, y);
 } else if (dir == "se") {
  enem = g.getCPtr(x + 1, y + 1);
 } else if (dir == "so") {
  enem = g.getCPtr(x, y + 1);
 } else if (dir == "sw") {
  enem = g.getCPtr(x - 1, y + 1);
 } else if (dir == "we") {
  enem = g.getCPtr(x - 1, y);
 } else if (dir == "nw") {
  enem = g.getCPtr(x - 1, y - 1);
 }

 if (enem == nullptr) {
  return;
 }
 eName = enem->getName();
 ePreStrike = enem->getHealth();
 pPreStrike = player->getHealth();

  player->strike(*enem);
 ePostStrike = enem->getHealth();
}

std::string PotionType; //stores the potion type for action bar

void pGetPotion(Character *player, Grid &g) {
 string dir;
 cin >> dir;
 Item *i;
 int x = player->getX();
 int y = player->getY();

 if (dir == "no") {
  i = g.getIPtr(x, y - 1);
  g.takeOff(x,y - 1);
 } else if (dir == "ne") {
  i = g.getIPtr(x + 1, y - 1);
  g.takeOff(x + 1,y - 1);
 } else if (dir == "ea") {
  i = g.getIPtr(x + 1, y);
  g.takeOff(x + 1,y);
 } else if (dir == "se") {
  i = g.getIPtr(x + 1, y + 1);
  g.takeOff(x + 1,y + 1);
 } else if (dir == "so") {
  i = g.getIPtr(x, y + 1);
  g.takeOff(x,y + 1);
 } else if (dir == "sw") {
  i = g.getIPtr(x - 1, y + 1);
  g.takeOff(x - 1,y + 1);
 } else if (dir == "we") {
  i = g.getIPtr(x - 1, y);
  g.takeOff(x - 1,y);
 } else if (dir == "nw") {
  i = g.getIPtr(x - 1, y - 1);
  g.takeOff(x - 1,y - 1);
 }

 if (i == nullptr) {
  return;
 }
 PotionType = i->getType();
 i->usePotion(player);
 delete i;
 i = nullptr;
}


Item *pickItem(int val, bool gold) {
 if (val <= 4 && gold == false) {
  return new BoostAttack;
 } else if (val <= 8 && gold == false) {
  return new BoostDefence;
 } else if (val <= 12 && gold == false) {
  return new PoisonHealth;
 } else if (val <= 15 && gold) {
  return new NormalGold;
 } else if (val <= 16 && gold == false) {
  return new RestoreHealth;
 } else if (val <= 18 && gold) {
  return new DragonGold;
 } else if (val <= 20 && gold == false) {
  return new WoundAttack;
 } else if (val <= 24 && gold == false) {
  return new WoundDefence;
 } else {
  return new SmallGold;
 }
}

void Controller::play() {
 /*
 ifstream bannerfile("banner.txt");
 string s;

 while(getline(bannerfile, s)) {
  cout << s;
 }
 cout << endl;
 */
 srand(time(0));
 bool running = true;
 Character *c;
 Item *sp;
 string playName;

 while (running) {
 // reads in file name
 cout << "Please enter map file: ";
 int placedX = 0;
 int placedY = 0;
 string fileName;
 cin >> fileName;

 ifstream file(fileName);
 Grid g;
 g.init(file);

 c = selectCharacter();
 sp = new Stairs;

 file.close();

 int floorNum = 1;
 string haveQuit;
 bool next_floor;
 ActionBar *ab = g.getAction();

while(floorNum <= 5) {
//loop starts here for new floor
  
 randPlace(c, g);
 randPlace(sp,g, placedX, placedY);

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

 bool gold = false;


 // item spawn
 for (int i = 0; i < 20; ++i) {
  type = getRand(1, 24);
  Item *it = nullptr;

  it = pickItem(type, gold);

  Enemy *drag = randPlace(it, g, placedX, placedY);

 if (drag && drag->getChar() == 'D') {
   enemyVec.emplace_back(drag);
   drag->setX(placedX);
   drag->setY(placedY);
  }

  if (i == 9) {
   gold = true;
  }

 }

 ab->updateFloor(floorNum);
 ab->updatePlayer(c);
 ab->updateAction(1);
 g.printIt();

 string input;

 int curX;
 int curY;
 bool eMove = true;


  // store original value of Atk and Def to allow resetting of them after new floor
 const int originalAtk = c->getAtk();
 const int originalDef = c->getDef();

 int preGold;
 int postGold;
 int preHealth;
 int postHealth;

// command loop
 while(1) {
  
  preHealth = c->getHealth();
  preGold = c->getG();

  cout << "Please enter command: ";
  cin >> input;
  if (cin.fail()) {
   break;
  }
  haveQuit = input;
  curX = c->getX();
  curY = c->getY();

  if (input == "a") {
    pAttack(c, g);
    ab->updateAttack(eName,ePreStrike,ePostStrike,pPreStrike);
    ab->updateAction(11);
  } else if (input == "r") {
    cout << "Game restarted" << endl;
    g.cleanGrid();
    break;
  } else if (input == "f") {
    if (eMove) {
     cout << "Enemy movement halted" << endl;
     eMove = false;
    } else {
     cout << "Enemy movement resumed" << endl;
     eMove = true;
    }
  } else if (input == "u") {
    pGetPotion(c,g);
    ab->updatePotion(PotionType);
    ab->updateAction(2);
    
  } else if (input == "no") {
    if (g.canWalk(curX, curY - 1)) {
     g.moveOff(curX, curY);
     g.place(curX, curY - 1, c);
     c->setX(curX);
     c->setY(curY - 1);

     postHealth = c->getHealth();
     postGold = c->getG();
     if(preHealth != postHealth){ ab->updateAction(12);}
     else if(preGold != postGold){ ab->updateAction(13);}
     else { ab->updateAction(3);}
     
     next_floor = g.nextFloor(curX,curY-1);
     if(next_floor == 1) {break;}

    }
   } else if (input == "ea") {
    if (g.canWalk(curX + 1, curY)) {
     g.moveOff(curX, curY);
     g.place(curX + 1, curY, c);
     c->setX(curX + 1);
     c->setY(curY);

     postHealth = c->getHealth();
     postGold = c->getG();
     if(preHealth != postHealth){ ab->updateAction(12);}
     else if(preGold != postGold){ ab->updateAction(13);}
     else { ab->updateAction(4);}

     next_floor = g.nextFloor(curX+1,curY);
     if(next_floor == 1) {break;}
    }
   } else if (input == "so") {
    if (g.canWalk(curX, curY + 1)) {
     g.moveOff(curX, curY);
     g.place(curX, curY + 1, c);
     c->setX(curX);
     c->setY(curY + 1);

     postHealth = c->getHealth();
     postGold = c->getG();
     if(preHealth != postHealth){ ab->updateAction(12);}
     else if(preGold != postGold){ ab->updateAction(13);}
     else { ab->updateAction(5);}

     next_floor = g.nextFloor(curX,curY+1);
     if(next_floor == 1) {break;}
    }
   } else if (input == "we") {
    if (g.canWalk(curX - 1, curY)) {
     g.moveOff(curX, curY);
     g.place(curX - 1, curY, c);
     c->setX(curX - 1);
     c->setY(curY);

     postHealth = c->getHealth();
     postGold = c->getG();
     if(preHealth != postHealth){ ab->updateAction(12);}
     else if(preGold != postGold){ ab->updateAction(13);}
     else { ab->updateAction(6);}

     next_floor = g.nextFloor(curX-1,curY);
     if(next_floor == 1) {break;}
    }
   } else if (input == "ne") {
    if (g.canWalk(curX + 1, curY - 1)) {
     g.moveOff(curX, curY);
     g.place(curX + 1, curY - 1, c);
     c->setX(curX + 1);
     c->setY(curY - 1);

     postHealth = c->getHealth();
     postGold = c->getG();
     if(preHealth != postHealth){ ab->updateAction(12);}
     else if(preGold != postGold){ ab->updateAction(13);}
     else { ab->updateAction(7);}

     next_floor = g.nextFloor(curX+1,curY-1);
     if(next_floor == 1) {break;}
    }
   } else if (input == "nw") {
    if (g.canWalk(curX - 1, curY - 1)) {
     g.moveOff(curX, curY);
     g.place(curX - 1, curY - 1, c);
     c->setX(curX - 1);
     c->setY(curY - 1);

     postHealth = c->getHealth();
     postGold = c->getG();
     if(preHealth != postHealth){ ab->updateAction(12);}
     else if(preGold != postGold){ ab->updateAction(13);}
     else { ab->updateAction(8);}

     next_floor = g.nextFloor(curX-1,curY-1);
     if(next_floor == 1) {break;}
    }
   } else if (input == "se") {
    if (g.canWalk(curX + 1, curY + 1)) {
     g.moveOff(curX, curY);
     g.place(curX + 1, curY + 1, c);
     c->setX(curX + 1);
     c->setY(curY + 1);

     postHealth = c->getHealth();
     postGold = c->getG();
     if(preHealth != postHealth){ ab->updateAction(12);}
     else if(preGold != postGold){ ab->updateAction(13);}
     else { ab->updateAction(9);}

     next_floor = g.nextFloor(curX+1,curY+1);
     if(next_floor == 1) {break;}
    }
   } else if (input == "sw") {
    if (g.canWalk(curX - 1, curY + 1)) {
     g.moveOff(curX, curY);
     g.place(curX - 1, curY + 1, c);
     c->setX(curX - 1);
     c->setY(curY + 1);

     postHealth = c->getHealth();
     postGold = c->getG();
     if(preHealth != postHealth){ ab->updateAction(12);}
     else if(preGold != postGold){ ab->updateAction(13);}
     else { ab->updateAction(10);}

     next_floor = g.nextFloor(curX-1,curY+1);
     if(next_floor == 1) {break;}
    }
   }

 else if (input == "q") {
    cout << "Game over! You lose!" << endl;
    g.cleanGrid();
    delete c;
    delete sp;
    c = nullptr;
    sp = nullptr;
    return;
   }
  preHealth = c->getHealth();
  int len = enemyVec.size();

  for (int i = 0; i < len; ++i) {
   if (enemyVec[i]) { 
    if (enemyVec[i]->Update(eMove)) { // case when enemy dies and drops gold
     char enemyType;
     enemyType = enemyVec[i]->getChar();
     int goldDropped = getRand(1,2);
     const int normalPile = 2;
     const int merchantHoard = 4;
     const int GoblinSteal = 5;
     switch (enemyType) {
      case 'H':
       c->setG(normalPile * 2); // humans drop 2 piles of normal gold
       break;
      case 'M':
       c->setG(merchantHoard); // merchant drop merchant hoard
       break;
      default:
       // other enemies randomly drop a small pile or a normal pile
       c->setG(goldDropped);
     }
     if (c->getName() == "Goblin") {
      c->setG(GoblinSteal); // Goblin gains 5 extra gold from every kill
     }
     delete enemyVec[i];
     enemyVec[i] = nullptr;
    }
   }
  }
   postHealth = c->getHealth();
   if(preHealth > postHealth && input != "u" && input != "a") { ab->updateAction(12);}
  
   ab->updatePlayer(c);

   playName = c->getName();
   if (playName == "Troll") {
    c->setHealth(5);
   }

   g.printIt(); // print the screen

   if (c->getHealth() <= 0) {
    haveQuit = "q";
    cout << "Game Over! You Lose" << endl;
    g.cleanGrid();
    delete c;
    delete sp;
    c = nullptr;
    sp = nullptr;
    return;
   }
  
 } //inner loop ends
  ++floorNum;
  c->setAtk(originalAtk - c->getAtk()); // sets atk back to original atk
  c->setDef(originalDef - c->getDef()); // sets def back to original def
  if(haveQuit == "r"){ 
   break;
  }
  g.cleanGrid();
  if (floorNum == 6) {
   cout << "You win!" << endl;
   break;
  }

} // new floor loop
 delete c;
 delete sp;
} // entire game loop
 //loop ends here for new floor
 c = nullptr;
 sp = nullptr;
 return;
}
