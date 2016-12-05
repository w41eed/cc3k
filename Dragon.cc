//
// Created by john on 20/11/16.
//

#include "Dragon.h"
#include "Player.h"
#include <math.h>

// ctor
Dragon::Dragon(Grid *g, DragonGold *ptr) : Enemy(150, 20, 20, 6, g ,"Dragon"), ptr{ptr} {

}

//dtor
Dragon::~Dragon() {
 ptr = nullptr;
}

// gets char to be printed
char Dragon::getChar() {
    return 'D';
}

// struck by a Character
void Dragon::getStruckBy(Character &other) {
 int net = ceil((100.0 / (100.0 + static_cast<float>(Def))) * static_cast<float>(other.getAtk()));

 if (net <= 0) {
  net = 0;
 }
 HP -= net;
 if (HP <= 0) {
  ptr->truePick();
  HP = 0;
 }

 if(other.getName() == "Goblin") {
  other.setG(5);
 }

}
