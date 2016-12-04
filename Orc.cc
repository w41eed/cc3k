//
// Created by john on 20/11/16.
//

#include "Orc.h"
#include "Player.h"


// ctor
Orc::Orc(Grid *g): Enemy(180, 30, 25, 1, g, "Orc") {}

// gets char to be printed
char Orc::getChar() {
    return 'O';
}
