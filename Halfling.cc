//
// Created by john on 20/11/16.
//

#include "Halfling.h"

// ctor
Halfling::Halfling(Grid *g): Enemy(100, 15, 20, 1, g){

}

// gets char to be printed
char Halfling::getChar() {
    return 'L';
}

// strikes player
void Halfling::strike(Player &other) {
 return;
}

// gets struck by player
void Halfling::getStruckBy(Player &other) {
 return;
}
