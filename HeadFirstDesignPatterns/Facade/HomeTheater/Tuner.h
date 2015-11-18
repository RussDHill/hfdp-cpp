#pragma once

#include "Amplifier.h"

class Amplifier;

class Tuner  
{
public:
	string toString() const;
	void setFm();
	void setAm();
	void setFrequency(double frequency);
	void off();
	void on();
	Tuner(const string& description, shared_ptr<Amplifier> amplifier);
	virtual ~Tuner();
private:
	string tunerDescription;
	double frequency;
	weak_ptr<Amplifier> tunerAmplifier;

	Tuner(const Tuner&); 
	Tuner& operator=(const Tuner&);
};
