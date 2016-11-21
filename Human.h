//
// Created by john on 19/11/16.
//

#ifndef _HUMAN_H
#define _HUMAN_H

#include "Enemy.h"

class Human: public Enemy {
public:
    Human();
    void move() override;
    char getChar() override;
    int attack(Player *p) override;
};


#endif //CC_3K_HUMAN_H
