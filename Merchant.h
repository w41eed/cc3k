//
// Created by john on 20/11/16.
//

#ifndef CC_3K_MERCHANT_H
#define CC_3K_MERCHANT_H

#include "Enemy.h"


class Merchant: public Enemy {
public:
    Merchant(Grid *); // ctor
    char getChar() override; // gets char to be printed
    void strike(Character &) override; // strikes a player
    void getStruckBy(Character &) override; // gets struck by a player
};


#endif //CC_3K_MERCHANT_H
