#pragma once

#include "PizzaStore.h"

class PizzaIngredientFactory;

class NYPizzaStore : public PizzaStore  
{
public:
	NYPizzaStore();
	virtual ~NYPizzaStore();
protected:
	virtual shared_ptr<Pizza> createPizza(const string& item);
private:
	shared_ptr<PizzaIngredientFactory> ingredientFactory;
};
