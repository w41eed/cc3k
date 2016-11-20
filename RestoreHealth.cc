#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>
#include "RestoreHealth.h"

//Constructor
RestoreHealth::RestoreHealth(): symbol{'P'}, amount{10}, potionType{"RH"} {}

//Returns the amount
int RestoreHealth::getAmount(){ return amount;}

//Returns the Symbol for TextDisplay
char RestoreHealth::getSym(){ return symbol;}

//Returns the type of potion
std::string RestoreHealth::getType(){ return potionType;}

//Destructor
RestoreHealth::~RestoreHealth(){}