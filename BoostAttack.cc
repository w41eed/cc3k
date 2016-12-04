#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>
#include "BoostAttack.h"

//Constructor
BoostAttack::BoostAttack(): Potions(5,'P',"BA") {}


//Destructor
BoostAttack::~BoostAttack(){}

void BoostAttack::usePotion(Character *c) {
    const int AtkGain = getAmount();
    c->setAtk(AtkGain);
}