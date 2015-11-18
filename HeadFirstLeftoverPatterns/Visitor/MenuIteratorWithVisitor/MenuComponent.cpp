#include "stdafx.h"
#include "MenuComponent.h"

MenuComponent::MenuComponent()
{

}

MenuComponent::~MenuComponent()
{

}

void MenuComponent::add(shared_ptr<MenuComponent> menuComponent)
{
	throw "Unsupported Operation Exception";
}

void MenuComponent::removeComp(shared_ptr<MenuComponent> menuComponent)
{
	throw "Unsupported Operation Exception";
}

shared_ptr<MenuComponent> MenuComponent::getChild(int i)
{
	throw "Unsupported Operation Exception";
}

string MenuComponent::getName()
{
	throw "Unsupported Operation Exception";
}

string MenuComponent::getDescription()
{
	throw "Unsupported Operation Exception";
}

double MenuComponent::getPrice()
{
	throw "Unsupported Operation Exception";
}

bool MenuComponent::isVegetarian()
{
	throw "Unsupported Operation Exception";
}

void MenuComponent::print()
{
	throw "Unsupported Operation Exception";
}

void MenuComponent::getMenuComponents(vector< shared_ptr<MenuComponent> >& menuComponents)
{
	throw "Unsupported Operation Exception";
}

void MenuComponent::getAllMenuComponents(vector< shared_ptr<MenuComponent> >& menuComponents)
{
	throw "Unsupported Operation Exception";
}

void MenuComponent::accept(IVisitor& visitor)
{
	throw "Unsupported Operation Exception";
}