#pragma once

#include "CaffeineBeverage.h"

class Coffee : public CaffeineBeverage  
{
public:
	virtual void brew();
	virtual void addCondiments();
	Coffee();
	virtual ~Coffee();
};
