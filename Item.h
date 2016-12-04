#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include "Cell.h"
#include "Character.h"

class Item {
	int xCo;
	int yCo;

	public:
	virtual char getSym() = 0;
	virtual char dSym();
	virtual std::string getType() = 0;
	virtual ~Item() {};
        virtual void usePotion(Character *c) {};
	virtual int getVal() {return 0;}

};

#endif
