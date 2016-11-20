//
// Created by john on 20/11/16.
//

#ifndef CC_3K_HALFING_H
#define CC_3K_HALFING_H


#include "Enemy.h"

class Halfing: public Enemy {
public:
    Halfing();
    void move() override;

};


#endif //CC_3K_HALFING_H
