#include "stdafx.h"
#include "Waitress.h"
#include "MenuItem.h"
#include "MenuComponent.h"

Waitress::Waitress(shared_ptr<MenuComponent> menus)
	:allMenus(menus)
{

}

Waitress::~Waitress()
{

}

void Waitress::printMenu() const
{
	allMenus->print();
}

void Waitress::printVegetarianMenu() const
{
	vector< shared_ptr<MenuComponent> > menuComponents;

	allMenus->getMenuComponents(menuComponents);

	cout << endl << "VEGETARIAN MENU" << endl << "----" << endl;;
	vector< shared_ptr<MenuComponent> >::const_iterator itr;
	for (itr=menuComponents.begin();itr!=menuComponents.end();++itr) {
		if ((*itr)->isVegetarian()) {
			(*itr)->print();
		}
	}
}
