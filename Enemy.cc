#include "Enemy.h"
#include <iostream>

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

void Enemy::checkAndPlace(int xDisp, int yDisp) {
    if (g->canWalk(getX() + xDisp, getY() + yDisp)) {
        g->moveOff(getX(), getY());
        g->place(getX() + xDisp, getY() + yDisp, this);
        setX(getX() + xDisp);
        setY(getY() + yDisp);
    }

}

void Enemy::Move() {

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
            checkAndPlace( 0, -1);
        case 1:
            checkAndPlace( 1, 0);
        case 2:
            checkAndPlace( 0, 1);
        case 3:
            checkAndPlace( -1, 0);
        case 4:
            checkAndPlace( 1, -1);
        case 5:
            checkAndPlace( 1, 1);
        case 6:
            checkAndPlace( -1, 1);
        case 7:
            checkAndPlace( -1, -1);
    }
}
