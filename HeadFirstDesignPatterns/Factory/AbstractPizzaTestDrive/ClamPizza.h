#pragma once

#include "Pizza.h"

class PizzaIngredientFactory;

class ClamPizza : public Pizza  
{
public:
	virtual void prepare();
	ClamPizza(shared_ptr<PizzaIngredientFactory> ingredientFactory);
	virtual ~ClamPizza();
protected:
	shared_ptr<PizzaIngredientFactory> clamPizzaFactory;

};
