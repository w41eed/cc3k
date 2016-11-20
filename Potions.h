#include "Cell.h"
#include "Item.h"
#include <iostream>
#include <string>

#ifndef POTIONS_H
#define POTIONS_H

class Potions: Item {
	protected:
		int amount; //amount by which the Health,Attack,Defence increases or decreases
		char symbol;
		std::string potionType;
		virtual int getAmount() = 0; //returns the amount
		virtual char getSym() = 0; //retuns the symbol
		virtual std::string getType() = 0; //returns the type of potion
		virtual ~Potions() {} //destructor for Potions
};