#include "Enemy.h"
#include <iostream>

// ctor
Enemy::Enemy(int HP, int Atk, int Def, int gold, Grid *g , std::string name) :
        Character(HP, Atk, Def, gold, 0, 0, name), g{g} {}

// dtor
Enemy::~Enemy() {}

// gets random number
int getERand(int min, int max) {
    double f = 1.0 / (RAND_MAX + 1.0);
    int x = static_cast<int>(rand() * f * (max - min + 1) + min); // cast expression to int
    return x;
}

// checks if can move and moves Enemy there
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

// updates Enemy
bool Enemy::Update(bool eMove) {
 if (HP <= 0) {
  g->moveOff(getX(), getY());

  

  return true;
 }
 if (eAttack()) {
  return false;
 } else if (eMove == false) {
  return false;
 }

  while(1) {
    int randPos = getERand(0, 7);

    switch (randPos) {
        case 0:
            if (checkAndPlace( 0, -1)) {return false;}
        case 1:
            if (checkAndPlace( 1, 0)) {return false;}
        case 2:
            if (checkAndPlace( 0, 1)) {return false;}
        case 3:
            if (checkAndPlace( -1, 0)) {return false;}
        case 4:
            if (checkAndPlace( 1, -1)) {return false;}
        case 5:
            if (checkAndPlace( 1, 1)) {return false;}
        case 6:
            if (checkAndPlace( -1, 1)) {return false;}
        case 7:
            if (checkAndPlace( -1, -1)) {return false;}
    }

  }

 return false;

}

// checks tiles
bool Enemy::checkTiles(int x, int y) {
 char c = g->getChar(x, y);

 if (c == '.') {
  return false;
 } else if (c == '-' || c == '|') {
  return false;
 } else if (c == '#') {
  return false;
 } else if (c == '+') {
  return false;
 } else if (c == 'D') {
  return false;
 }
 return true;
}

// dragon attack
void Enemy::dAttack(const int x, const int y, Character *other) {
 if (checkTiles(x, y - 1)) {
  other = g->getCPtr(x, y - 1);
 } else if (checkTiles(x + 1, y - 1)) {
  other = g->getCPtr(x + 1, y - 1);
 } else if (checkTiles(x + 1, y)) {
  other = g->getCPtr(x + 1, y);
 } else if (checkTiles(x + 1, y + 1)) {
  other = g->getCPtr(x + 1, y + 1);
 } else if (checkTiles(x, y + 1)) {
  other = g->getCPtr(x, y + 1);
 } else if (checkTiles(x - 1, y + 1)) {
  other = g->getCPtr(x - 1, y + 1);
 } else if (checkTiles(x - 1, y)) {
  other = g->getCPtr(x - 1, y);
 } else if (checkTiles(x - 1, y - 1)) {
  other = g->getCPtr(x - 1, y - 1);
 }

 if (other) {
  if (getERand(1, 2) == 1) {
   strike(*other);
  }
 }
}



// Enemy attack
bool Enemy::eAttack() {

 Character *plyr = nullptr;
 int x = getX();
 int y = getY();

 if (getChar() == 'D') {
  dAttack(x, y, plyr);
  return true;
 }

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

 if(getChar() == 'L'){ strike(*plyr);}

 else if(getERand(1, 2) == 1) {
  strike(*plyr);
 }

 return true;

}
