//
// Created by john on 20/11/16.
//

#ifndef CC_3K_ORC_H
#define CC_3K_ORC_H

#include "Enemy.h"

class Orc: public Enemy {
public:
    Orc(Grid *); // ctor
    char getChar() override; // gets char to be printed
};


#endif //CC_3K_ORC_H
