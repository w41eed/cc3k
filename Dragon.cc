//
// Created by john on 20/11/16.
//

#include "Dragon.h"
#include "Player.h"

// ctor
Dragon::Dragon(Grid *g) : Enemy(150, 20, 20, 6, g) {

}

// gets char to be printed
char Dragon::getChar() {
    return 'D';
}

// strikes player
void Dragon::strike(Character &other) {
 return;
}

// gets struck by player
void Dragon::getStruckBy(Character &other) {
 return;
}
