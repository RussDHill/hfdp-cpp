#include "stdafx.h"
#include "MenuItem.h"

int MenuItem::size = 0;

MenuItem::MenuItem(string name, string description, bool vegetarian, double price)
	:name(name), description(description), vegetarian(vegetarian), price(price)
{

}

MenuItem::MenuItem()
{

}

MenuItem::~MenuItem()
{

}

string MenuItem::getName() {
	return name;
}

string MenuItem::getDescription() 
{
	return description;
}

double MenuItem::getPrice() 
{
	return price;
}

bool MenuItem::isVegetarian() 
{
	return vegetarian;
}

string MenuItem::toString() 
{
	char buffer[64];
	sprintf(buffer, "%.2f", price);
	return (name + ", $" + buffer + "\n   " + description);
}

void MenuItem::setSize(int size) 
{ 
	this->size = size; 
}

int MenuItem::getSize() 
{ 
	return size; 
}
