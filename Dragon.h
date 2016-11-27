//
// Created by john on 20/11/16.
//

#ifndef CC_3K_DRAGON_H
#define CC_3K_DRAGON_H


#include "Enemy.h"

class Dragon: public Enemy {
public:
    Dragon(Grid *);
    char getChar() override;
    int attack(Player *p) override;
};


#endif //CC_3K_DRAGON_H
