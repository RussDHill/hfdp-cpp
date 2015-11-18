#pragma once

#include "IFace.h"

class CurrentConditionsDisplay : public Observer, public DisplayElement  
{
public:
	void display();
	void update(float temperature, float humidity, float pressure);

	CurrentConditionsDisplay(shared_ptr<Subject> weatherData);
	virtual ~CurrentConditionsDisplay();

private:
	shared_ptr<Subject> currentConditionsWeatherData;
	float humidity;
	float temperature;

	DISABLE_COPY_AND_ASSIGN(CurrentConditionsDisplay)
};
