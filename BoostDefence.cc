#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>
#include "BoostDefence.h"

//Constructor
BoostDefence::BoostDefence(): symbol{'P'}, amount{5}, potionType{"BD"} {}

//Returns the amount
int BoostDefence::getAmount(){ return amount;}

//Returns the Symbol for TextDisplay
char BoostDefence::getSym(){ return symbol;}

//Returns the type of potion
std::string BoostDefence::getType(){ return potionType;}

//Destructor
BoostDefence::~BoostDefence(){}