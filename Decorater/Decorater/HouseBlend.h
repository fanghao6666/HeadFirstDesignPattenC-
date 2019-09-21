#pragma once
#include "Beverage.h"

class HouseBlend : public Beverage
{
public:
	HouseBlend() : Beverage("House Blend Coffee"){}

	double cost()
	{
		return 0.89;
	}
};