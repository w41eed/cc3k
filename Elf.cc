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

// strikes player
void Elf::strike(Character &other) {
 other.getStruckBy(*this);

}

// gets struck by player
void Elf::getStruckBy(Character &other) {
 int net = other.getAtk() - Def;
 if (net <= 0) {
  net = 0;
 }

 HP -= net;

}
