#include "stdafx.h"
#include "CurrentConditionsDisplay.h"

CurrentConditionsDisplay::CurrentConditionsDisplay(shared_ptr<Subject> weatherData)
	:currentConditionsWeatherData(weatherData)
{
	currentConditionsWeatherData->registerObserver(this);
}

CurrentConditionsDisplay::~CurrentConditionsDisplay()
{

}

void CurrentConditionsDisplay::update(float temperature, float humidity, float pressure)
{
	this->temperature = temperature;
	this->humidity = humidity;
	display(); 
}

void CurrentConditionsDisplay::display()
{
	cout << setprecision(1) << fixed << "Current conditions: " 
		<< temperature << "F degrees and " << humidity << "% humidity" << endl;
	
}
