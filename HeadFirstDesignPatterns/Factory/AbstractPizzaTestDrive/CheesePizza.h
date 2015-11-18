#pragma once

#include "Pizza.h"

class PizzaIngredientFactory;

class CheesePizza : public Pizza  
{
public:
	virtual void prepare();
	CheesePizza(shared_ptr<PizzaIngredientFactory> ingredientFactory);
	virtual ~CheesePizza();
protected:
	shared_ptr<PizzaIngredientFactory> cheesePizzaFactory;

};
