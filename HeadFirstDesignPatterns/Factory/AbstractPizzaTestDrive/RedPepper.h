#pragma once

#include "IFace.h"

class RedPepper : public Veggies  
{
public:
	virtual string toString() const;
	RedPepper();
	virtual ~RedPepper();

	DISABLE_COPY_AND_ASSIGN(RedPepper)
};
