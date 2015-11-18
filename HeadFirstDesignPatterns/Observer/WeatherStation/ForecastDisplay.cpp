#include "stdafx.h"
#include "ForecastDisplay.h"

ForecastDisplay::ForecastDisplay(shared_ptr<Subject> weatherData)
	:forecastWeatherData(weatherData), currentPressure(29.92f)
{
	forecastWeatherData->registerObserver(this);
}

ForecastDisplay::~ForecastDisplay()
{

}

void ForecastDisplay::update(float temp, float humidity, float pressure)
{
	lastPressure = currentPressure;
	currentPressure = pressure;
	display();
}

void ForecastDisplay::display()
{
	cout << "Forecast: ";
	if (currentPressure > lastPressure) {
		cout << "Improving weather on the way!" << endl;
	} else if (currentPressure == lastPressure) {
		cout << "More of the same" << endl;
	} else if (currentPressure < lastPressure) {
		cout << "Watch out for cooler, rainy weather" << endl;
	}
}


