#pragma once
#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator
{
public:
	Mocha(Beverage *p_beverage) :m_p_beverage(p_beverage) {};

	std::string getDescription()
	{
		return m_p_beverage->getDescription() + ",Mocha";
	}

	double cost()
	{
		return 0.20 + m_p_beverage->cost();
	}

private:
	Beverage *m_p_beverage;
};