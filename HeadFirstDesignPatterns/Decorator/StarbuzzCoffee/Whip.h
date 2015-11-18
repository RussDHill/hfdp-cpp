#pragma once

#include "CondimentDecorator.h"

class Whip : public CondimentDecorator  
{
public:
	virtual double cost() const;
	virtual string getDescription() const;
	Whip(shared_ptr<Beverage> beverage);
	virtual ~Whip();
private:
	shared_ptr<Beverage> whipBeverage;
};
