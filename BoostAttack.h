#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>

#ifndef BOOST_ATTACK_H
#define BOOST_ATTACK_H

class BoostAttack : public Potions {
public:
	BoostAttack(); //constructor. initializes the amount to +5, symbol = P,
					 //potionType = BA
	
	~BoostAttack(); // dtor
    void usePotion(Character *c) override; //applies potion effect to player
};




#endif
