#pragma once

#include "IFace.h"

class Eggplant : public Veggies  
{
public:
	virtual string toString() const;
	Eggplant();
	virtual ~Eggplant();

	DISABLE_COPY_AND_ASSIGN(Eggplant)
};
