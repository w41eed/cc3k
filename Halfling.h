//
// Created by john on 20/11/16.
//

#ifndef CC_3K_HALFING_H
#define CC_3K_HALFING_H

#include "Enemy.h"

class Halfling: public Enemy {
public:
    Halfling(Grid *); // ctor
    char getChar() override; // gets char to be printed
    void getStruckBy(Character &); // struck by Character, 50% miss
};


#endif //CC_3K_HALFING_H
