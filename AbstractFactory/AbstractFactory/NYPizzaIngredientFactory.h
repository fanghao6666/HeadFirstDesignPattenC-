#pragma once
#include "Dough.h"
#include "Sauce.h"

class PizzaIngredientFactory
{
public:
	virtual Dough* create_dough() = 0;
	virtual Sauce* create_sauce() = 0;
};