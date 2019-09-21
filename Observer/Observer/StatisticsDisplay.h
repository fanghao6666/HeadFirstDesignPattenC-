#pragma once
#include<iostream>
#include"Display.h"

class StatisticsDisplay : public Display
{
public:
	void update(int temp, int humidity, int pressure)
	{
		std::cout << "StatisticsDisplay" << temp << "-" << humidity << "-" << pressure << std::endl;
	}
};