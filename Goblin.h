#ifndef GOBLIN_H
#define GOBLIN_H

#include "Player.h"
#include "Enemy.h"

class Goblin: public Player {


public:
 Goblin(); // ctor
 void strike(Character &) override; // strikes an enemy
 void getStruckBy(Character &) override; // gets struck by an enemy
};

#endif
