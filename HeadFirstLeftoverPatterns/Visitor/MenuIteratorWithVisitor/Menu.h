#pragma once

#include "MenuComponent.h"

class Menu : public MenuComponent  
{
public:
	virtual void accept(IVisitor& visitor);
	virtual void getMenuComponents(vector< shared_ptr<MenuComponent> >& menuComponents);
	virtual void getAllMenuComponents(vector< shared_ptr<MenuComponent> >& menuComponents);
	virtual void print();
	virtual string getDescription();
	virtual string getName();
	virtual shared_ptr<MenuComponent> getChild(int i);
	virtual void removeComp(shared_ptr<MenuComponent> menuComponent);
	virtual void add(shared_ptr<MenuComponent> menuComponent);
	Menu(string name, string description);
	Menu();
	virtual ~Menu();
private:
	string menuDescription;
	string menuName;
	vector< shared_ptr<MenuComponent> > menuItems;
};
