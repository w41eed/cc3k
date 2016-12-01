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

void BoostAttack::usePotion(Player &p) {
    const int AtkGain = 5;
    p.setAtk(AtkGain);

}

int BoostAttack::getAtk(){
    const int AtkGain = 5;
    return AtkGain + innerPlayer->getAtk();
}

int BoostAttack::getDef(){
    const int DefGain = 0;
    return DefGain + innerPlayer->getDef();
}
