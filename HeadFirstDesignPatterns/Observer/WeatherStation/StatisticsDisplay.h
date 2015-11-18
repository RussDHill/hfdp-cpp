#pragma once

#include "IFace.h"

class StatisticsDisplay : public Observer, public DisplayElement  
{
public:
	void display();
	void update(float temp, float humidity, float pressure);

	StatisticsDisplay(shared_ptr<Subject> weatherData);
	virtual ~StatisticsDisplay();

private:
	shared_ptr<Subject> statisticsWeatherData;
	float maxTemp;
	float minTemp;
	float tempSum;
	int numReadings;

	DISABLE_COPY_AND_ASSIGN(StatisticsDisplay)
};
