#include "Item.h"
#include <iostream>
#include "Gold.h"
#include "DragonGold.h"

//Constructor for DragonGold
DragonGold::DragonGold(){
	value = 6;
	symbol = 'G';
}

//Returns the value of DragonGold
int DragonGold::getVal(){ return value;}

//Returns the Symbol of gold
char DragonGold::getSym(){ return symbol;}

//Destructor for DragonGold
DragonGold::~DragonGold() {}
