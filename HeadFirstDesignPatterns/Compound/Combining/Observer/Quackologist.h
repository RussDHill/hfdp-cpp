#pragma once

#include "IFace.h"

class Quackologist : public Observer  
{
public:
	virtual void update(QuackObservable* duck);
	Quackologist();
	virtual ~Quackologist();

	DISABLE_COPY_AND_ASSIGN(Quackologist)
};

