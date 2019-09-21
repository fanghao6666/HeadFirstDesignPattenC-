#include "WeatherData.h"

void WeatherData::measurementChanged()
{
	for (std::set<Display *>::iterator iter = m_p_displays.begin(); iter != m_p_displays.end(); ++iter)
	{
		(*iter)->update(getTemperature(), getHumidity(), getPressure());
	}
}

void WeatherData::registerObserver(Display *p_display)
{
	m_p_displays.insert(p_display);
}

void WeatherData::removeObserver(Display *p_display)
{
	m_p_displays.erase(p_display);
}