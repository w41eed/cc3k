#include "Cell.h"
#include "Item.h"
#include <iostream>
#include <string>

#ifndef POTIONS_H
#define POTIONS_H

class Potions: Item {
	private:
		int amount; //amount by which the Health,Attack,Defence increases or decreases
		char symbol;
		std::string potionType;
	public:
		Potions(int a, char s, std::string p);
		int getAmount(); //returns the amount
		char getSym(); //retuns the symbol
		std::string getType(); //returns the type of potion
		virtual ~Potions() {} //destructor for Potions
};

#endif
