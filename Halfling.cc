//
// Created by john on 20/11/16.
//

#include "Halfling.h"

Halfling::Halfling(): Enemy(100, 15, 20, 1){

}

void Halfling::move() {

}

char Halfling::getChar() {
    return 'L';
}

int Halfling::attack(Player *p) {
 return 0;
}
