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

shared_ptr<MenuComponent> MenuComponent::getChild(int i) const
{
	throw "Unsupported Operation Exception";
}

string MenuComponent::getName() const
{
	throw "Unsupported Operation Exception";
}

string MenuComponent::getDescription() const
{
	throw "Unsupported Operation Exception";
}

double MenuComponent::getPrice() const
{
	throw "Unsupported Operation Exception";
}

bool MenuComponent::isVegetarian() const
{
	throw "Unsupported Operation Exception";
}

void MenuComponent::print() const
{
	throw "Unsupported Operation Exception";
}

void MenuComponent::getMenuComponents(vector< shared_ptr<MenuComponent> >& vec)
{
	throw "Unsupported Operation Exception";
}