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

void PoisonHealth::usePotion(Player &p) {
    const int HPLose = -10;
    p.setHealth(HPLose);
}