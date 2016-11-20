#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>
#include "BoostAttack.h"

//Constructor
BoostAttack::BoostAttack(): symbol{'P'}, amount{5}, potionType{"BA"} {}

//Returns the amount
int BoostAttack::getAmount(){ return amount;}

//Returns the Symbol for TextDisplay
char BoostAttack::getSym(){ return symbol;}

//Returns the type of potion
std::string BoostAttack::getType(){ return potionType;}

//Destructor
BoostAttack::~RBoostAttack(){}