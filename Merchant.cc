//
// Created by john on 20/11/16.
//

#include "Merchant.h"
#include "Enemy.h"
#include "Player.h"
#include <iostream>
using namespace std;

// ctor
Merchant::Merchant(Grid *g): Enemy(30, 70, 5, 4, g, "Merchant"){

}

// gets char to be printed
char Merchant::getChar() {
    return 'M';
}

void Merchant::getStruckBy(Character &other) {
 isHostile = true;
 Character::getStruckBy(other);
}

void Merchant::strike(Character &other) {
 if (isHostile == true) {
  Enemy::strike(other);
 } else {
  return;
 }
}
