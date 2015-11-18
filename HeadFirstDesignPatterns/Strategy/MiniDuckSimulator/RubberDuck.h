#pragma once
#include "duck.h"

class RubberDuck :
	public Duck
{
public:
	virtual void display();
	RubberDuck(void);
	virtual ~RubberDuck(void);
};
