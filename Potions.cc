#include "Cell.h"
#include "Item.h"
#include <iostream>
#include <string>
#include "Potions.h"

//Constructor
Potions::Potions(int a,char s, std::string p): amount{a}, symbol{s}, potionType{p} {}


//Returns the amount
int Potions::getAmount(){ return amount;}

//Returns the Symbol for TextDisplay
char Potions::getSym(){ return symbol;}

//Returns the type of potion
std::string Potions::getType(){ return potionType;}
