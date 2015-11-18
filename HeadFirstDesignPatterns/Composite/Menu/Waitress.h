#pragma once

#include "MenuComponent.h"

class MenuComponent;

class Waitress  
{
public:
	void printMenu();
	Waitress(shared_ptr<MenuComponent> allMenus);
	virtual ~Waitress();
private:
	shared_ptr<MenuComponent> allMenus;

	Waitress(const Waitress&); 
	Waitress& operator=(const Waitress&);
};
