// BeverageTestDrive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Tea.h"
#include "Coffee.h"
#include "TeaWithHook.h"
#include "CoffeeWithHook.h"

int main(int argc, char* argv[])
{
	shared_ptr<Tea> tea(new Tea());
	shared_ptr<Coffee> coffee(new Coffee());

	cout << "Making tea..." << endl;
	tea->prepareRecipe();

	cout << endl << "Making coffee..." << endl;
	coffee->prepareRecipe();

	shared_ptr<TeaWithHook> teaHook(new TeaWithHook());
	shared_ptr<CoffeeWithHook> coffeeHook(new CoffeeWithHook());

	cout << endl << "Making tea..." << endl;
	teaHook->prepareRecipe();

	cout << endl << "Making coffee..." << endl;
	coffeeHook->prepareRecipe();

	return 0;
}

