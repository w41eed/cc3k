#include <iostream>
#include "Item.h"
#include <string>
#include "Stairs.h"

//Constructor
Stairs::Stairs() {}


//returns the symbol for textdisplay
char Stairs::getSym(){return symbol;}


std::string Stairs::getType() {return "Stairs";}

//destructor
Stairs::~Stairs(){}
