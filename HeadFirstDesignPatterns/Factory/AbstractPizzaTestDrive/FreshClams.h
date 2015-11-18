#pragma once

#include "IFace.h"

class FreshClams : public Clams  
{
public:
	virtual string toString() const;
	FreshClams();
	virtual ~FreshClams();

	DISABLE_COPY_AND_ASSIGN(FreshClams)
};
