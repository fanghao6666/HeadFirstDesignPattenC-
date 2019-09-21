#pragma once
#include "Pizza.h"

class SimplePizzaFactory
{
public:
	virtual Pizza* CreatePizza(const std::string &type) = 0;
};