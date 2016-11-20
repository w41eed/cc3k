#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Gold.h"

#ifndef NORMAL_GOLD_H
#define NORMAL_GOLD_H

class NormalGold: Gold {
	public:
		NormalGold(); //Constructs a NormalGold with value 2
		char getSym(); //returns the symbol to be displayed on TextDisplay
		int getVal(); //Returns the value of the Gold (2 in this case)
		~NormalGold();



};

#endif