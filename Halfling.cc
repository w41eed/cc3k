//
// Created by john on 20/11/16.
//

#include "Halfling.h"
#include "Controller.h" // include controller for getRand(int, int)

// ctor
Halfling::Halfling(Grid *g): Enemy(100, 15, 20, 1, g, "Halfling"){

}

// gets char to be printed
char Halfling::getChar() {
    return 'L';
}

void Halfling::getStruckBy(Character &other) {
    int net = other.getAtk() - Def;
    net = net + (net / 2);

    if (net <= 0) {
        net = 0;
    }

    const int hitOrMiss = getRand(0,1);

    if (hitOrMiss) {
        HP -= net; // if random number is 1, then hit and player
    }
    if (HP <= 0) {
        HP = 0;
    }

}
