#include "stdafx.h"
#include "CoffeeWithHook.h"

CoffeeWithHook::CoffeeWithHook()
{

}

CoffeeWithHook::~CoffeeWithHook()
{

}

void CoffeeWithHook::brew()
{
	cout << "Dripping Coffee through filter" << endl;
}

void CoffeeWithHook::addCondiments()
{
	cout << "Adding Sugar and Milk" << endl;
}

bool CoffeeWithHook::customerWantsCondiments() const
{
	string answer = getUserInput();

	if (answer.compare("y") == 0) {
		return true;
	} else {
		return false;
	}
}

string CoffeeWithHook::getUserInput() const
{
	// get the user's response
	string answer;

	cout << "Would you like milk and sugar with your coffee (y/n)? ";
	cin >> answer;

	if (answer.empty()) {
		answer = "n";
	}
	return answer;
}
