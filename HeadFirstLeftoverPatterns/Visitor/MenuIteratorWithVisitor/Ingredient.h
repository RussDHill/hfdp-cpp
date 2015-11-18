#pragma once

#include "MenuComponent.h"

class Ingredient : public MenuComponent  
{
public:
	virtual void accept(IVisitor& visitor);
	virtual void getMenuComponents(vector< shared_ptr<MenuComponent> >& vec);
	virtual void print();
	virtual string getDescription();
	virtual string getName();
	Ingredient(string name, string description);
	virtual ~Ingredient();
private:
	string ingredientDescription;
	string ingredientName;
};
