#pragma once

#include "IFace.h"

class PlumTomatoSauce : public Sauce  
{
public:
	virtual string toString() const;
	PlumTomatoSauce();
	virtual ~PlumTomatoSauce();

	DISABLE_COPY_AND_ASSIGN(PlumTomatoSauce)
};
