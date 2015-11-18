#pragma once

#include "IFace.h"

class BlackOlives : public Veggies  
{
public:
	virtual string toString() const;
	BlackOlives();
	virtual ~BlackOlives();

	DISABLE_COPY_AND_ASSIGN(BlackOlives)
};
