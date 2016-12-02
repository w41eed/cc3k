//
// Created by john on 20/11/16.
//

#include "Elf.h"
#include "Player.h"
#include <iostream>
using namespace std;

// ctor
Elf::Elf(Grid *g): Enemy(140, 30, 10, 2, g) {

}

// gets char to be printed
char Elf::getChar() {
    return 'E';
}
