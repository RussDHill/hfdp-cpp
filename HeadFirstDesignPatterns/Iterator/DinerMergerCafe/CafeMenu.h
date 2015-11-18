#pragma once

#include "IFace.h"
#include "MenuItem.h"

class MenuItem;

class CafeMenu : public Menu
{
public:
	string toString();
	vector< shared_ptr<MenuItem> > getMenuItems();
	void addItem(const string& name, const string& description, bool vegetarian, double price);
	CafeMenu();
	virtual ~CafeMenu();
private:
	map<string, shared_ptr<MenuItem> > menuItems;

	DISABLE_COPY_AND_ASSIGN(CafeMenu)
};

