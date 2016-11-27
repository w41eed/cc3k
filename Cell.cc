#include "Cell.h"
#include <iostream>

// dtor
Cell::~Cell() {
 delete c;
}

//cleans the cell
void Cell::cleanCell(){
	std::cout << "entered cleanCell in Cell" << std::endl;
	delete i;
	i = nullptr;
	char cx = c->getChar();
	if(cx != '@'){
    delete c;
	c = nullptr;
	}
	else { 
		c = nullptr;
	}
}
// ctor
Cell::Cell(char symbol, int x, int y) :
  symbol{symbol}, x{x}, y{y}, c{nullptr}, i{nullptr} {}

// returns x coordinate
int Cell::getX() {
 return x;
}

// returns y coordinate
int Cell::getY() {
 return y;
}

/*
//determines if player is on stairs
bool Cell::nextFloor(){
	if(i != nullptr && c != nullptr){
		char ix = i->getSym();
		char cx = c->getChar();
		if(ix == '/' && cx == '@'){ return true;}
	}
}
*/