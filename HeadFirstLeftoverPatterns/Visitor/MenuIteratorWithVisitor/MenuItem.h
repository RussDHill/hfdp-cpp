#pragma once

#include "MenuComponent.h"

class MenuItem : public MenuComponent  
{
public:
	virtual void accept(IVisitor& visitor);
	virtual shared_ptr<MenuComponent> getChild(int i);
	virtual void removeComp(shared_ptr<MenuComponent> ingredient);
	virtual void add(shared_ptr<MenuComponent> ingredient);
	virtual void getMenuComponents(vector< shared_ptr<MenuComponent> >& menuComponents);
	virtual void getAllMenuComponents(vector< shared_ptr<MenuComponent> >& menuComponents);
	virtual void print();
	virtual bool isVegetarian();
	virtual double getPrice();
	virtual string getName();
	MenuItem(string name, vector< shared_ptr<MenuComponent> >& ingredients, bool vegetarian, double price);
	MenuItem();
	virtual ~MenuItem();
private:
	double menuItemPrice;
	bool menuItemVegetarian;
	string menuItemName;
	vector< shared_ptr<MenuComponent> > menuItemIngredients;
};
