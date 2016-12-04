#include "Item.h"
#include <iostream>
#include "Gold.h"
#include "DragonGold.h"

//Constructor for DragonGold
DragonGold::DragonGold(): Gold(6,'G'), pickable{false} {}

//Destructor for DragonGold
DragonGold::~DragonGold() {}

// gets symbol depending if it is pickable or not
char DragonGold::dSym() {
 if (pickable) {
  return 'G';
 } else {
  return 'Z';
 }
}

void DragonGold::truePick() {
 pickable = true;
}
