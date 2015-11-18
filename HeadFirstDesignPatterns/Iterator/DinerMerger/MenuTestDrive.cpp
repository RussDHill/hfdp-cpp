// MenuTestDrive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Waitress.h"
#include "DinerMenu.h"
#include "PancakeHouseMenu.h"

int main(int argc, char* argv[])
{
	shared_ptr<PancakeHouseMenu> pancakeHouseMenu(new PancakeHouseMenu());
	shared_ptr<DinerMenu> dinerMenu(new DinerMenu());
 
	shared_ptr<Waitress> waitress(new Waitress(pancakeHouseMenu, dinerMenu));
 
	waitress->printMenu();
	waitress->printVegetarianMenu();

	return 0;
}

