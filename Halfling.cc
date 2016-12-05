//
// Created by john on 20/11/16.
//

#include "Halfling.h"
#include "Controller.h" // include controller for getRand(int, int)
#include <math.h>

// ctor
Halfling::Halfling(Grid *g): Enemy(100, 15, 20, 1, g, "Halfling"){

}

// gets char to be printed
char Halfling::getChar() {
    return 'L';
}

// struck by Character, 50% miss
void Halfling::getStruckBy(Character &other) {
    int net = ceil((100.0 / (100.0 + static_cast<float>(Def))) * static_cast<float>(other.getAtk()));
    net = net + (net / 2);

    if (net <= 0) {
        net = 0;
    }

    const int hitOrMiss = getRand(0,1);

    if (hitOrMiss) {
        HP -= net; // if random number is 1, then hit by player
    }
    if (HP <= 0) {
        HP = 0;
    }

}
