#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>

#ifndef POISON_HEALTH_H
#define POISON_HEALTH_H

class PoisonHealth : Potions {
public:
	PoisonHealth(); //constructor. initializes the amount to -10, symbol = P, 
					 //potionType = PH
	int getAmount(); //gets the amount
	char getSym(); //gets the symbol
	std::string getType(); //gets the type of potion
	~PoisonHealth();

};







#endif