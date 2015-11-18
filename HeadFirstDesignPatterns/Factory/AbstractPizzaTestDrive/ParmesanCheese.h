#pragma once

#include "IFace.h"

class ParmesanCheese : public Cheese  
{
public:
	virtual string toString() const;
	ParmesanCheese();
	virtual ~ParmesanCheese();

	DISABLE_COPY_AND_ASSIGN(ParmesanCheese)
};
