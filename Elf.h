//
// Created by john on 20/11/16.
//

#ifndef CC_3K_ELF_H
#define CC_3K_ELF_H


#include "Enemy.h"

class Elf: public Enemy {
public:
    Elf(Grid *); // ctor
    char getChar() override; // gets char to be printed
};


#endif //CC_3K_ELF_H
