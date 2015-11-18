#pragma once

#include "PizzaStore.h"

class ChicagoPizzaStore : public PizzaStore  
{
public:
	virtual shared_ptr<Pizza> createPizza(const string& type);
	ChicagoPizzaStore();
	virtual ~ChicagoPizzaStore();

};
