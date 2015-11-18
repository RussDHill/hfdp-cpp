#pragma once

#include "Beverage.h"

class CondimentDecorator : public Beverage  
{
public:
	virtual string getDescription() const;
	CondimentDecorator();
	virtual ~CondimentDecorator();

};
