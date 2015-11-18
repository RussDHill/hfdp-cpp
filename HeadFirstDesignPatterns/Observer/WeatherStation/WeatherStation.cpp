// WeatherStation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "HeatIndexDisplay.h"
#include "StatisticsDisplay.h"

int main(int argc, char* argv[])
{
	shared_ptr<WeatherData> weatherData(new WeatherData());
	CurrentConditionsDisplay* cd = new CurrentConditionsDisplay(weatherData);
	shared_ptr<CurrentConditionsDisplay> currentDisplay = shared_ptr<CurrentConditionsDisplay>(cd);
	StatisticsDisplay* sd = new StatisticsDisplay(weatherData);
	shared_ptr<StatisticsDisplay> statisticsDisplay = shared_ptr<StatisticsDisplay>(sd);
	//ForecastDisplay* fd = new ForecastDisplay(weatherData);
	//shared_ptr<ForecastDisplay> forecastDisplay = shared_ptr<ForecastDisplay>(sd);
	HeatIndexDisplay* hid = new HeatIndexDisplay(weatherData);
	shared_ptr<HeatIndexDisplay> heatIndexDisplay = shared_ptr<HeatIndexDisplay>(hid);

	weatherData->setMeasurements(80, 65, 30.4f);
	weatherData->setMeasurements(82, 70, 29.2f);
	weatherData->setMeasurements(78, 90, 29.2f);

	return 0;
}

