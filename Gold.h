#include "Cell.h"
#include "Item.h"
#include <iostream>

#ifndef GOLD_H
#define GOLD_H

class Gold: public Item {
	private:
		int value; //amount of gold that gets added to player
		char symbol; //the symbol that gets displayed on TextDisplay
	public:
		Gold(int n, char s); //constructor for Gold
		char getSym(); //returns the Gold symbol
		int getVal(); //returns the gold value
		virtual ~Gold() {} //virtual destructor for gold and types of gold

};

#endif
