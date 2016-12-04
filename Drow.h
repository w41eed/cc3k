
#ifndef DROW_H
#define DROW_H

#include "Player.h"
#include "Enemy.h"
#include "Elf.h"

class Drow: public Player {
public:
 Drow(); // ctor
 void getStruckBy(Elf &other); // Elf strikes Drow only once
};

#endif
