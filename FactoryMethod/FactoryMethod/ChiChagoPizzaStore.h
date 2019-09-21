#pragma once
#include "PizzaStore.h"
#include "ChiChagoCheesePizza.h"
#include "ChiChagoGreekPizza.h"

class NYPizzaStore : public PizzaStore
{
	Pizza* CreatePizza(const std::string& type)
	{
		if ("cheese" == type)
		{
			return new ChiChagoCheesePizza();
		}
		else if ("greek" == type)
		{
			return new ChiChagoGreekPizza();
		}

		return nullptr;
	}
};