#include "stdafx.h"
#include "NYPizzaStore.h"
#include "NYPizzaIngredientFactory.h"
#include "CheesePizza.h"
#include "VeggiePizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"

NYPizzaStore::NYPizzaStore()
{
	
}

NYPizzaStore::~NYPizzaStore()
{
	
}

shared_ptr<Pizza> NYPizzaStore::createPizza(const string& item) 
{
	shared_ptr<Pizza> pizza;
	shared_ptr<NYPizzaIngredientFactory> ingredientFactory(new NYPizzaIngredientFactory());

	if (item.compare("cheese") == 0) {
		pizza.reset(new CheesePizza(ingredientFactory));
		pizza->setName("New York Style Cheese Pizza");
	} else if (item.compare("veggie") == 0) {
		pizza.reset(new VeggiePizza(ingredientFactory));
		pizza->setName("New York Style Veggie Pizza");
	} else if (item.compare("clam") == 0) {
		pizza.reset(new ClamPizza(ingredientFactory));
		pizza->setName("New York Style Clam Pizza");
	} else if (item.compare("pepperoni") == 0) {
		pizza.reset(new PepperoniPizza(ingredientFactory));
		pizza->setName("New York Style Pepperoni Pizza");
	}

	return pizza;
}