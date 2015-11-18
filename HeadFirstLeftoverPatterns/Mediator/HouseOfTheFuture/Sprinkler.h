#pragma once

#include "IFace.h"

class Sprinkler : public IWidget  
{
public:
	void setSprinkler(int startTime);
	int checkSprinkler();
	void off();
	void on();
	virtual void onEvent();
	Sprinkler(IDirector* director);
	virtual ~Sprinkler();
private:
	int state;
};
