//
// Created by john on 19/11/16.
//

#ifndef _HUMAN_H
#define _HUMAN_H

#include "Enemy.h"

class Human: public Enemy {
public:
    Human(Grid *); // ctor
    char getChar() override; // gets char to be printed
};


#endif //CC_3K_HUMAN_H
