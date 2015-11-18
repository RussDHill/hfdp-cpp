#include "stdafx.h"
#include "SimplePizzaFactory.h"
#include "Pizza.h"
#include "CheesePizza.h"
#include "VeggiePizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"

SimplePizzaFactory::SimplePizzaFactory()
{

}

SimplePizzaFactory::~SimplePizzaFactory()
{

}

shared_ptr<Pizza> SimplePizzaFactory::createPizza(const string& type)
{
	shared_ptr<Pizza> pizza;

	if (type.compare("cheese") == 0) {
		pizza.reset(new CheesePizza());
	} else if (type.compare("pepperoni") == 0) {
		pizza.reset(new PepperoniPizza());
	} else if (type.compare("clam") == 0) {
		pizza.reset(new ClamPizza());
	} else if (type.compare("veggie") == 0) {
		pizza.reset(new VeggiePizza());
	}
	return pizza;

}
