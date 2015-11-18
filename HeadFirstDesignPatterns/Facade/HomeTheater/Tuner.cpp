#include "stdafx.h"
#include "Tuner.h"


Tuner::Tuner(const string& description, shared_ptr<Amplifier> amplifier) 
	:tunerDescription(description), tunerAmplifier(amplifier)
{

}

Tuner::~Tuner()
{

}


void Tuner::on()
{
	cout << tunerDescription << " on" << endl;
}

void Tuner::off()
{
	cout << tunerDescription << " off" << endl;
}

void Tuner::setFrequency(double frequency)
{
	cout << tunerDescription << " setting frequency to " << frequency << endl;
	this->frequency = frequency;
}

void Tuner::setAm()
{
	cout << tunerDescription << " setting AM mode" << endl;
}

void Tuner::setFm()
{
	cout << tunerDescription << " setting FM mode" << endl;
}

string Tuner::toString() const
{
	return tunerDescription;
}
