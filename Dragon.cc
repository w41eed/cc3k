//
// Created by john on 20/11/16.
//

#include "Dragon.h"
#include "Player.h"

// ctor
Dragon::Dragon(Grid *g) : Enemy(150, 20, 20, 6, g ,"Dragon") {

}

// gets char to be printed
char Dragon::getChar() {
    return 'D';
}
