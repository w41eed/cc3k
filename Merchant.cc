//
// Created by john on 20/11/16.
//

#include "Merchant.h"
#include "Enemy.h"
#include "Player.h"
#include "MerchantGold.h"
#include "Controller.h"
#include <math.h>

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
 int net = ceil((100.0 / (100.0 + static_cast<float>(Def))) * static_cast<float>(other.getAtk()));

 if (net <= 0) {
     net = 0;
 }
 HP -= net;
 if (HP <= 0) {
     HP = 0;
     if (other.getName() == "Goblin") {
         other.setG(5);
         return;
     }
 }
}

// strikes after checking hostility
void Merchant::strike(Character &other) {
 if (isHostile == true) {
  Enemy::strike(other);
 } else {
  return;
 }
}
