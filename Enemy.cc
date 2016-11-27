#include "Enemy.h"

Enemy::Enemy(int HP, int Atk, int Def, int gold, Grid *g) :
        Character(HP, Atk, Def, gold, 0, 0), g{g} {}

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
  while(1) {
    int randPos = getERand(0, 7);

//    Use code below if switch case doesn't work
//    if (randPos == 0) {
//        if (g->canWalk(getX(), getY())) {
//            g->moveOff(getX(), getY());
//            g->place(getX(), getY() - 1, this);
//            this->setX(getX());
//            this->setY(getY() - 1);
//        }
//    }

//    0 = north, 1 = east, 2 = south, 3 = west, 4 = north/east,
//    5 = south/east, 6 = south/west, 7 = north/west
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
