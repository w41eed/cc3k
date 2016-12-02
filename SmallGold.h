#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Gold.h"

#ifndef SMALL_GOLD_H
#define SMALL_GOLD_H

class SmallGold: public Gold {
	public:
		SmallGold(); //Constructs a SmallGold with value 1
		~SmallGold();



};

#endif
