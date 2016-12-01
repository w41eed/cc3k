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

void BoostDefence::usePotion(Player &p) {
    const int DefGain = 5;
    p.setAtk(DefGain);
}

int BoostDefense::getAtk(){
    const int AtkGain = 0;
    return AtkGain + innerPlayer->getAtk();
}

int BoostDefense::getDef(){
    const int DefGain = 5;
    return DefGain + innerPlayer->getDef();
}
