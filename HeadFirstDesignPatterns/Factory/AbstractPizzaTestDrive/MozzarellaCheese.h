#pragma once

#include "IFace.h"

class MozzarellaCheese : public Cheese  
{
public:
	virtual string toString() const;
	MozzarellaCheese();
	virtual ~MozzarellaCheese();

	DISABLE_COPY_AND_ASSIGN(MozzarellaCheese)
};
