#include "stdafx.h"
#include "Beverage.h"

Beverage::Beverage()	
{	
	description = "Unknown Coffee";
}

Beverage::~Beverage()
{

}

string Beverage::getDescription() const
{
	return description;
}

