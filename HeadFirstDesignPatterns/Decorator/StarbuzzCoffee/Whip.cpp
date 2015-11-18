#include "stdafx.h"
#include "Whip.h"

Whip::Whip(shared_ptr<Beverage> beverage)
	:whipBeverage(beverage)
{

}

Whip::~Whip()
{
	
}

string Whip::getDescription() const
{
	return whipBeverage->getDescription() + ", Whip";
}

double Whip::cost() const
{
	return 0.1 + whipBeverage->cost();
}
