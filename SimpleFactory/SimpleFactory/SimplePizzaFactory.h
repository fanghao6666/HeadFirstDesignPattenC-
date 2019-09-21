#pragma once
#include "CheesePizza.h"
#include "GreekPizza.h"

class SimplePizzaFactory
{
public:
	Pizza *CreatePizza(const std::string &type)
	{
		if ("cheese" == type)
		{
			return new CheesePizza();
		}
		else if ("greek" == type)
		{
			return new GreekPizza();
		}
		return nullptr;
	}
};