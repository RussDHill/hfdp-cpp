#pragma once

#include "IFace.h"

class RedheadDuck : public Quackable  
{
public:
	virtual void quack() const;
	RedheadDuck();
	virtual ~RedheadDuck();
	virtual string toString() const;
};
