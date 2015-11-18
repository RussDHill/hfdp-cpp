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
}

void Pizza::bake()
{
	cout << "Baking " << name << endl;
}

void Pizza::cut()
{
	cout << "Cutting " << name << endl;
}

void Pizza::box()
{
	cout << "Boxing " << name << endl;
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
