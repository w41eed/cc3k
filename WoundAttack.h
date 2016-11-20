#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>

#ifndef WOUND_ATTACK_H
#define WOUND_ATTACK_H

class WoundAttack : Potions {
public:
	WoundAttack(); //constructor. initializes the amount to -5, symbol = P, 
					 //potionType = WA
	int getAmount(); //gets the amount
	char getSym(); //gets the symbol
	std::string getType(); //gets the type of potion
	~WoundAttack();

};


#endif