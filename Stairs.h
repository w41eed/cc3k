#ifndef STAIRS_H
#define STAIRS_H

#include <iostream>
#include "Item.h"
#include <string>

class Stairs : public Item {
	private:
		char symbol = '/'; // stairs symbol
		int col; // col in which placed
		int row; // row in which placed
	public:
		Stairs(); //constructor
		char getSym() override; //returns the symbol
		std::string getType(); //does nothing
		~Stairs(); // dtor
                int getVal() {return -1;} // stair value
};



#endif
