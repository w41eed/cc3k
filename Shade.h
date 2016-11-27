#ifndef SHADE_H
#define SHADE_H


#include "Player.h"
#include "Enemy.h"

class Shade: public Player {

public:
Shade(); // ctor
void strike(Enemy &) override; // strikes an enemy
void getStruckBy(Enemy &) override; // gets struck by an enemy

};

#endif
