// MenuTestDrive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Waitress.h"
#include "CafeMenu.h"
#include "DinerMenu.h"
#include "PancakeHouseMenu.h"

int main(int argc, char* argv[])
{
	shared_ptr<PancakeHouseMenu> pancakeHouseMenu(new PancakeHouseMenu());
	shared_ptr<DinerMenu> dinerMenu(new DinerMenu());
	shared_ptr<CafeMenu> cafeMenu(new CafeMenu());
 
	shared_ptr<Waitress> waitress(new Waitress(pancakeHouseMenu, dinerMenu, cafeMenu));
 
	waitress->printMenu();

	waitress->printVegetarianMenu();

	cout << endl << "Customer asks, is the Hotdog vegetarian?" << endl;
	cout << "Waitress says: ";
	if (waitress->isItemVegetarian("Hotdog")) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	cout << endl << "Customer asks, is the Waffles vegetarian?" << endl;
	cout << "Waitress says: ";
	if (waitress->isItemVegetarian("Waffles")) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}

