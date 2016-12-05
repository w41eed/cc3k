//
// Created by john on 20/11/16.
//

#ifndef CC_3K_DRAGON_H
#define CC_3K_DRAGON_H


#include "Enemy.h"
#include "DragonGold.h"

class Dragon: public Enemy {
    DragonGold *ptr; // pointer to gold protected by Dragon
public:
    Dragon(Grid *, DragonGold *); // ctor
    ~Dragon(); // dtor
    char getChar() override; // gets char to be printed
    void getStruckBy(Character &) override; // struck by a Character
};


#endif //CC_3K_DRAGON_H
