#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "Player.h"
#include "Enemy.h"
#include "Elf.h"

class Vampire: public Player {

public:
 Vampire(); // ctor
 void setHealth(int) override; // sets health without health limit
 void strike(Character &) override; // strike a Character and modify health
};




#endif
