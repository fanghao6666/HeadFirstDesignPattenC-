#pragma once
#include<string>
#include"Beverage.h"

class CondimentDecorator : public Beverage
{
public:
	virtual std::string getDescription() = 0;
};