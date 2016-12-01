#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include "Cell.h"
#include "Player.h"

class Item: public Player {
protected:
Player* innerPlayer; // Item is the decorator, so it must have a composition of another player

public:
	virtual char getSym() = 0;
	virtual ~Item() {}

};

#endif
