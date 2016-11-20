#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>
#include "PoisonHealth.h"

//Constructor
PoisonHealth::PoisonHealth(): symbol{'P'}, amount{-10}, potionType{"PH"} {}

//Returns the amount
int PoisonHealth::getAmount(){ return amount;}

//Returns the Symbol for TextDisplay
char PoisonHealth::getSym(){ return symbol;}

//Returns the type of potion
std::string PoisonHealth::getType(){ return potionType;}

//Destructor
PoisonHealth::~PoisonHealth(){}