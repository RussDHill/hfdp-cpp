#include "stdafx.h"
#include "PancakeHouseMenuIterator.h"
#include "MenuItem.h"

PancakeHouseMenuIterator::PancakeHouseMenuIterator(vector< shared_ptr<MenuItem> >& items)
	:menuItems(items), position(0)
{
	
}

PancakeHouseMenuIterator::~PancakeHouseMenuIterator()
{

}

shared_ptr<MenuItem> PancakeHouseMenuIterator::next()
{
	shared_ptr<MenuItem> menuItem = menuItems[position];
	position++;
	return menuItem;
}

bool PancakeHouseMenuIterator::hasNext()
{
	if (position >= menuItems.size()) {
		return false;
	} else {
		return true;
	}
}
