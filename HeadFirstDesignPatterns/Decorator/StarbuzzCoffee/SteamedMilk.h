#pragma once

#include "CondimentDecorator.h"

class SteamedMilk : public CondimentDecorator  
{
public:
	virtual double cost() const;
	virtual string getDescription() const;
	SteamedMilk(shared_ptr<Beverage> beverage);
	virtual ~SteamedMilk();
private:
	shared_ptr<Beverage> steamedMilkBeverage;
};
