#pragma once

#include "IFace.h"

class MarinaraSauce : public Sauce  
{
public:
	virtual string toString() const;
	MarinaraSauce();
	virtual ~MarinaraSauce();

	DISABLE_COPY_AND_ASSIGN(MarinaraSauce)
};
