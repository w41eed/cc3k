#ifndef TROLL_H
#define TROLL_H

#include "Player.h"
#include "Enemy.h"

class Troll: public Player {


public:
 Troll(); //ctor
 void strike(Character &) override;
 void getStruckBy(Character &) override;

};

#endif
