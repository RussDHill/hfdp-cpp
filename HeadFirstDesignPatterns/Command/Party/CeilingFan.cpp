#include "stdafx.h"
#include "CeilingFan.h"


CeilingFan::CeilingFan(const string& location)
	:fanLocation(location)
{

}

CeilingFan::~CeilingFan()
{

}

void CeilingFan::high()
{
	// turns the ceiling fan on to high
	speed = HIGH;
	cout << fanLocation << " ceiling fan is on high" << endl;
}

void CeilingFan::medium() {
	// turns the ceiling fan on to medium
	speed = MEDIUM;
	cout << fanLocation << " ceiling fan is on medium" << endl;
}

void CeilingFan::low() {
	// turns the ceiling fan on to low
	speed = LOW;
	cout << fanLocation << " ceiling fan is on low" << endl;
}

void CeilingFan::off() {
	// turns the ceiling fan off
	speed = 0;
	cout << fanLocation << " ceiling fan is on off" << endl;
}

int CeilingFan::getSpeed() {
	return speed;
}
