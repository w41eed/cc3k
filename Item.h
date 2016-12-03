#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include "Cell.h"
#include "Character.h"

class Item {
	public:
	virtual char getSym() = 0;
	virtual std::string getType() = 0;
//	virtual ~Item() {};
    virtual void usePotion(Character *c) {};

};

#endif
