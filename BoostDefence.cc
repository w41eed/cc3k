#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>
#include "BoostDefence.h"

//Constructor
BoostDefence::BoostDefence(): Potions(5,'P',"BD") {}


//Destructor
BoostDefence::~BoostDefence(){}

//applies potion effect on player
void BoostDefence::usePotion(Character *c) {
    const int DefGain = getAmount();
    const double DrowPotionMultiplier = 1.5;
    if (c->getName() == "Drow") {
        c->setDef((int) (DrowPotionMultiplier * DefGain));
    } else {
        c->setDef(DefGain);
    }
}
