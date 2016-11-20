#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>

#ifndef RESTORE_HEALTH_H
#define RESTORE_HEALTH_H

class RestoreHealth : Potions {
public:
	RestoreHealth(); //constructor. initializes the amount to +10, symbol = P, 
					 //potionType = RH
	int getAmount(); //gets the amount
	char getSym(); //gets the symbol
	std::string getType(); //gets the type of potion
	~RestoreHealth();

};








#endif