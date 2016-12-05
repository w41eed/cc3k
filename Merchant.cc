//
// Created by john on 20/11/16.
//

#include "Merchant.h"
#include "Enemy.h"
#include "Player.h"
#include "MerchantGold.h"

// ctor
Merchant::Merchant(Grid *g): Enemy(30, 70, 5, 0, g, "Merchant"){

}

// dtor
Merchant::~Merchant() {
  int x = getX();
  int y = getY();

 MerchantGold *mg = new MerchantGold;
 if (g->place(x, y, mg) == false) {
  delete mg;
 }
}

// gets char to be printed
char Merchant::getChar() {
    return 'M';
}

// gets struck by and sets hostility
void Merchant::getStruckBy(Character &other) {
 isHostile = true;
 Character::getStruckBy(other);
}

// strikes after checking hostility
void Merchant::strike(Character &other) {
 if (isHostile == true) {
  Enemy::strike(other);
 } else {
  return;
 }
}
