#include "Cell.h"
#include "Item.h"
#include "Gold.h"

#ifndef DRAGON_GOLD_H
#define DRAGON_GOLD_H

class DragonGold: public Gold {
		int pickable;
	public:
		DragonGold(); //Constructs a DragonGold with value 6
		~DragonGold();
		void truePick();
		char dSym() override;


};

#endif
