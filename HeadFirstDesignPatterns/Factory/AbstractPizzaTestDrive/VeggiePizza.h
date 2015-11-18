#pragma once

#include "Pizza.h"

class PizzaIngredientFactory;

class VeggiePizza : public Pizza  
{
public:
	virtual void prepare();
	VeggiePizza(shared_ptr<PizzaIngredientFactory> ingredientFactory);
	virtual ~VeggiePizza();
protected:
	shared_ptr<PizzaIngredientFactory> veggiePizzaFactory;

};
