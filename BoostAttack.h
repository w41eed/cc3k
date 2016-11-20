#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>

#ifndef BOOST_ATTACK_H
#define BOOST_ATTACK_H

class BoostAttack : Potions {
public:
	BoostAttack(); //constructor. initializes the amount to +5, symbol = P, 
					 //potionType = BA
	int getAmount(); //gets the amount
	char getSym(); //gets the symbol
	std::string getType(); //gets the type of potion
	~BoostAttack();

};




#endif