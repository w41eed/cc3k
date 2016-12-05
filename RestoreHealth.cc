#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>
#include "RestoreHealth.h"

//Constructor
RestoreHealth::RestoreHealth(): Potions(10,'P',"RH") {}


//Destructor
RestoreHealth::~RestoreHealth(){}

// use potion
void RestoreHealth::usePotion(Character *c) {
    const int HPGain = getAmount();
    const double DrowPotionMultiplier = 1.5;
    if(c->getName() == "Drow") {
        c->setHealth((int) (DrowPotionMultiplier * HPGain));
    } else {
        c->setHealth(HPGain);
    }
}
