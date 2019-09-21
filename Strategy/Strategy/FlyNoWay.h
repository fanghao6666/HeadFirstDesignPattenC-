#pragma once
#include"FlyBehavior.h"

class FlyNoWay : public FlyBehavior
{
public:
	void fly()
	{
		std::cout << "--fly No way--" << std::endl;
	}
};