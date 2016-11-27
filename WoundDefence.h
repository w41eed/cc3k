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
	
	~WoundDefence ();

};

#endif
