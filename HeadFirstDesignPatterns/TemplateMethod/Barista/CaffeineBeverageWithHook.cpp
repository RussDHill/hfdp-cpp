#include "stdafx.h"
#include "CaffeineBeverageWithHook.h"

CaffeineBeverageWithHook::CaffeineBeverageWithHook()
{

}

CaffeineBeverageWithHook::~CaffeineBeverageWithHook()
{

}

void CaffeineBeverageWithHook::prepareRecipe()
{
	boilWater();
	brew();
	pourInCup();
	if (customerWantsCondiments()) {
		addCondiments();
	}
}

void CaffeineBeverageWithHook::boilWater()
{
	cout << "Boiling water" << endl;
}

void CaffeineBeverageWithHook::pourInCup()
{
	cout << "Pouring into cup" << endl;
}

bool CaffeineBeverageWithHook::customerWantsCondiments() const
{
	return true;
}
