#pragma once

#include <iostream>

class LIGHT {
public:
	void on() { std::cout << "light is on" << std::endl; }
	void off() { std::cout << "light is off" << std::endl; }
};