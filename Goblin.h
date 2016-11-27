#ifndef GOBLIN_H
#define GOBLIN_H

#include "Player.h"
#include "Enemy.h"

class Goblin: public Player {


public:
 Goblin(); // ctor
 void strike(Enemy &) override; // strikes an enemy
 void getStruckBy(Enemy &) override; // gets struck by an enemy
};

#endif
