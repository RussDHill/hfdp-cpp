#pragma once
#include "duck.h"

class ModelDuck :
	public Duck
{
public:
	virtual void display();
	ModelDuck(void);
	virtual ~ModelDuck(void);
};
