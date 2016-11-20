#include "Item.h"
#include <iostream>
#include "Gold.h"
#include "SmallGold.h"

//Constructor for SmallGold
SmallGold::SmallGold(){
	value = 1;
	symbol = 'G';
}

//Returns the value of SmallGold
int SmallGold::getVal(){ return value;}

//Returns the Symbol of gold
char SmallGold::getSym(){ return symbol;}

//Destructor for SmallGold
SmallGold::~SmallGold() {}

