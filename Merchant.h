//
// Created by john on 20/11/16.
//

#ifndef CC_3K_MERCHANT_H
#define CC_3K_MERCHANT_H

#include "Enemy.h"


class Merchant: public Enemy {
public:
    Merchant(Grid *);
    char getChar() override;
    int attack(Player *p) override;
};


#endif //CC_3K_MERCHANT_H
