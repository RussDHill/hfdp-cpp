// PizzaTestDrive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SimplePizzaFactory.h"
#include "Pizza.h"
#include "PizzaStore.h"

int main(int argc, char* argv[])
{
	shared_ptr<SimplePizzaFactory> factory(new SimplePizzaFactory());
	shared_ptr<PizzaStore> store(new PizzaStore(factory));

	shared_ptr<Pizza> pizza = store->orderPizza("cheese");
	cout << "We ordered a " << pizza->getName() << endl;

	pizza = store->orderPizza("veggie");
	cout << "We ordered a " << pizza->getName() << endl;

	return 0;
}

