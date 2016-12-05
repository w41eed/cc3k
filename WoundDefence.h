#ifndef WOUND_DEF
#define WOUND_DEF

#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>

class WoundDefence : public Potions {
public:
	WoundDefence (); //constructor. initializes the amount to -5, symbol = P, 
					 //potionType = WD
	
	~WoundDefence (); // dtor

	void usePotion(Character *c) override; // use a potion
};

#endif
