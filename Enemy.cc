#include "Enemy.h"

Enemy::Enemy(int HP, int Atk, int Def, int gold) :
        Character(HP, Atk, Def, gold, 0, 0) {}

Enemy::~Enemy() {

//    TODO: finish destructor for enemy, probably delete its gold pointer
}

int getRand(int min, int max) {
    double f = 1.0 / (RAND_MAX + 1.0);
    int x = (int) (rand() * f * (max - min + 1) + min); // cast expression to int
    return x;
}

void checkAndPlace(int xDisp, int yDisp, Enemy& e, Grid g) {
    if (g->canWalk(e..getX(), e.getY())) {
        g->moveOff(e.getX(), e.getY());
        g->place(e.getX() + xDisp, e.getY() + yDisp, e);
        e.setX(e.getX() + xDisp);
        e.setY(e.getY() + yDisp);
    }
}

void Enemy::move() {
    int randPos = getRand(0, 7);

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
            checkAndPlace( 0, -1, *this, g);
        case 1:
            checkAndPlace( 1, 0, *this, g);
        case 2:
            checkAndPlace( 0, 1, *this, g);
        case 3:
            checkAndPlace( -1, 0, *this, g);
        case 4:
            checkAndPlace( 1, -1, *this, g);
        case 5:
            checkAndPlace( 1, 1, *this, g);
        case 6:
            checkAndPlace( -1, 1, *this, g);
        case 7:
            checkAndPlace( -1, -1, *this, g);
    }
}
