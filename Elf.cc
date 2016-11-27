//
// Created by john on 20/11/16.
//

#include "Elf.h"
#include "Player.h"

// ctor
Elf::Elf(Grid *g): Enemy(140, 30, 10, 2, g) {

}

// gets char to be printed
char Elf::getChar() {
    return 'E';
}

// strikes player
void Elf::strike(Player &other) {
 return;
}

// gets struck by player
void Elf::getStruckBy(Player &other) {
 return;
}
