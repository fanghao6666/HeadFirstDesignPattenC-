#pragma once
#include "PizzaStore.h"
#include "NYCheesePizza.h"
#include "NYGreekPizza.h"

class NYPizzaStore : public PizzaStore
{
	Pizza* CreatePizza(const std::string& type)
	{
		if ("cheese" == type)
		{
			return new NYCheesePizza();
		}
		else if ("greek" == type)
		{
			return new NYGreekPizza();
		}

		return nullptr;
	}
};