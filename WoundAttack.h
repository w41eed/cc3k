#ifndef WOUND_ATTACK_H
#define WOUND_ATTACK_H

#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Potions.h"
#include <string>

class WoundAttack :public Potions {
public:
	WoundAttack(); //constructor. initializes the amount to -5, symbol = P, 
					 //potionType = WA
	
	~WoundAttack();

	void usePotion(Player &p);
	int getAtk() override;
    int getDef() override;

};


#endif
