#pragma once

#include "IFace.h"

class CoffeePot : public IWidget  
{
public:
	int checkCoffee();
	void off();
	void on();
	virtual void onEvent();
	CoffeePot(IDirector* director);
	virtual ~CoffeePot();
private:
	int state;
};
