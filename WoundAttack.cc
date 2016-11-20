#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>
#include "WoundAttack.h"

//Constructor
WoundAttack::WoundAttack(){
	symbol = 'P';
  	amount = (-5);
  	potionType = "WA";
}

//Returns the amount
int WoundAttack::getAmount(){ return amount;}

//Returns the Symbol for TextDisplay
char WoundAttack::getSym(){ return symbol;}

//Returns the type of potion
std::string WoundAttack::getType(){ return potionType;}

//Destructor
WoundAttack::~WoundAttack(){}