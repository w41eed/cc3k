//
// Created by john on 20/11/16.
//

#ifndef CC_3K_ELF_H
#define CC_3K_ELF_H


#include "Enemy.h"

class Elf: public Enemy {
public:
    Elf();
    void move() override;
    char getChar() override;
};


#endif //CC_3K_ELF_H
