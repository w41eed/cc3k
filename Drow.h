#ifndef DROW_H
#define DROW_H

#include "Player.h"
#include "Enemy.h"

class Drow: public Player {

public:
 Drow(); // ctor
 void strike(Character &) override; // strikes an enemy
 void getStruckBy(Character &) override; // gets struck by an enemy


};

#endif
