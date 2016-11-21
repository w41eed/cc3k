//
// Created by john on 20/11/16.
//

#include "Merchant.h"
#include "Enemy.h"
#include "Player.h"

Merchant::Merchant(): Enemy(30, 70, 5, 4){

}

void Merchant::move() {

}

char Merchant::getChar() {
    return 'M';
}

int Merchant::attack(Player *p) {
 return 0;
}
