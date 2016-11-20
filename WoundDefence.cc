#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>
#include "WoundDefence.h"

//Constructor
WoundDefence::WoundDefence(): symbol{'P'}, amount{-5}, potionType{"WD"} {}

//Returns the amount
int WoundDefence::getAmount(){ return amount;}

//Returns the Symbol for TextDisplay
char WoundDefence::getSym(){ return symbol;}

//Returns the type of potion
std::string WoundDefence::getType(){ return potionType;}

//Destructor
WoundDefence::~WoundDefence(){}