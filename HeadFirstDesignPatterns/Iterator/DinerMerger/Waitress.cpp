#include "stdafx.h"
#include "Waitress.h"
#include "IFace.h"
#include "MenuItem.h"
#include "PancakeHouseMenu.h"
#include "DinerMenu.h"

Waitress::Waitress(shared_ptr<PancakeHouseMenu> pancakeHouseMenu, shared_ptr<DinerMenu> dinerMenu)
	:pancakeHouseMenu(pancakeHouseMenu), dinerMenu(dinerMenu)
{

}

Waitress::~Waitress()
{

}

void Waitress::printMenu()
{
	shared_ptr<Iterator> pancakeIterator = pancakeHouseMenu->createIterator();
	shared_ptr<Iterator> dinerIterator = dinerMenu->createIterator();

	cout << "MENU" << endl << "----" << endl << "BREAKFAST" << endl;
	printMenu(pancakeIterator);
	cout << endl;

	cout << endl << "LUNCH" << endl;
	printMenu(dinerIterator);
	cout << endl;
}

void Waitress::printMenu(shared_ptr<Iterator> iter)
{
	while (iter->hasNext()) {
		shared_ptr<MenuItem> menuItem = iter->next();
		cout << endl << menuItem->getName();
		cout << setprecision(2) << fixed << " -- " << menuItem->getPrice();
		cout << " " << menuItem->getDescription();
	}
}

void Waitress::printVegetarianMenu()
{
	cout << endl << "VEGETARIAN" << endl;
	printVegetarianMenu(pancakeHouseMenu->createIterator());
	printVegetarianMenu(dinerMenu->createIterator());
	cout << endl;
}

bool Waitress::isItemVegetarian(const string& name)
{
	shared_ptr<Iterator> breakfastIterator = pancakeHouseMenu->createIterator();
	if (isVegetarian(name, breakfastIterator)) {
		return true;
	}

	shared_ptr<Iterator> dinnerIterator = dinerMenu->createIterator();
	if (isVegetarian(name, dinnerIterator)) {
		return true;
	}
	
	return false;
}

void Waitress::printVegetarianMenu(shared_ptr<Iterator> iter)
{
	while (iter->hasNext()) {
		shared_ptr<MenuItem> menuItem = iter->next();
		if (menuItem->isVegetarian()) {
			cout << endl << menuItem->getName();
			cout << setprecision(2) << fixed << " -- " << menuItem->getPrice();
			cout << " " << menuItem->getDescription();
		}
	}
}

bool Waitress::isVegetarian(const string& name, shared_ptr<Iterator> iter)
{
	while (iter->hasNext()) {
		shared_ptr<MenuItem> menuItem = iter->next();
		if (name.compare(menuItem->getName())) {
			if (menuItem->isVegetarian()) {
				return true;
			}
		}
	}
	return false;
}
