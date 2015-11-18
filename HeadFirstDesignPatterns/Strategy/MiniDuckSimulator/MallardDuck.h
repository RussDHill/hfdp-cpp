#pragma once
#include "duck.h"

class MallardDuck :
	public Duck
{
public:
	virtual void display();
	MallardDuck();
	virtual ~MallardDuck();
};
