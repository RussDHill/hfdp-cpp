#pragma once

#include "IFace.h"

class PancakeHouseMenuIterator : public Iterator  
{
public:
	bool hasNext();
	shared_ptr<MenuItem> next();
	PancakeHouseMenuIterator(vector< shared_ptr<MenuItem> >& items);
	virtual ~PancakeHouseMenuIterator();
private:
	vector< shared_ptr<MenuItem> > menuItems;
	unsigned position;

	DISABLE_COPY_AND_ASSIGN(PancakeHouseMenuIterator)
};
