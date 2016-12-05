#ifndef RESTORE_HEALTH_H
#define RESTORE_HEALTH_H

#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>

class RestoreHealth : public Potions {
public:
	RestoreHealth(); //constructor. initializes the amount to +10, symbol = P, 
					 //potionType = RH
	
	~RestoreHealth(); // dtor
	void usePotion(Character *c) override;
	//use potion
};








#endif
