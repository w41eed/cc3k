#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "Player.h"
#include "Enemy.h"

class Vampire: public Player {

public:
 Vampire(); // ctor
 void strike(Enemy &) override; // strikes an enemy
 void getStruckBy(Enemy &) override; // gets struck by an enemy


};




#endif
