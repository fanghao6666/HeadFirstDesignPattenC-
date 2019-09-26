#pragma once

#include <iostream>

class TV {
public:
	void open() { std::cout << "TV is opened" << std::endl; }
	void close() { std::cout << "TV is closed" << std::endl; }
};