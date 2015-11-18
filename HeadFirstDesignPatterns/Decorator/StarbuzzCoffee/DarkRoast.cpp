#include "stdafx.h"
#include "DarkRoast.h"

DarkRoast::DarkRoast()
{
	Beverage::description = "Dark Roast Coffee";
}

DarkRoast::~DarkRoast()
{

}

double DarkRoast::cost() const
{
	return .99;
}
