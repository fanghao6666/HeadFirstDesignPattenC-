#pragma once
#include "ThinCrustDough.h"
#include "MarinaraSauce.h"
#include "PizzaIngredientFactory.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
	Dough* create_dough() { std::cout << "Creating Thin Crust Dough" << std::endl; return new ThinCrustDough(); }
	Sauce* create_sauce() { std::cout << "Creating Marinara Sauce" << std::endl; return new MarinaraSauce(); }
};