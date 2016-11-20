#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Gold.h"

#ifndef SMALL_GOLD_H
#define SMALL_GOLD_H

class SmallGold: Gold {
	public:
		SmallGold(); //Constructs a SmallGold with value 1
		char getSym(); //returns the symbol to be displayed on TextDisplay
		int getVal(); //Returns the value of the Gold (1 in this case)
		~SmallGold();



};

#endif