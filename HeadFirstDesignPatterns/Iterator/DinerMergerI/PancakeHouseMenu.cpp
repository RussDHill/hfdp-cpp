#include "stdafx.h"
#include "PancakeHouseMenu.h"
#include "MenuItem.h"

PancakeHouseMenu::PancakeHouseMenu()
{

	addItem("K&B's Pancake Breakfast", 
			"Pancakes with scrambled eggs, and toast", 
			true,
			2.99);
 
	addItem("Regular Pancake Breakfast", 
			"Pancakes with fried eggs, sausage", 
			false,
			2.99);
 
	addItem("Blueberry Pancakes",
			"Pancakes made with fresh blueberries",
			true,
			3.49);
 
	addItem("Waffles",
			"Waffles, with your choice of blueberries or strawberries",
			true,
			3.59);

}

PancakeHouseMenu::~PancakeHouseMenu()
{

}

void PancakeHouseMenu::addItem(const string& name, const string& description, bool vegetarian, double price)
{
	shared_ptr<MenuItem> menuItem(new MenuItem(name, description, vegetarian, price));
	menuItems.push_back(menuItem);
}

vector< shared_ptr<MenuItem> > PancakeHouseMenu::getMenuItems()
{
	return menuItems;
}

string PancakeHouseMenu::toString() const
{
	return "Objectville Pancake House Menu";
}
