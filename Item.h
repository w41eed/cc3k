#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include "Cell.h"
#include "Character.h"

class Item {
	int xCo; // x coordinate
	int yCo; // y coordinate

	public:
	virtual char getSym() = 0; // gets Item symbol
	virtual char dSym(); // dragon symbol case
	virtual std::string getType() = 0; // gets Item type
	virtual ~Item() {}; // dtor
        virtual void usePotion(Character *c) {}; // uses potion
	virtual int getVal() {return 0;} // gets value

};

#endif
