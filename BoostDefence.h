#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>

#ifndef BOOST_DEFENCE_H
#define BOOST_DEFENCE_H

class BoostDefence :public Potions {
public:
	BoostDefence(); //constructor. initializes the amount to +5, symbol = P, 
					 //potionType = BD
	
	~BoostDefence(); // dtor

	void usePotion(Character *c) override; //applies potion effect on player
};




#endif
