//
// Created by john on 20/11/16.
//

#ifndef CC_3K_DRAGON_H
#define CC_3K_DRAGON_H


#include "Enemy.h"

class Dragon: public Enemy {
public:
    Dragon(Grid *); // ctor
    char getChar() override; // gets char to be printed
    void strike(Character &) override; // strikes player
    void getStruckBy(Character &) override; // gets struck by player
};


#endif //CC_3K_DRAGON_H
