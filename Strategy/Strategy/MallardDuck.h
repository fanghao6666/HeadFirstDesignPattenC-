#pragma once
#include "Duck.h"
#include "FlyWithWings.h"

class MallardDuck : public Duck
{
public:
	void display()
	{
		std::cout << "--MallardDuck--" << std::endl;
	}
	MallardDuck()
	{
		set_fly_behavior(new FlyWithWings());
	}
};