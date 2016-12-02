#include <iostream>
#include "Cell.h"

#ifndef ITEM_H
#define ITEM_H

class Item {
	public:
	virtual char getSym() = 0;
	virtual ~Item() {}	
    virtual void usePotion(Character *c);

};

#endif
