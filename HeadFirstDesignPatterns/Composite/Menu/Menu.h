#pragma once

#include "MenuComponent.h"

class Menu : public MenuComponent  
{
public:
	virtual void print() const;
	virtual string getDescription() const;
	virtual string getName() const;
	virtual shared_ptr<MenuComponent> getChild(int i) const;
	virtual void removeComp(shared_ptr<MenuComponent> menuComponent);
	virtual void add(shared_ptr<MenuComponent> menuComponent);
	Menu(const string& name, const string& description);
	virtual ~Menu();
private:
	string menuDescription;
	string menuName;
	vector< shared_ptr<MenuComponent> > menuComponents;
};
