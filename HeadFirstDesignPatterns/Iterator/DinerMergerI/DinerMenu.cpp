#include "stdafx.h"
#include "DinerMenu.h"
#include "MenuItem.h"

DinerMenu::DinerMenu()
{
	numberOfItems = 0;

	for (int i=0;i<MAX;i++) {
		menuItems[i].reset();
	}

	addItem("Vegetarian BLT",
		"(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);
	addItem("BLT",
		"Bacon with lettuce & tomato on whole wheat", false, 2.99);
	addItem("Soup of the day",
		"Soup of the day, with a side of potato salad", false, 3.29);
	addItem("Hotdog",
		"A hot dog, with saurkraut, relish, onions, topped with cheese",
		false, 3.05);
	addItem("Steamed Veggies and Brown Rice",
		"Steamed vegetables over brown rice", true, 3.99);
	addItem("Pasta",
		"Spaghetti with Marinara Sauce, and a slice of sourdough bread",
		true, 3.89);

}

DinerMenu::~DinerMenu()
{

}

void DinerMenu::addItem(const string& name, const string& description, bool vegetarian, double price) 
{
	shared_ptr<MenuItem> menuItem(new MenuItem(name, description, vegetarian, price));
	if (numberOfItems >= MAX_ITEMS) {
		cout << "Sorry, menu is full!  Can't add item to menu" << endl;
	} else {
		menuItems[numberOfItems] = menuItem;
		numberOfItems++;
	}
}

vector< shared_ptr<MenuItem> > DinerMenu::getMenuItems()
{
	vector< shared_ptr<MenuItem> > dinerMenuItems(menuItems, menuItems+MAX_ITEMS);
	return dinerMenuItems;
}

string DinerMenu::toString() const
{
	return "Objectville Diner Menu";
}

