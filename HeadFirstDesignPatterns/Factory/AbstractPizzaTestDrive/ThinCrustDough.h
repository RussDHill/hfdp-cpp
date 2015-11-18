#pragma once

#include "IFace.h"

class ThinCrustDough : public Dough  
{
public:
	virtual string toString() const;
	ThinCrustDough();
	virtual ~ThinCrustDough();

	DISABLE_COPY_AND_ASSIGN(ThinCrustDough)
};
