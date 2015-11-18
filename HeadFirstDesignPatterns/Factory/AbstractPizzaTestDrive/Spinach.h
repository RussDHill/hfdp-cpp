#pragma once

#include "IFace.h"

class Spinach : public Veggies  
{
public:
	virtual string toString() const;
	Spinach();
	virtual ~Spinach();

	DISABLE_COPY_AND_ASSIGN(Spinach)
};
