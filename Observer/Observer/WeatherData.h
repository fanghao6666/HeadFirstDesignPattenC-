#pragma once
#include<set>
#include "Display.h"

class WeatherData
{
public:
	void measurementChanged();
	void registerObserver(Display *p_display);
	void removeObserver(Display *p_display);

private:
	int getTemperature() { return 25; }
	int getHumidity() { return 90; }
	int getPressure() { return 120; }

	std::set<Display *> m_p_displays;
};