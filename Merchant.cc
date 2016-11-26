//
// Created by john on 20/11/16.
//

#include "Merchant.h"
#include "Enemy.h"
#include "Player.h"

Merchant::Merchant(Grid *g): Enemy(30, 70, 5, 4, g){

}


char Merchant::getChar() {
    return 'M';
}

int Merchant::attack(Player *p) {
 return 0;
}
