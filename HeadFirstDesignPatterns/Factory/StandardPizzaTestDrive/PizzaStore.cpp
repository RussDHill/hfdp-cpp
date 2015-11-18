#include "stdafx.h"
#include "PizzaStore.h"
#include "Pizza.h"

PizzaStore::PizzaStore()
{

}

PizzaStore::~PizzaStore()
{

}

shared_ptr<Pizza> PizzaStore::orderPizza(const string& type)
{
	shared_ptr<Pizza> pizza = createPizza(type);
	cout << "--- Making a " << pizza->getName() <<  " ---" << endl;
 
	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();

	return pizza;
}
