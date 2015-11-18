#include "stdafx.h"
#include "TheaterLights.h"


TheaterLights::TheaterLights(const string& description) 
	:lightsDescription(description)
{

}

TheaterLights::~TheaterLights()
{

}

void TheaterLights::on()
{
	cout << lightsDescription << " on" << endl;
}

void TheaterLights::off()
{
	cout << lightsDescription << " off" << endl;
}

void TheaterLights::dim(int level)
{
	cout << lightsDescription << " dimming to " << level << "%" << endl;
}

string TheaterLights::toString() const
{
	return lightsDescription;
}
