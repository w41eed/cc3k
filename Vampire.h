#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "Player.h"
#include "Enemy.h"

class Vampire: public Player {

public:
 Vampire(); // ctor
 void strike(Character &) override; // strikes an enemy
 void getStruckBy(Character &) override; // gets struck by an enemy


};




#endif
