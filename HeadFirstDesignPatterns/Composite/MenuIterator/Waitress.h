#pragma once

class MenuComponent;

class Waitress  
{
public:
	void printVegetarianMenu() const;
	void printMenu() const;
	Waitress(shared_ptr<MenuComponent> menus);
	virtual ~Waitress();
private:
	shared_ptr<MenuComponent> allMenus;

	Waitress(const Waitress&); 
	Waitress& operator=(const Waitress&);
};
