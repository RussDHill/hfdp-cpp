#include "stdafx.h"
#include "Menu.h"

Menu::Menu(const string& name, const string& description)
	:menuName(name), menuDescription(description)
{

}

Menu::~Menu()
{

}

void Menu::add(shared_ptr<MenuComponent> menuComponent)
{
	menuComponents.push_back(menuComponent);
}

void Menu::removeComp(shared_ptr<MenuComponent> menuComponent)
{
	remove(menuComponents.begin(), menuComponents.end(), menuComponent);
}

shared_ptr<MenuComponent> Menu::getChild(int i) const
{
	return menuComponents.at(i);
}

string Menu::getName() const
{
	return menuName;
}

string Menu::getDescription() const
{
	return menuDescription;
}

void Menu::print() const
{
	cout << endl << getName() << ", " << getDescription() << endl << "--------------------" << endl;

	vector< shared_ptr<MenuComponent> >::const_iterator itr;
	for (itr=menuComponents.begin();itr!=menuComponents.end();++itr) {
		(*itr)->print();
	}
}

void Menu::getMenuComponents(vector< shared_ptr<MenuComponent> >& vec)
{
	vector< shared_ptr<MenuComponent> >::iterator itr;
	for (itr=menuComponents.begin();itr!=menuComponents.end();++itr) {
		(*itr)->getMenuComponents(vec);
	}
}