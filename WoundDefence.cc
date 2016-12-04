#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>
#include "WoundDefence.h"

//Constructor
WoundDefence::WoundDefence(): Potions(-5,'P',"WD") {}


//Destructor
WoundDefence::~WoundDefence(){}

void WoundDefence::usePotion(Character *c) {
    const int DefLoss = getAmount();
    c->setAtk(DefLoss);
}