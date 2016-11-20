#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Gold.h"

#ifndef DRAGON_GOLD_H
#define DRAGON_GOLD_H

class DragonGold: Gold {
	public:
		DragonGold(); //Constructs a DragonGold with value 6
		char getSym(); //returns the symbol to be displayed on TextDisplay
		int getVal(); //Returns the value of the Gold (6 in this case)
		~DragonGold();



};

#endif