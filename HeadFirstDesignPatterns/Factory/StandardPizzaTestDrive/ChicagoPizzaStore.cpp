#include "stdafx.h"
#include "ChicagoPizzaStore.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStyleVeggiePizza.h"
#include "ChicagoStyleClamPizza.h"
#include "ChicagoStylePepperoniPizza.h"

ChicagoPizzaStore::ChicagoPizzaStore()
{

}

ChicagoPizzaStore::~ChicagoPizzaStore()
{

}

shared_ptr<Pizza> ChicagoPizzaStore::createPizza(const string& type)
{
	shared_ptr<Pizza> pizza;

	if (type.compare("cheese") == 0) {
		pizza.reset(new ChicagoStyleCheesePizza());
	} else if (type.compare("pepperoni") == 0) {
		pizza.reset(new ChicagoStylePepperoniPizza());
	} else if (type.compare("clam") == 0) {
		pizza.reset(new ChicagoStyleClamPizza());
	} else if (type.compare("veggie") == 0) {
		pizza.reset(new ChicagoStyleVeggiePizza());
	}
	return pizza;
}