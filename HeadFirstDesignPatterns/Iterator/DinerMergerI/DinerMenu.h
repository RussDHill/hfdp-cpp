#pragma once

#include "IFace.h"

class MenuItem;

class DinerMenu : public Menu
{
public:
	static const int MAX_ITEMS = 6;
	static const int MAX = 7;
	string toString() const;
	vector< shared_ptr<MenuItem> > getMenuItems();
	void addItem(const string& name, const string& description, bool vegetarian, double price);
	DinerMenu();
	virtual ~DinerMenu();
private:
	shared_ptr<MenuItem> menuItems[MAX];
	int numberOfItems;

	DISABLE_COPY_AND_ASSIGN(DinerMenu)
};
