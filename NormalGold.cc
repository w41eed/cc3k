#include "Item.h"
#include <iostream>
#include "Gold.h"
#include "NormalGold.h"

//Constructor for NormalGold
NormalGold::NormalGold(): value{2}, symbol{'G'} {}

//Returns the value of NormalGold
int NormalGold::getVal(){ return value;}

//Returns the Symbol of gold
char NormalGold::getSym(){ return symbol;}

//Destructor for NormalGold
NormalGold::~NormalGold() {}
