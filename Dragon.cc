//
// Created by john on 20/11/16.
//

#include "Dragon.h"
#include "Player.h"

// ctor
Dragon::Dragon(Grid *g, DragonGold *ptr) : Enemy(150, 20, 20, 6, g ,"Dragon"), ptr{ptr} {

}

//dtor
Dragon::~Dragon() {
 ptr->truePick();
 ptr = nullptr;
}

// gets char to be printed
char Dragon::getChar() {
    return 'D';
}
