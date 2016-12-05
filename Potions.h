#ifndef POTIONS_H
#define POTIONS_H

#include "Cell.h"
#include "Item.h"
#include <iostream>
#include <string>
#include "Player.h"

class Potions: public Item {
	private:
		int amount; //amount by which the Health,Attack,Defence increases or decreases
		char symbol; // potion symbol
		std::string potionType; // type of potion
	public:
		Potions(int a, char s, std::string p); // ctor
		int getAmount(); //returns the amount
		char getSym(); //retuns the symbol
		std::string getType(); //returns the type of potion
		virtual ~Potions() {}; //destructor for Potions
                int getVal() {return -1;} // potion value
};

#endif
