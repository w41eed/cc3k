//
// Created by john on 20/11/16.
//

#ifndef CC_3K_DWARF_H
#define CC_3K_DWARF_H


#include "Enemy.h"

class Dwarf: public Enemy {
public:
    Dwarf(Grid *); // ctor
    char getChar() override; // gets char to be printed
};


#endif //CC_3K_DWARF_H
