#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "StatisticsDisplay.h"
#include "ForcastDisplay.h"

int main()
{
	WeatherData weather_data;

	CurrentConditionsDisplay current_conditions_display;
	StatisticsDisplay statistics_display;
	ForcastDisplay forcast_display;

	weather_data.registerObserver(&current_conditions_display);
	weather_data.registerObserver(&statistics_display);
	weather_data.registerObserver(&forcast_display);

	weather_data.measurementChanged();

	weather_data.removeObserver(&statistics_display);


	weather_data.measurementChanged();

	getchar();

	return 0;
}