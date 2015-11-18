#include "stdafx.h"
#include "Soy.h"

Soy::Soy(shared_ptr<Beverage> beverage)
	:soyBeverage(beverage)
{

}

Soy::~Soy()
{
	
}

string Soy::getDescription() const
{
	return soyBeverage->getDescription() + ", Soy";
}

double Soy::cost() const
{
	return 0.15 + soyBeverage->cost();
}
