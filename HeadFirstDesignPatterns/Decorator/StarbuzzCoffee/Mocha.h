#pragma once

#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator  
{
public:
	virtual double cost() const;
	virtual string getDescription() const;
	Mocha(shared_ptr<Beverage> beverage);
	virtual ~Mocha();
private:
	shared_ptr<Beverage> mochaBeverage;
};
