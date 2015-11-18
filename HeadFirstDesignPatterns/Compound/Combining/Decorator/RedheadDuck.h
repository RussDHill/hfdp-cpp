#pragma once

#include "IFace.h"

class RedheadDuck : public Quackable  
{
public:
	virtual void quack() const;
	RedheadDuck();
	virtual ~RedheadDuck();

	DISABLE_COPY_AND_ASSIGN(RedheadDuck)
};
