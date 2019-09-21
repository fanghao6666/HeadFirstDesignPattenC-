#pragma once
#include "SimplePizzaFactory.h"
#include "NYCheesePizza.h"
#include "NYGreekPizza.h"

class NYPizzaFactory : public SimplePizzaFactory
{
public:
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