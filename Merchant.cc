//
// Created by john on 20/11/16.
//

#include "Merchant.h"
#include "Enemy.h"
#include "Player.h"

// ctor
Merchant::Merchant(Grid *g): Enemy(30, 70, 5, 4, g){

}

// gets char to be printed
char Merchant::getChar() {
    return 'M';
}
