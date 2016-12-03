#include <iostream>
#include "Item.h"
#include <string>

#ifndef STAIRS_H
#define STAIRS_H

class Stairs : public Item {
	private:
		char symbol = '/';
		int col;
		int row;
	public:
		Stairs(); //constructor
		char getSym() override; //returns the symbol
		std::string getType(); //does nothing
		~Stairs();
};



#endif
