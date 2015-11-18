#pragma once

class MenuComponent
{
public:
	virtual void getMenuComponents(vector< shared_ptr<MenuComponent> >& vec);
	virtual void print() const;
	virtual bool isVegetarian() const;
	virtual double getPrice() const;
	virtual string getDescription() const;
	virtual string getName() const;
	virtual shared_ptr<MenuComponent> getChild(int i) const;
	virtual void removeComp(shared_ptr<MenuComponent> menuComponent);
	virtual void add(shared_ptr<MenuComponent> menuComponent);
	MenuComponent();
	virtual ~MenuComponent();
private:
	MenuComponent(const MenuComponent&); 
	MenuComponent& operator=(const MenuComponent&);
};
