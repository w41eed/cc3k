//
// Created by john on 20/11/16.
//

#ifndef CC_3K_ORC_H
#define CC_3K_ORC_H

#include "Enemy.h"

class Orc: public Enemy {
public:
    Orc(Grid *);
    char getChar() override;
    int attack(Player *p) override;
};


#endif //CC_3K_ORC_H
