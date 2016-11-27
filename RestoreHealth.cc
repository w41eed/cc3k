#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>
#include "RestoreHealth.h"

//Constructor
RestoreHealth::RestoreHealth(): Potions(10,'P',"RH") {}


//Destructor
RestoreHealth::~RestoreHealth(){}