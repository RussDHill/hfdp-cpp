#include "stdafx.h"
#include "NYPizzaStore.h"
#include "NYStyleCheesePizza.h"
#include "NYStyleVeggiePizza.h"
#include "NYStyleClamPizza.h"
#include "NYStylePepperoniPizza.h"

NYPizzaStore::NYPizzaStore()
{

}

NYPizzaStore::~NYPizzaStore()
{

}

shared_ptr<Pizza> NYPizzaStore::createPizza(const string& type)
{
	shared_ptr<Pizza> pizza;

	if (type.compare("cheese") == 0) {
		pizza.reset(new NYStyleCheesePizza());
	} else if (type.compare("pepperoni") == 0) {
		pizza.reset(new NYStylePepperoniPizza());
	} else if (type.compare("clam") == 0) {
		pizza.reset(new NYStyleClamPizza());
	} else if (type.compare("veggie") == 0) {
		pizza.reset(new NYStyleVeggiePizza());
	}
	return pizza;
}
