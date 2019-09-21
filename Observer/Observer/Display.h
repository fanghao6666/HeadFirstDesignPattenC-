#pragma once
class Display
{
public:
	virtual void update(int temp, int humidity, int pressure) = 0;
};