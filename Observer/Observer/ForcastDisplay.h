#pragma once
#include<iostream>
#include"Display.h"

class ForcastDisplay : public Display
{
public:
	void update(int temp, int humidity, int pressure)
	{
		std::cout << "ForcastDisplay" << temp << "-" << humidity << "-" << pressure << std::endl;
	}
};