#pragma once
#include<string>

class Beverage
{
public:
	Beverage(std::string description = "Unknow Beverage") : m_description(description) {}

	virtual std::string getDescription()
	{
		return m_description;
	}

	virtual double cost() = 0;

private:
	std::string m_description;
};