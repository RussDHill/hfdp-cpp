#include "stdafx.h"
#include "WeatherData.h"

WeatherData::WeatherData()
{
	
}

WeatherData::~WeatherData()
{

}

void WeatherData::registerObserver(Observer* o)
{
	observers.push_back(o);
}

void WeatherData::removeObserver(Observer* o)
{
	observers.remove(o);
}

void WeatherData::notifyObservers()
{
	list<Observer*>::const_iterator it;
	for(it = observers.begin();it != observers.end();++it) {
		Observer* observer = dynamic_cast<Observer*>(*it);
		observer->update(temperature, humidity, pressure);
	}
}

void WeatherData::measurementsChanged()
{
	notifyObservers();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	measurementsChanged();
}
