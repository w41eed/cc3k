//
// Created by john on 20/11/16.
//

#include "Elf.h"
#include "Player.h"

Elf::Elf(Grid *g): Enemy(140, 30, 10, 2, g) {

}

char Elf::getChar() {
    return 'E';
}

int Elf::attack(Player *p) {
 return 0;
}
