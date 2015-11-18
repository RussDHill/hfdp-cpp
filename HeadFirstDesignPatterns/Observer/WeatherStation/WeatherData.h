#pragma once

#include "IFace.h"

class WeatherData : public Subject  
{
public:
	void setMeasurements(float temperature, float humidity, float pressure);
	void measurementsChanged();
	void notifyObservers();
	void removeObserver(Observer* o);
	void registerObserver(Observer* o);

	WeatherData();
	virtual ~WeatherData();

private:
	list<Observer*> observers;
	float pressure;
	float humidity;
	float temperature;

	DISABLE_COPY_AND_ASSIGN(WeatherData)
};
