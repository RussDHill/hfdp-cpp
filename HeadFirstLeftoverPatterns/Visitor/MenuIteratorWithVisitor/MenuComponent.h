#pragma once

#include "IFace.h"

class IVisitor;

class MenuComponent : public enable_shared_from_this<MenuComponent>  
{
public:
	virtual void accept(IVisitor& visitor);
	virtual void getMenuComponents(vector< shared_ptr<MenuComponent> >& menuComponents);
	virtual void getAllMenuComponents(vector< shared_ptr<MenuComponent> >& menuComponents);
	virtual void print();
	virtual bool isVegetarian();
	virtual double getPrice();
	virtual string getDescription();
	virtual string getName();
	virtual shared_ptr<MenuComponent> getChild(int i);
	virtual void removeComp(shared_ptr<MenuComponent> menuComponent);
	virtual void add(shared_ptr<MenuComponent> menuComponent);
	MenuComponent();
	virtual ~MenuComponent();

	DISABLE_COPY_AND_ASSIGN(MenuComponent)
};
