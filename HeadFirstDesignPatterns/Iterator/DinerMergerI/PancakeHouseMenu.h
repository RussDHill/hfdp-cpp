#pragma once

#include "IFace.h"
#include "MenuItem.h"

class MenuItem;

class PancakeHouseMenu : public Menu
{
public:
	string toString() const;
	vector< shared_ptr<MenuItem> > getMenuItems();
	void addItem(const string& name, const string& description, bool vegetarian, double price);
	PancakeHouseMenu();
	virtual ~PancakeHouseMenu();
private:
	vector< shared_ptr<MenuItem> > menuItems;

	DISABLE_COPY_AND_ASSIGN(PancakeHouseMenu)
};
