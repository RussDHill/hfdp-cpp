#pragma once

class MenuComponent;

class CompositeIterator
{
public:
	void getMenuComponents(vector< shared_ptr<MenuComponent> > &vec);
	CompositeIterator(shared_ptr<MenuComponent> allMenus);
	CompositeIterator();
	virtual ~CompositeIterator();
private:
	shared_ptr<MenuComponent> menuComponentMenus;
};
