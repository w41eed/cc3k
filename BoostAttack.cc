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

//applies potion effect on player
void BoostAttack::usePotion(Character *c) {
    const int AtkGain = getAmount();
    const double DrowPotionMultiplier = 1.5;
    if (c->getName() == "Drow") {
        c->setAtk((int) (DrowPotionMultiplier * AtkGain));
    } else {
        c->setAtk(AtkGain);
    }
}
