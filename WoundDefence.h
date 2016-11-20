#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>

#ifndef WOUND_DEFENCE_H
#define WOUND_DEFENCE_H


class WoundDefence : Potions {
public:
	WoundDefence (); //constructor. initializes the amount to -5, symbol = P, 
					 //potionType = WD
	int getAmount(); //gets the amount
	char getSym(); //gets the symbol
	std:string getType(); //gets the type of potion
	~WoundDefence ();

};

#endif
