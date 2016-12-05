//
// Created by john on 20/11/16.
//

#include "Elf.h"
#include "Player.h"

// ctor
Elf::Elf(Grid *g): Enemy(140, 30, 10, 2, g, "Elf") {

}

// gets char to be printed
char Elf::getChar() {
    return 'E';
}
