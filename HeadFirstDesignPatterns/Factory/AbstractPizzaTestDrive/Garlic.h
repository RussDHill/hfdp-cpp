#pragma once

#include "IFace.h"

class Garlic : public Veggies  
{
public:
	virtual string toString() const;
	Garlic();
	virtual ~Garlic();

	DISABLE_COPY_AND_ASSIGN(Garlic)
};
