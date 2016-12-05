#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>
#include "PoisonHealth.h"

//Constructor
PoisonHealth::PoisonHealth():Potions(-10,'P',"PH") {}


//Destructor
PoisonHealth::~PoisonHealth(){}

//player uses potion
void PoisonHealth::usePotion(Character *c) {
    const int HPLose = getAmount();
    const double DrowPotionMultiplier = 1.5;
    if (c->getName() == "Drow") {
        c->setHealth((int) (DrowPotionMultiplier * HPLose));
    } else {
        c->setHealth(HPLose);
    }
}
