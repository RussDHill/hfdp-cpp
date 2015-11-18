#include "stdafx.h"
#include "TeaWithHook.h"

TeaWithHook::TeaWithHook()
{

}

TeaWithHook::~TeaWithHook()
{

}

void TeaWithHook::brew()
{
	cout << "Steeping the tea" << endl;
}

void TeaWithHook::addCondiments()
{
	cout << "Adding Lemon" << endl;
}

bool TeaWithHook::customerWantsCondiments() const
{
	string answer = getUserInput();

	if (answer.compare("y") == 0) {
		return true;
	} else {
		return false;
	}
}

string TeaWithHook::getUserInput() const
{
	// get the user's response
	string answer;

	cout << "Would you like Lemon with your tea (y/n)? ";
	cin >> answer;

	if (answer.empty()) {
		answer = "n";
	}
	return answer;
}
