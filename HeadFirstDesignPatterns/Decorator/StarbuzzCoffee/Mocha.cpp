#include "stdafx.h"
#include "Mocha.h"

Mocha::Mocha(shared_ptr<Beverage> beverage)
	:mochaBeverage(beverage)
{

}

Mocha::~Mocha()
{
	
}

string Mocha::getDescription() const
{
	return mochaBeverage->getDescription() + ", Mocha";
}

double Mocha::cost() const
{
	return 0.2 + mochaBeverage->cost();
}
