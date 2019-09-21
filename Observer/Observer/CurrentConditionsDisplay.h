#pragma once
#include<iostream>
#include "Display.h"

class CurrentConditionsDisplay : public Display
{
public:
	void update(int temp, int humidity, int pressure)
	{
		std::cout << "CurrentConditionsDisplay" << temp << "-" << humidity << "-" << pressure << std::endl;
	}
};