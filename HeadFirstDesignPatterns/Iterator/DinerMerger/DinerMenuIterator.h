#pragma once

#include "IFace.h"
#include "MenuItem.h"

class MenuItem;

class DinerMenuIterator : public Iterator  
{
public:
	bool hasNext();
	shared_ptr<MenuItem> next();
	DinerMenuIterator(shared_ptr<MenuItem>* items);
	virtual ~DinerMenuIterator();
private:
	shared_ptr<MenuItem>* menuItems;
	int position;

	DISABLE_COPY_AND_ASSIGN(DinerMenuIterator)
};
