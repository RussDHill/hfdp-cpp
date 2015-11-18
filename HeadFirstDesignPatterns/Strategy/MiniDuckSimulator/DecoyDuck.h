#pragma once
#include "duck.h"

class DecoyDuck :
	public Duck
{
public:
	void display();
	DecoyDuck(void);
	virtual ~DecoyDuck(void);
};
