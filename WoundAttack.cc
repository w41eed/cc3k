#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>
#include "WoundAttack.h"

//Constructor
WoundAttack::WoundAttack():Potions(-5,'P',"WA") {}


//Destructor
WoundAttack::~WoundAttack(){}

void WoundAttack::usePotion(Character *c) {
    const int AtkLoss = getAmount();
    c->setAtk(AtkLoss);
}
