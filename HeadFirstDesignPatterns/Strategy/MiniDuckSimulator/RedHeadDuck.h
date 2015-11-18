#pragma once
#include "duck.h"

class RedHeadDuck :
	public Duck
{
public:
	virtual void display();
	RedHeadDuck(void);
	virtual ~RedHeadDuck(void);
};
