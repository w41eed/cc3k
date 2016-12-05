#ifndef GOBLIN_H
#define GOBLIN_H

#include "Player.h"
#include "Enemy.h"
#include "Orc.h"

class Goblin: public Player {


public:
 Goblin(); // ctor
 void getStruckBy(Orc &); // struck by Orc
};

#endif
