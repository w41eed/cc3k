//
// Created by john on 20/11/16.
//

#include "Dragon.h"
#include "Player.h"

Dragon::Dragon(Grid *g) : Enemy(150, 20, 20, 6, g) {

}

char Dragon::getChar() {
    return 'D';
}

int Dragon::attack(Player *p) {
 return 0;
}
