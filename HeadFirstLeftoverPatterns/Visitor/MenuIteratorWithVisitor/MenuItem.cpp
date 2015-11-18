#include "stdafx.h"
#include "MenuItem.h"

MenuItem::MenuItem(string name, vector< shared_ptr<MenuComponent> >& ingredients, bool vegetarian, double price)
	:menuItemName(name), menuItemIngredients(ingredients), menuItemVegetarian(vegetarian), menuItemPrice(price)
{

}

MenuItem::MenuItem()
{

}

MenuItem::~MenuItem()
{

}

string MenuItem::getName()
{
	return menuItemName;
}

double MenuItem::getPrice()
{
	return menuItemPrice;
}

bool MenuItem::isVegetarian()
{
	return menuItemVegetarian;
}

void MenuItem::print()
{
	cout << endl << "  " << getName();
	if (isVegetarian()) {
		cout << "(v), ";
	} else {
		cout << ", ";
	}
	cout << setprecision(2) << fixed << getPrice() << endl << "     -- ";

	vector< shared_ptr<MenuComponent> >::iterator itr;
	for (itr=menuItemIngredients.begin();itr!=menuItemIngredients.end();++itr) {
		(*itr)->print();
	}

	cout << endl;
}

void MenuItem::getMenuComponents(vector< shared_ptr<MenuComponent> > &menuComponents)
{
	menuComponents.push_back(this->shared_from_this());
}

void MenuItem::getAllMenuComponents(vector< shared_ptr<MenuComponent> > &menuComponents)
{
	menuComponents.push_back(this->shared_from_this());
	vector< shared_ptr<MenuComponent> >::iterator itr;
	for (itr=menuItemIngredients.begin();itr!=menuItemIngredients.end();++itr) {
		(*itr)->getMenuComponents(menuComponents);
	}
}

shared_ptr<MenuComponent> MenuItem::getChild(int i)
{
	return menuItemIngredients.at(i);
}

void MenuItem::add(shared_ptr<MenuComponent> ingredient)
{
	menuItemIngredients.push_back(ingredient);
}

void MenuItem::removeComp(shared_ptr<MenuComponent> ingredient)
{
	remove(menuItemIngredients.begin(), menuItemIngredients.end(), ingredient);
}

void MenuItem::accept(IVisitor& visitor)
{
	visitor.visit(this);
}
