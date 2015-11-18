#pragma once
 
#include "Pizza.h"

class PizzaIngredientFactory;

class PepperoniPizza : public Pizza  
{
public:
	virtual void prepare();
	PepperoniPizza(shared_ptr<PizzaIngredientFactory> ingredientFactory);
	virtual ~PepperoniPizza();
protected:
	shared_ptr<PizzaIngredientFactory> pepperoniPizzaFactory;
};
