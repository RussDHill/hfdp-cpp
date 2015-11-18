#include "stdafx.h"
#include "Pizza.h"
#include "IFace.h"

Pizza::Pizza()
{

}

Pizza::~Pizza()
{

}

void Pizza::bake()
{
	cout << "Bake for 25 minutes at 350" <<  endl;
}

void Pizza::cut()
{
	cout << "Cutting the pizza into diagonal slices" <<  endl;
}

void Pizza::box()
{
	cout << "Place pizza in official PizzaStore box" <<  endl;
}

string Pizza::getName() const
{
	return name;
}

void Pizza::setName(const string& name)
{
	this->name = name;
}

string Pizza::toString() const
{
	ostringstream oss;

	oss << endl << "---- " << name << " ---" << endl;

	if (dough != 0)
		oss << dough->toString() << endl;
	
	if (sauce != 0)
		oss << sauce->toString() << endl;

	if (cheese != 0)
		oss << cheese->toString() << endl;
	
	for(unsigned int i=0;i<veggies.size();i++) {
		shared_ptr<Veggies> veg = veggies.at(i);
		oss << veg->toString() << endl;
	}

	if (clam != 0)
		oss << clam->toString() << endl;

	if (pepperoni != 0)
		oss << pepperoni->toString() << endl;

	return oss.str();
}
