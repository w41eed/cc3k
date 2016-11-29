#ifndef SHADE_H
#define SHADE_H


#include "Player.h"
#include "Enemy.h"
#include "Elf.h"

class Shade: public Player {

public:
Shade(); // ctor
void getStruckBy(Elf &); // get struck by an Elf
};

#endif
