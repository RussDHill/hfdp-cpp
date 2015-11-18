#pragma once

#include "IFace.h"

class ForecastDisplay : public Observer, public DisplayElement  
{
public:
	void display();
	void update(float temp, float humidity, float pressure);

	ForecastDisplay(shared_ptr<Subject> weatherData);
	virtual ~ForecastDisplay();

private: 
	shared_ptr<Subject> forecastWeatherData;
	float currentPressure;
	float lastPressure;

	DISABLE_COPY_AND_ASSIGN(ForecastDisplay)
};
