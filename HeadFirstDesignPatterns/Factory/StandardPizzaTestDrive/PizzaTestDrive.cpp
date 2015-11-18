// PizzaTestDrive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ChicagoPizzaStore.h"
#include "Pizza.h"
#include "PizzaStore.h"
#include "NYPizzaStore.h"

int main(int argc, char* argv[])
{
	shared_ptr<PizzaStore> nyStore(new NYPizzaStore());
	shared_ptr<PizzaStore> chicagoStore(new ChicagoPizzaStore());

	shared_ptr<Pizza> pizza = nyStore->orderPizza("cheese");
	cout << "Ethan ordered a " << pizza->getName() <<  endl;

	pizza = chicagoStore->orderPizza("cheese");
	cout << "Joel ordered a " << pizza->getName() <<  endl;

	pizza = nyStore->orderPizza("clam");
	cout << "Ethan ordered a " << pizza->getName() <<  endl;

	pizza = chicagoStore->orderPizza("clam");
	cout << "Joel ordered a " << pizza->getName() <<  endl;

	pizza = nyStore->orderPizza("pepperoni");
	cout << "Ethan ordered a " << pizza->getName() <<  endl;

	pizza = chicagoStore->orderPizza("pepperoni");
	cout << "Joel ordered a " << pizza->getName() <<  endl;

	pizza = nyStore->orderPizza("veggie");
	cout << "Ethan ordered a " << pizza->getName() <<  endl;

	pizza = chicagoStore->orderPizza("veggie");
	cout << "Joel ordered a " << pizza->getName() <<  endl;

	return 0;
}

