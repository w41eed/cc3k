#include "Cell.h"
#include <iostream>
#include "Item.h"

// dtor
Cell::~Cell() {
 delete c;
 delete i;
}

//cleans the cell
void Cell::cleanCell(){
	if(i != nullptr){
      char ix = i->getSym();
      if(ix == '/'){
      	i = nullptr;
      }
      else{
       delete i;
	   i = nullptr;
      }
    }
	if(c != nullptr){
	 char cx = c->getChar();
	 if(cx != '@'){
     delete c;
	 c = nullptr;
	 }
	 else { 
		c = nullptr;
	 }
	}
	notifyObservers();
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


//determines if player is on stairs
bool Cell::nextFloor(){
	if(i != nullptr && c != nullptr){
		char ix = i->getSym();
		char cx = c->getChar();
		if(ix == '/' && cx == '@'){ return true;}
	}
	return false;
	
}

//returns a pointer to a character
Character *Cell::getCPtr() {
 return c;
}

//retuns a pointer to an item
Item *Cell::getIPtr() {
 return i;
}

// takes item off of Cell
void Cell::takeOff() {
 i = nullptr;
 notifyObservers();
}
