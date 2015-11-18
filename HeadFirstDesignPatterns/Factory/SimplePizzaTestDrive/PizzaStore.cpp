#include "stdafx.h"
#include "PizzaStore.h"
#include "Pizza.h"
#include "SimplePizzaFactory.h"

PizzaStore::PizzaStore(shared_ptr<SimplePizzaFactory> factory)
	:pizzaStoreFactory(factory)
{

}

PizzaStore::~PizzaStore()
{

}

shared_ptr<Pizza> PizzaStore::orderPizza(const string& type) const
{
		shared_ptr<Pizza> pizza = pizzaStoreFactory->createPizza(type);
 
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();

		return pizza;
}
