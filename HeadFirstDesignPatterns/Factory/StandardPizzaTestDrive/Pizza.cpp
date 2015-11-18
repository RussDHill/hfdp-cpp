#include "stdafx.h"
#include "Pizza.h"

Pizza::Pizza()
{

}

Pizza::~Pizza()
{

}

void Pizza::prepare()
{
	cout << "Preparing " << name << endl;
	cout << "Tossing dough..." << endl;
	cout << "Adding sauce..." << endl;
	cout << "Adding toppings: " << endl;
	for (unsigned int i=0;i<toppings.size();i++) {
		cout << "   " << toppings.at(i) << endl;
	}
}

void Pizza::bake()
{
	cout << "Bake for 25 minutes at 350" << endl;
}

void Pizza::cut()
{
	cout << "Cutting the pizza into diagonal slices" << endl;
}

void Pizza::box()
{
	cout << "Place pizza in official PizzaStore box" << endl;
}

string Pizza::getName() const
{
	return name;
}

string Pizza::toString() const
{
	string display = "\n---- " + name + " ---\n";
	display += dough + "\n";
	display += sauce + "\n";
	for(unsigned int i=0;i<toppings.size();i++) {
		display += toppings.at(i);
		display += "\n";
	}
	display += "\n";
	return display;
}
