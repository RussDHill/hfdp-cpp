#pragma once

class Hottub  
{
public:
	void hottubOn();
	void hottubOff();
	void circulate();
	void jetsOn();
	void jetsOff();
	void setTemperature(int temperature);
	Hottub();
	virtual ~Hottub();
private:
	bool on;
	int hottubTemperature;

	Hottub(const Hottub&); 
	Hottub& operator=(const Hottub&);
};
