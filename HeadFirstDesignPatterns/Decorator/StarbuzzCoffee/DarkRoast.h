#pragma once

#include "Beverage.h"

class DarkRoast : public Beverage  
{
public:
	virtual double cost() const;
	DarkRoast();
	virtual ~DarkRoast();

};
