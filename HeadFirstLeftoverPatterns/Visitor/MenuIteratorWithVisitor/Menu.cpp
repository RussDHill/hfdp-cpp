#include "stdafx.h"
#include "Menu.h"

Menu::Menu(string name, string description)
	:menuName(name), menuDescription(description)
{

}

Menu::Menu()
{

}

Menu::~Menu()
{

}

void Menu::add(shared_ptr<MenuComponent> menuComponent)
{
	menuItems.push_back(menuComponent);
}

void Menu::removeComp(shared_ptr<MenuComponent> menuComponent)
{
	remove(menuItems.begin(), menuItems.end(), menuComponent);
}

shared_ptr<MenuComponent> Menu::getChild(int i)
{
	return menuItems.at(i);
}

string Menu::getName()
{
	return menuName;
}

string Menu::getDescription()
{
	return menuDescription;
}

void Menu::print()
{
	cout << endl << getName() << ", " << getDescription() << endl << "--------------------" << endl;

	vector< shared_ptr<MenuComponent> >::iterator itr;
	for (itr=menuItems.begin();itr!=menuItems.end();++itr) {
		(*itr)->print();
	}
}

void Menu::getMenuComponents(vector< shared_ptr<MenuComponent> >& menuComponents)
{
	vector< shared_ptr<MenuComponent> >::iterator itr;
	for (itr=menuItems.begin();itr!=menuItems.end();++itr) {
		(*itr)->getMenuComponents(menuComponents);
	}
}


void Menu::getAllMenuComponents(vector< shared_ptr<MenuComponent> > &menuComponents)
{
	vector< shared_ptr<MenuComponent> >::iterator itr;
	for (itr=menuItems.begin();itr!=menuItems.end();++itr) {
		(*itr)->getAllMenuComponents(menuComponents);
	}
}


void Menu::accept(IVisitor& visitor)
{
	visitor.visit(this);
}
