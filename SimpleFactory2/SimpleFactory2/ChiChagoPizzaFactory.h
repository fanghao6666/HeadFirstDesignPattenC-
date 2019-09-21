#pragma once
#include "SimplePizzaFactory.h"
#include "ChiChagoCheesePizza.h"
#include "ChiChagoGreekPizza.h"

class ChiChagoPizzaFactory : public SimplePizzaFactory
{
public:
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