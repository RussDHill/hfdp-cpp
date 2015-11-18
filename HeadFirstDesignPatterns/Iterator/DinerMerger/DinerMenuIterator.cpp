#include "stdafx.h"
#include "DinerMenuIterator.h"
#include "DinerMenu.h"

DinerMenuIterator::DinerMenuIterator(shared_ptr<MenuItem>* items)
	:menuItems(items), position(0)
{

}

DinerMenuIterator::~DinerMenuIterator()
{

}

shared_ptr<MenuItem> DinerMenuIterator::next()
{
	shared_ptr<MenuItem> menuItem = menuItems[position];
	position++;
	return menuItem;
}

bool DinerMenuIterator::hasNext()
{

	if ((position >= DinerMenu::MAX_ITEMS) || (menuItems[position] == 0)) {
		return false;
	} else {
		return true;
	}
}
