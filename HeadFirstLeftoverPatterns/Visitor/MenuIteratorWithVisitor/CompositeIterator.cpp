#include "stdafx.h"
#include "CompositeIterator.h"
#include "MenuComponent.h"

CompositeIterator::CompositeIterator(shared_ptr<MenuComponent> allMenus)
	: menuComponentMenus(allMenus)
{

}

CompositeIterator::CompositeIterator()
{

}

CompositeIterator::~CompositeIterator()
{

}

void CompositeIterator::getMenuComponents(vector< shared_ptr<MenuComponent> > &vec)
{
	menuComponentMenus->getMenuComponents(vec);
}