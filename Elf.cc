//
// Created by john on 20/11/16.
//

#include "Elf.h"
#include "Player.h"

Elf::Elf(): Enemy(140, 30, 10, 2) {

}

void Elf::move() {
//    TODO: implement move for enemy

}

char Elf::getChar() {
    return 'E';
}

int Elf::attack(Player *p) {
 return 0;
}
