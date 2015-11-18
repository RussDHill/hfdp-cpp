#pragma once

class Hottub  
{
public:
	void hottubOn();
	void hottubOff();
	void bubblesOn();
	void bubblesOff();
	void jetsOn();
	void jetsOff();
	void setTemperature(int temperature);
	void heat();
	void cool();
	Hottub();
	virtual ~Hottub();
private:
	bool on;
	int temperature;
};

