#pragma once

#include "MenuComponent.h"

class MenuItem : public MenuComponent  
{
public:
	virtual void print() const;
	virtual bool isVegetarian() const;
	virtual double getPrice() const;
	virtual string getDescription() const;
	virtual string getName() const;
	MenuItem(const string& name, const string& description, bool vegetarian, double price);
	virtual ~MenuItem();
private:
	double itemPrice;
	bool itemVegetarian;
	string itemDescription;
	string itemName;
};
