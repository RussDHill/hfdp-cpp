#include "stdafx.h"
#include "SteamedMilk.h"

SteamedMilk::SteamedMilk(shared_ptr<Beverage> beverage)
	:steamedMilkBeverage(beverage)
{

}

SteamedMilk::~SteamedMilk()
{
	
}

string SteamedMilk::getDescription() const
{
	return steamedMilkBeverage->getDescription() + "Steamed Milk";
}

double SteamedMilk::cost() const
{
	return 0.1 + steamedMilkBeverage->cost();
}
