#pragma once

class Menu;
class MenuItem;

class Waitress  
{
public:
	bool isItemVegetarian(const string& name);
	void printVegetarianMenu();
	void printMenu();
	Waitress(shared_ptr<Menu> houseMenu, shared_ptr<Menu> menu, shared_ptr<Menu> menuCafe);
	Waitress();
	virtual ~Waitress();
private:
	void alternateCopy(vector< shared_ptr<MenuItem> >::iterator& begin, vector< shared_ptr<MenuItem> >::iterator& end, ostream_iterator< shared_ptr<MenuItem> >& output);
	bool isVegetarian(const string& name, vector< shared_ptr<MenuItem> >& menuItems);
	shared_ptr<Menu> pancakeHouseMenu;
	shared_ptr<Menu> dinerMenu;
	shared_ptr<Menu> cafeMenu;
	bool even;

	Waitress(const Waitress&); 
	Waitress& operator=(const Waitress&);
};

