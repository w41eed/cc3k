//
// Created by john on 20/11/16.
//

#ifndef CC_3K_HALFING_H
#define CC_3K_HALFING_H


#include "Enemy.h"

class Halfling: public Enemy {
public:
    Halfling(Grid *);
    char getChar() override;
    int attack(Player *p) override;
};


#endif //CC_3K_HALFING_H
