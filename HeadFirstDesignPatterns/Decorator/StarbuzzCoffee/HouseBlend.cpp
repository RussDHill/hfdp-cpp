#include "stdafx.h"
#include "HouseBlend.h"

HouseBlend::HouseBlend()
{
	Beverage::description = "House Blend Coffee";
}

HouseBlend::~HouseBlend()
{

}

double HouseBlend::cost() const
{
	return .89;
}
