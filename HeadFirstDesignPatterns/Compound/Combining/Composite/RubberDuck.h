#pragma once

#include "IFace.h"

class RubberDuck : public Quackable  
{
public:
	virtual void quack() const;
	RubberDuck();
	virtual ~RubberDuck();
	virtual string toString() const;
};

