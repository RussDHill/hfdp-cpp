#pragma once

#include "IFace.h"

class ReggianoCheese : public Cheese  
{
public:
	virtual string toString() const;
	ReggianoCheese();
	virtual ~ReggianoCheese();

	DISABLE_COPY_AND_ASSIGN(ReggianoCheese)
};
