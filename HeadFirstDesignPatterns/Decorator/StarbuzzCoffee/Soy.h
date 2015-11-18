#pragma once

#include "CondimentDecorator.h"

class Soy : public CondimentDecorator  
{
public:
	virtual double cost() const;
	virtual string getDescription() const;
	Soy(shared_ptr<Beverage> beverage);
	virtual ~Soy();
private:
	shared_ptr<Beverage> soyBeverage;
};
