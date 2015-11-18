#pragma once

#include "IFace.h"

class ThickCrustDough : public Dough  
{
public:
	virtual string toString() const;
	ThickCrustDough();
	virtual ~ThickCrustDough();

	DISABLE_COPY_AND_ASSIGN(ThickCrustDough)
};
