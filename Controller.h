#ifndef CONTROLLER_H
#define CONTROLLER_H

class Character;
class Item;
class Grid;
class Enemy;
class DragonGold;

int getRand(int, int);

class Controller {

Character *selectCharacter();
void randPlace(Character *, Grid &);
Enemy *placeDragon(int, int, Grid &, int &, int &, DragonGold *);
Enemy *randPlace(Item *, Grid &, int &, int &);
void pAttack(Character *, Grid &);
void pGetPotion(Character *, Grid &);
Item *pickItem(int, bool);
bool okStairs(const int &, const int &, const int &, const int &);
void stairPlace(Item *, Grid &, const int &, const int &);

public:
 void play();

};

#endif
