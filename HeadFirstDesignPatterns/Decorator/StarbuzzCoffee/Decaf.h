#pragma once

#include "Beverage.h"

class Decaf : public Beverage  
{
public:
	virtual double cost() const;
	Decaf();
	virtual ~Decaf();

};
