#pragma once

#include "IFace.h"

class RubberDuck : public Quackable  
{
public:
	virtual void quack() const;
	RubberDuck();
	virtual ~RubberDuck();

	DISABLE_COPY_AND_ASSIGN(RubberDuck)
};

