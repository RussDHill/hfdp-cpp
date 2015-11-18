#include "stdafx.h"
#include "Decaf.h"

Decaf::Decaf()
{
	Beverage::description = "Decaf Coffee";
}

Decaf::~Decaf()
{

}

double Decaf::cost() const
{
	return 1.05;
}
