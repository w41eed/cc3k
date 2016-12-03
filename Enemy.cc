#include "Enemy.h"

Enemy::Enemy(int HP, int Atk, int Def, int gold, Grid *g , std::string name) :
        Character(HP, Atk, Def, gold, 0, 0, name), g{g} {}

Enemy::~Enemy() {

//    TODO: finish destructor for enemy, probably delete its gold pointer
}

int getERand(int min, int max) {
    double f = 1.0 / (RAND_MAX + 1.0);
    int x = (int) (rand() * f * (max - min + 1) + min); // cast expression to int
    return x;
}

bool Enemy::checkAndPlace(int xDisp, int yDisp) {
    if (g->canPlace(getX() + xDisp, getY() + yDisp)) {
        g->moveOff(getX(), getY());
        g->place(getX() + xDisp, getY() + yDisp, this);
        setX(getX() + xDisp);
        setY(getY() + yDisp);
        return true;
    }
  return false;
}

void Enemy::Move() {

 if (eAttack()) {
  return;
 }

  while(1) {
    int randPos = getERand(0, 7);

    switch (randPos) {
        case 0:
            if (checkAndPlace( 0, -1)) {return;}
        case 1:
            if (checkAndPlace( 1, 0)) {return;}
        case 2:
            if (checkAndPlace( 0, 1)) {return;}
        case 3:
            if (checkAndPlace( -1, 0)) {return;}
        case 4:
            if (checkAndPlace( 1, -1)) {return;}
        case 5:
            if (checkAndPlace( 1, 1)) {return;}
        case 6:
            if (checkAndPlace( -1, 1)) {return;}
        case 7:
            if (checkAndPlace( -1, -1)) {return;}
    }

  }
}

bool Enemy::eAttack() {
 Character *plyr = nullptr;
 int x = getX();
 int y = getY();

 if (g->getChar(x, y - 1) == '@') {
  plyr = g->getCPtr(x, y - 1);
 } else if (g->getChar(x + 1, y - 1) == '@') {
  plyr = g->getCPtr(x + 1, y - 1);
 } else if (g->getChar(x + 1, y) == '@') {
  plyr = g->getCPtr(x + 1, y);
 } else if (g->getChar(x + 1, y + 1) == '@') {
  plyr = g->getCPtr(x + 1, y + 1);
 } else if (g->getChar(x, y + 1) == '@') {
  plyr = g->getCPtr(x, y + 1);
 } else if (g->getChar(x - 1, y + 1) == '@') {
  plyr = g->getCPtr(x - 1, y + 1);
 } else if (g->getChar(x - 1, y) == '@') {
  plyr = g->getCPtr(x - 1, y);
 } else if (g->getChar(x - 1, y - 1) == '@') {
  plyr = g->getCPtr(x - 1, y - 1);
 }


 if (plyr == nullptr) {
  return false;
 }

 if(getERand(1, 2) == 1) {
  strike(*plyr);
 }

 return true;

}

void Enemy::getStruckBy(Character &other) {
 Character::getStruckBy(other);

 if (HP <= 0) {
  g->moveOff(getX(), getY());
  delete this;
 }

}
