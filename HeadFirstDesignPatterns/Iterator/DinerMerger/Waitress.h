#pragma once

class DinerMenu;
class PancakeHouseMenu;
class Iterator;

class Waitress  
{
public:
	bool isItemVegetarian(const string& name);
	void printVegetarianMenu();
	void printMenu();
	Waitress(shared_ptr<PancakeHouseMenu> pancakeHouseMenu, shared_ptr<DinerMenu> dinerMenu);
	virtual ~Waitress();
private:
	bool isVegetarian(const string& name, shared_ptr<Iterator> iter);
	void printVegetarianMenu(shared_ptr<Iterator> iter);
	void printMenu(shared_ptr<Iterator> iterator);
	shared_ptr<PancakeHouseMenu> pancakeHouseMenu;
	shared_ptr<DinerMenu> dinerMenu;

	Waitress(const Waitress&);
	Waitress& operator=(const Waitress&);
};
