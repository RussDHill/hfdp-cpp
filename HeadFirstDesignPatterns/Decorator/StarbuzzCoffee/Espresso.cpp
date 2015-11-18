#include "stdafx.h"
#include "Espresso.h"

Espresso::Espresso()
{
	Beverage::description = "Espresso";
}

Espresso::~Espresso()
{

}

double Espresso::cost() const
{
	return 1.99;
}
