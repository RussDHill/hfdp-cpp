#pragma once

#include "IFace.h"

class Onion : public Veggies  
{
public:
	virtual string toString() const;
	Onion();
	virtual ~Onion();

	DISABLE_COPY_AND_ASSIGN(Onion)
};
