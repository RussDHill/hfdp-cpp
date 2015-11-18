#pragma once

#include "Beverage.h"

class Espresso : public Beverage  
{
public:
	virtual double cost() const;
	Espresso();
	virtual ~Espresso();

};
