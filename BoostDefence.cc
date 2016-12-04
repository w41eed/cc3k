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

void BoostDefence::usePotion(Character *c) {
    const int DefGain = 5;
    c->setAtk(DefGain);
}