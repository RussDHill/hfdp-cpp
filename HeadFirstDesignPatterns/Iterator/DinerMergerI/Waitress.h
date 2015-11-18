#pragma once

class MenuItem;
class DinerMenu;
class PancakeHouseMenu;

class Waitress  
{
public:
	bool isItemVegetarian(const string& name);
	void printVegetarianMenu();
	void printMenu();
	Waitress(shared_ptr<PancakeHouseMenu> houseMenu, shared_ptr<DinerMenu> menu);
	virtual ~Waitress();
private:
	bool isVegetarian(const string& name, vector< shared_ptr<MenuItem> >& menuItems);
	shared_ptr<PancakeHouseMenu> pancakeHouseMenu;
	shared_ptr<DinerMenu> dinerMenu;

	Waitress(const Waitress&); 
	Waitress& operator=(const Waitress&);
};
