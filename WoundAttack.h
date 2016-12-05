#ifndef WOUND_ATK
#define WOUND_ATK

#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>

class WoundAttack :public Potions {
public:
	WoundAttack(); //constructor. initializes the amount to -5, symbol = P, 
					 //potionType = WA
	
	~WoundAttack(); // dtor

	void usePotion(Character *c) override; // use a potion

};


#endif
