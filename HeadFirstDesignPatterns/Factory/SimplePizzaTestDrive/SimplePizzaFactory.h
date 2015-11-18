#include "Pizza.h"	// Added by ClassView

#pragma once

class SimplePizzaFactory  
{
public:
	shared_ptr<Pizza> createPizza(const string& type);
	SimplePizzaFactory();
	virtual ~SimplePizzaFactory();

};
