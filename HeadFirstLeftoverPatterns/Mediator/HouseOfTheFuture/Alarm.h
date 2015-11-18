#pragma once

#include "IFace.h"

class Alarm : public IWidget  
{
public:
	void setAlarm(int delay);
	int checkAlarm();
	void off();
	void on();
	virtual void onEvent();
	Alarm(IDirector* director);
	virtual ~Alarm();
private:
	int state;
};
