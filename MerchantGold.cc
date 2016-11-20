#include "Item.h"
#include <iostream>
#include "Gold.h"
#include "MerchantGold.h"

//Constructor for MerchantGold
MerchantGold::MerchantGold(){
	value = 4;
	symbol = 'G';
}

//Returns the value of MerchantGold
int MerchantGold::getVal(){ return value;}

//Returns the Symbol of gold
char MerchantGold::getSym(){ return symbol;}

//Destructor for MerchantGold
MerchantGold::~MerchantGold() {}
