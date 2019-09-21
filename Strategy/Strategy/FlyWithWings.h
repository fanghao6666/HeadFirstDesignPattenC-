#pragma once
#include"FlyBehavior.h"

class FlyWithWings : public FlyBehavior
{
public:
	void fly()
	{
		std::cout << "--fly with wings--" << std::endl;
	}
};