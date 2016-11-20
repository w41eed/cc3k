#include "Cell.h"
#include "Item.h"
#include <iostream>

#ifndef GOLD_H
#define GOLD_H

class Gold: Item{
	protected:
		int value; //amount of gold that gets added to player
		char symbol; //the symbol that gets displayed on TextDisplay
	public:
		virtual char getSym() = 0;
		virtual int getVal() = 0;
		virtual ~Gold() {}

};

#endif