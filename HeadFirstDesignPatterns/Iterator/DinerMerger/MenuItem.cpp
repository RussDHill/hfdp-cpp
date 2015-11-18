#include "stdafx.h"
#include "MenuItem.h"


MenuItem::MenuItem(const string& name, const string& description, bool vegetarian, double price)
	:itemName(name), itemDescription(description), itemVegetarian(vegetarian), itemPrice(price)
{

}

MenuItem::~MenuItem()
{

}

string MenuItem::getName() const
{
	return itemName;
}

string MenuItem::getDescription() const
{
	return itemDescription;
}

double MenuItem::getPrice() const
{
	return itemPrice;
}

bool MenuItem::isVegetarian() const
{
	return itemVegetarian;
}

string MenuItem::toString() const
{
	ostringstream buffer;
	buffer << itemName << ", $" << itemPrice << endl << itemDescription;
	return buffer.str();
}
