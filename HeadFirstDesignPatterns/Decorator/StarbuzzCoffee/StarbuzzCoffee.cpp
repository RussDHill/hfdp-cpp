// StarbuzzCoffee.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Beverage.h"
#include "Espresso.h"
#include "DarkRoast.h"
#include "HouseBlend.h"
#include "Decaf.h"
#include "Mocha.h"
#include "Soy.h"
#include "SteamedMilk.h"
#include "Whip.h"

int main(int argc, char* argv[])
{
	setprecision(2);
	fixed;

	shared_ptr<Beverage> beverage(new Espresso());
	cout << beverage->getDescription() << " $" << beverage->cost() << endl;

	shared_ptr<Beverage> beverage2(new DarkRoast());
	beverage2.reset(new Mocha(beverage2));
	beverage2.reset(new Mocha(beverage2));
	beverage2.reset(new Whip(beverage2));
	cout << beverage2->getDescription() << " $" << beverage2->cost() << endl;

	shared_ptr<Beverage> beverage3(new HouseBlend());
	beverage3.reset(new Mocha(beverage3));
	beverage3.reset(new Mocha(beverage3));
	beverage3.reset(new Whip(beverage3));
	cout << beverage3->getDescription() << " $" << beverage3->cost() << endl;

	return 0;
}

