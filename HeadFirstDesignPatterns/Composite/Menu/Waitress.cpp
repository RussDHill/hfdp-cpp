#include "stdafx.h"
#include "Waitress.h"

Waitress::Waitress(shared_ptr<MenuComponent> menus)
	:allMenus(menus)
{

}

Waitress::~Waitress()
{

}

void Waitress::printMenu()
{
	allMenus->print();
}