#pragma once
#include "Duck.h"
#include "FlyNoWay.h"

class RubberDuck : public Duck
{
public:
	void display()
	{
		std::cout << "--RubberDuck--" << std::endl;
	}
	void quack()
	{
		std::cout << "--squeak--" << std::endl;
	}

	RubberDuck()
	{
		set_fly_behavior(new FlyNoWay());
	}
};