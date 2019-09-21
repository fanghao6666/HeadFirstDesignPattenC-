#pragma once
#include "Duck.h"
#include "FlyWithWings.h"

class ReadheadDuck : public Duck
{
public:
	void display()
	{
		std::cout << "--ReadheadDuck--" << std::endl;
	}
	ReadheadDuck()
	{
		set_fly_behavior(new FlyWithWings());
	}
};