#include "stdafx.h"
#include "CafeMenu.h"

//////////////////////////////////////////////////////////////////////
// Note - STL does not provide a Hashtable, so map is used instead. 
//////////////////////////////////////////////////////////////////////

CafeMenu::CafeMenu()
{
	addItem("Veggie Burger and Air Fries",
		"Veggie burger on a whole wheat bun, lettuce, tomato, and fries", true, 3.99);
	addItem("Soup of the day",
		"A cup of the soup of the day, with a side salad", false, 3.69);
	addItem("Burrito",
		"A large burrito, with whole pinto beans, salsa, guacamole", true, 4.29);
}

CafeMenu::~CafeMenu()
{

}

void CafeMenu::addItem(const string& name, const string& description, bool vegetarian, double price) 
{
	shared_ptr<MenuItem> menuItem(new MenuItem(name, description, vegetarian, price));
	menuItems.insert(make_pair(name, menuItem));
}

vector< shared_ptr<MenuItem> > CafeMenu::getMenuItems()
{
	map<string,  shared_ptr<MenuItem> >::const_iterator it;
	vector< shared_ptr<MenuItem> > cafeMenuItems;

	for(it=menuItems.begin();it != menuItems.end();++it) { 
        cafeMenuItems.push_back(it->second); 
    } 
	return cafeMenuItems;
}

string CafeMenu::toString()
{
	return "Objectville Cafe Menu";
}

