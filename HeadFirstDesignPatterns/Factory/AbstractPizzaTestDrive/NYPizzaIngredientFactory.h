#pragma once

#include "IFace.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory  
{
public:
	virtual shared_ptr<Dough> createDough();
	virtual shared_ptr<Sauce> createSauce();
	virtual shared_ptr<Cheese> createCheese();
	virtual void createVeggies(vector< shared_ptr<Veggies> >& veggies);
	virtual shared_ptr<Pepperoni> createPepperoni();
	virtual shared_ptr<Clams> createClams();
	NYPizzaIngredientFactory();
	virtual ~NYPizzaIngredientFactory();

};
