#pragma once
#include<iostream>
#include"FlyBehavior.h"

class Duck
{
private:
	FlyBehavior *m_p_fly_behavior;

public:
	virtual void quack()
	{
		std::cout << "--quack--" << std::endl;
	}
	virtual void swim()
	{
		std::cout << "--swim--" << std::endl;
	}
	virtual void display()
	{
		std::cout << "--duck--" << std::endl;
	}

	virtual void fly()
	{
		if (m_p_fly_behavior)
		{
			m_p_fly_behavior->fly();
		}
	}
	void set_fly_behavior(FlyBehavior *p_fly_behavior)
	{
		m_p_fly_behavior = p_fly_behavior;
	}

	// 构造函数
	Duck() : m_p_fly_behavior(NULL) {};
	// 析构函数
	virtual ~Duck()
	{
		if (m_p_fly_behavior)
		{
			delete m_p_fly_behavior;
		}
	}
};