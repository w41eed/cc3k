#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>

#ifndef RESTORE_HEALTH_H
#define RESTORE_HEALTH_H

class RestoreHealth : public Potions {
public:
	RestoreHealth(); //constructor. initializes the amount to +10, symbol = P, 
					 //potionType = RH
	
	~RestoreHealth();
	void usePotion(Character *c) override;
};








#endif
