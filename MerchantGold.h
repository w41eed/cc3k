#include "Cell.h"
#include "Item.h"
#include <iostream>
#include "Gold.h"

#ifndef MERCHANT_GOLD_H
#define MERCHANT_GOLD_H

class MerchantGold: Gold {
	public:
		MerchantGold(); //Constructs a MerchantGold with value 4
        ~MerchantGold();



};

#endif