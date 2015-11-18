#pragma once

#include "IFace.h"

class HeatIndexDisplay : public Observer, public DisplayElement  
{
public:
	void display();
	void update(float temperature, float humidity, float pressure);

	HeatIndexDisplay(shared_ptr<Subject> weatherData);
	virtual ~HeatIndexDisplay();

private:
	shared_ptr<Subject> heatIndexWeatherData;
	float computeHeatIndex(float t, float rh);
	float heatIndex;

	DISABLE_COPY_AND_ASSIGN(HeatIndexDisplay)
};
