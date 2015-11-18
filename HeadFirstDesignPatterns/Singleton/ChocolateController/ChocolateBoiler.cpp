#include "stdafx.h"
#include "ChocolateBoiler.h"

shared_ptr<ChocolateBoiler> ChocolateBoiler::uniqueInstance;

ChocolateBoiler::ChocolateBoiler()
	:empty(true), boiled(false)
{

}

ChocolateBoiler::~ChocolateBoiler()
{

}

shared_ptr<ChocolateBoiler>& ChocolateBoiler::getInstance()
{
	if (!uniqueInstance) {
		cout << "Creating unique instance of Chocolate Boiler" << endl;
		uniqueInstance = shared_ptr<ChocolateBoiler>(new ChocolateBoiler(), mem_fun(&ChocolateBoiler::destroy));
	}
	cout << "Returning instance of Chocolate Boiler" << endl;
	return uniqueInstance;
}

bool ChocolateBoiler::destroy()
{
	delete this;
	cout << "Deleting unique instance of Chocolate Boiler" << endl;
	return true;
}

void ChocolateBoiler::fill()
{
	if (isEmpty()) {
		cout << "Fill the boiler with a milk/chocolate mixture" << endl;
		empty = false;
		boiled = false;
	}
}

void ChocolateBoiler::drain()
{
	if (!isEmpty() && isBoiled()) {
		cout << "Drain the boiled milk and chocolate" << endl;
		empty = true;
	}
}

void ChocolateBoiler::boil()
{
	if (!isEmpty() && !isBoiled()) {
		cout << "Bring the contents to a boil" << endl;
		boiled = true;
	}

}

bool ChocolateBoiler::isEmpty()
{
	return empty;
}

bool ChocolateBoiler::isBoiled()
{
	return boiled;
}
