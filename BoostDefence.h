#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>

#ifndef BOOST_DEFENCE_H
#define BOOST_DEFENCE_H

class BoostDefence : Potions {
public:
	BoostDefence(); //constructor. initializes the amount to +5, symbol = P, 
					 //potionType = BD
	int getAmount(); //gets the amount
	char getSym(); //gets the symbol
	std::string getType(); //gets the type of potion
	~BoostDefence();

};




#endif