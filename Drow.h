#ifndef DROW_H
#define DROW_H

#include "Player.h"
#include "Enemy.h"

class Drow: public Player {

public:
 Drow(); // ctor
 void strike(Enemy &) override; // strikes an enemy
 void getStruckBy(Enemy &) override; // gets struck by an enemy


};

#endif
