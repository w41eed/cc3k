#ifndef BOOST_ATTACK_H
#define BOOST_ATTACK_H
// TODO: should there be an underscore after boost in include guard

#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>

class BoostAttack : public Potions {
public:
	BoostAttack(); //constructor. initializes the amount to +5, symbol = P, 
					 //potionType = BA
	
	~BoostAttack();
    void usePotion(Player &p);
	int getAtk() override;
	int getDef() override;
};




#endif
