#include "stdafx.h"
#include "ChicagoPizzaStore.h"
#include "ChicagoPizzaIngredientFactory.h"
#include "CheesePizza.h"
#include "VeggiePizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"

ChicagoPizzaStore::ChicagoPizzaStore()
{
	
}

ChicagoPizzaStore::~ChicagoPizzaStore()
{
	
}

shared_ptr<Pizza> ChicagoPizzaStore::createPizza(const string& item) 
{
	shared_ptr<Pizza> pizza;
	shared_ptr<ChicagoPizzaIngredientFactory> ingredientFactory(new ChicagoPizzaIngredientFactory());

	if (item.compare("cheese") == 0) {
		pizza.reset(new CheesePizza(ingredientFactory));
		pizza->setName("Chicago Style Cheese Pizza");
	} else if (item.compare("veggie") == 0) {
		pizza.reset(new VeggiePizza(ingredientFactory));
		pizza->setName("Chicago Style Veggie Pizza");
	} else if (item.compare("clam") == 0) {
		pizza.reset(new ClamPizza(ingredientFactory));
		pizza->setName("Chicago Style Clam Pizza");
	} else if (item.compare("pepperoni") == 0) {
		pizza.reset(new PepperoniPizza(ingredientFactory));
		pizza->setName("Chicago Style Pepperoni Pizza");
	}

	return pizza;
}