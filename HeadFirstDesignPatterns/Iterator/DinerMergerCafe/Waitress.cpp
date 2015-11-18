#include "stdafx.h"
#include "Waitress.h"
#include "MenuItem.h"
#include "IFace.h"

Waitress::Waitress(shared_ptr<Menu> houseMenu, shared_ptr<Menu> menu, shared_ptr<Menu> menuCafe)
	:pancakeHouseMenu(houseMenu), dinerMenu(menu), cafeMenu(menuCafe)
{
	time_t timeNow = time(NULL);
	tm* tmNow = localtime(&timeNow);

	char szDay[8] = {0};
	strftime(szDay, 8, "%w", tmNow);

	int nDay = atoi(szDay);
	even = nDay % 2;
}

Waitress::~Waitress()
{

}

void Waitress::printMenu()
{
	vector< shared_ptr<MenuItem> > pancakeHouseMenuItems = pancakeHouseMenu->getMenuItems();
	vector< shared_ptr<MenuItem> > dinerMenuItems = dinerMenu->getMenuItems();
	vector< shared_ptr<MenuItem> > cafeMenuItems = cafeMenu->getMenuItems();
	ostream_iterator< shared_ptr<MenuItem> > output(cout, "\n");

	cout << "MENU" << endl << "----" << endl << "BREAKFAST" << endl;
	copy(pancakeHouseMenuItems.begin(), pancakeHouseMenuItems.end(), output);
	cout << endl;

	cout << endl << "LUNCH" << endl;
	//copy(dinerMenuItems.begin(), dinerMenuItems.end(), output);
	alternateCopy(dinerMenuItems.begin(), dinerMenuItems.end(), output);
	cout << endl;

	cout << endl << "DINNER" << endl;
	copy(cafeMenuItems.begin(), cafeMenuItems.end(), output);
	cout << endl;
}

void Waitress::printVegetarianMenu()
{
	vector< shared_ptr<MenuItem> > pancakeHouseMenuItems = pancakeHouseMenu->getMenuItems();
	vector< shared_ptr<MenuItem> > dinerMenuItems = dinerMenu->getMenuItems();
	vector< shared_ptr<MenuItem> > cafeMenuItems = cafeMenu->getMenuItems();
	ostream_iterator< shared_ptr<MenuItem> > output(cout, "\n");

	cout << endl << "VEGETARIAN" << endl ;
	remove_copy_if(pancakeHouseMenuItems.begin(), pancakeHouseMenuItems.end(), output, ptr_fun(&MenuItem::isNotVegetarian));
	remove_copy_if(dinerMenuItems.begin(), dinerMenuItems.end(), output, ptr_fun(&MenuItem::isNotVegetarian));
	remove_copy_if(cafeMenuItems.begin(), cafeMenuItems.end(), output, ptr_fun(&MenuItem::isNotVegetarian));
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
	vector< shared_ptr<MenuItem> > cafeMenuItems = cafeMenu->getMenuItems();
	if (isVegetarian(name, cafeMenuItems)) {
		return true;
	}
	return false;	
}

bool Waitress::isVegetarian(const string& name, vector< shared_ptr<MenuItem> >& menuItems)
{
	vector< shared_ptr<MenuItem> >::iterator it;
	for (it = menuItems.begin();it != menuItems.end();++it) {
		 shared_ptr<MenuItem>  menuItem = *it;
		if (name.compare(menuItem->getName()) == 0) {
			if (menuItem->isVegetarian()) {
				return true;
			}
		}
	}
	return false;
}

void Waitress::alternateCopy(vector< shared_ptr<MenuItem> >::iterator& begin, vector< shared_ptr<MenuItem> >::iterator& end, ostream_iterator< shared_ptr<MenuItem> >& output)
{
	if (even) {
		begin++;
	}
	while (begin != end) {
		*output++ = *begin;
		begin++;
		if (begin == end) {
			break;
		}
		begin++;
	}
}