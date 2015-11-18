#pragma once

#include "PizzaStore.h"

class NYPizzaStore : public PizzaStore  
{
public:
	virtual shared_ptr<Pizza> createPizza(const string& type);
	NYPizzaStore();
	virtual ~NYPizzaStore();

};
