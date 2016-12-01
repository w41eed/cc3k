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

void WoundDefence::usePotion(Player &p) {
    const int DefLoss = -5;
    p.setAtk(DefLoss);
}

int WoundDefence::getAtk(){
    const int AtkGain = 0;
    return AtkGain + innerPlayer->getAtk();
}

int WoundDefence::getDef(){
    const int DefLoss = -5;
    return DefLoss + innerPlayer->getDef();
}
