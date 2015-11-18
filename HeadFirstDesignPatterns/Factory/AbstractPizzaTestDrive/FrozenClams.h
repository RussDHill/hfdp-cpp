#pragma once

#include "IFace.h"

class FrozenClams : public Clams  
{
public:
	virtual string toString() const;
	FrozenClams();
	virtual ~FrozenClams();

	DISABLE_COPY_AND_ASSIGN(FrozenClams)
};
