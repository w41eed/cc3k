#include "Cell.h"
#include <iostream>

// dtor
Cell::~Cell() {
 char car = ' ';

 if (c) {
  car = c->getChar();
 }

 if (car == '@') {
  delete c;
 } else {
  delete c;
 }

 if (i) {
  car = i->getSym();
 }

 if (car!= '/') {
  delete i;
 } else {
  delete i;
 }
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
