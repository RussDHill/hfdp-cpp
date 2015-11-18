#pragma once

#include "IFace.h"

class SlicedPepperoni : public Pepperoni  
{
public:
	virtual string toString() const;
	SlicedPepperoni();
	virtual ~SlicedPepperoni();

	DISABLE_COPY_AND_ASSIGN(SlicedPepperoni)
};
