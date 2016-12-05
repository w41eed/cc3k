//
// Created by john on 20/11/16.
//

#ifndef CC_3K_MERCHANT_H
#define CC_3K_MERCHANT_H

#include "Enemy.h"


class Merchant: public Enemy {
    static bool isHostile; // shared hostility towards Player Character

public:
    Merchant(Grid *); // ctor
    ~Merchant(); //dtor
    char getChar() override; // gets char to be printed
    void getStruckBy(Character &) override; // gets struck by and sets hostility
    void strike(Character &) override; // strikes after checking hostility
};


#endif //CC_3K_MERCHANT_H
