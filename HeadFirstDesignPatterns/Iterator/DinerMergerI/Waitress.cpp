#include "stdafx.h"
#include "Waitress.h"
#include "MenuItem.h"
#include "PancakeHouseMenu.h"
#include "DinerMenu.h"

Waitress::Waitress(shared_ptr<PancakeHouseMenu> houseMenu, shared_ptr<DinerMenu> menu)
	:pancakeHouseMenu(houseMenu), dinerMenu(menu)
{

}

Waitress::~Waitress()
{

}

void Waitress::printMenu()
{
	vector< shared_ptr<MenuItem> > pancakeHouseMenuItems = pancakeHouseMenu->getMenuItems();
	vector< shared_ptr<MenuItem> > dinerMenuItems = dinerMenu->getMenuItems();
	ostream_iterator< shared_ptr<MenuItem> > output(cout, "\n");

	cout << "MENU" << endl << "----" << endl << "BREAKFAST" << endl;
	copy(pancakeHouseMenuItems.begin(), pancakeHouseMenuItems.end(), output);
	cout << endl;

	cout << endl << "LUNCH" << endl ;
	copy(dinerMenuItems.begin(), dinerMenuItems.end(), output);
	cout << endl;
}

void Waitress::printVegetarianMenu()
{
	vector< shared_ptr<MenuItem> > pancakeHouseMenuItems = pancakeHouseMenu->getMenuItems();
	vector< shared_ptr<MenuItem> > dinerMenuItems = dinerMenu->getMenuItems();
	ostream_iterator< shared_ptr<MenuItem> > output(cout, "\n");

	cout << endl << "VEGETARIAN" << endl ;
	remove_copy_if(pancakeHouseMenuItems.begin(), pancakeHouseMenuItems.end(), output, ptr_fun(&MenuItem::isNotVegetarian));
	remove_copy_if(dinerMenuItems.begin(), dinerMenuItems.end(), output, ptr_fun(&MenuItem::isNotVegetarian));
	cout << endl;
}

bool Waitress::isItemVegetarian(const string& name)
{
	vector< shared_ptr<MenuItem> > pancakeHouseMenuItems = pancakeHouseMenu->getMenuItems();
	if (isVegetarian(name, pancakeHouseMenuItems)) {
		return true;
	}
	vector< shared_ptr<MenuItem> > dinerMenuItems = dinerMenu->getMenuItems();
	if (isVegetarian(name, dinerMenuItems)) {
		return true;
	}
	return false;
}

bool Waitress::isVegetarian(const string& name, vector< shared_ptr<MenuItem> >& menuItems)
{
	vector< shared_ptr<MenuItem> >::iterator it;
	for (it = menuItems.begin();it != menuItems.end();++it) {
		shared_ptr<MenuItem> menuItem = *it;
		if (name.compare(menuItem->getName()) == 0) {
			if (menuItem->isVegetarian()) {
				return true;
			}
		}
	}
	return false;
}
