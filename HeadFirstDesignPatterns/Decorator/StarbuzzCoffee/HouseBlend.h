#pragma once

#include "Beverage.h"

class HouseBlend : public Beverage  
{
public:
	virtual double cost() const;
	HouseBlend();
	virtual ~HouseBlend();

};
