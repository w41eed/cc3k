#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Gold.h"

//Constructor
Gold::Gold(int n, char s): value{n}, symbol{s} {}

//returns the gold value
int Gold::getVal(){ return value;}

//returns the gold symbol
char Gold::getSym(){ return symbol;}

std::string Gold::getType() {return "Gold";}