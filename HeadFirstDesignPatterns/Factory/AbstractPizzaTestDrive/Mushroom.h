#pragma once

#include "IFace.h"

class Mushroom : public Veggies  
{
public:
	virtual string toString() const;
	Mushroom();
	virtual ~Mushroom();

	DISABLE_COPY_AND_ASSIGN(Mushroom)
};
