#pragma once

#include "PizzaStore.h"

class PizzaIngredientFactory;

class ChicagoPizzaStore : public PizzaStore  
{
public:
	ChicagoPizzaStore();
	virtual ~ChicagoPizzaStore();
protected:
	virtual shared_ptr<Pizza> createPizza(const string& item);
};
