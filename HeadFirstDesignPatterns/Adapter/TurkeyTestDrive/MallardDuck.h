#pragma once

#include "IFace.h"

class MallardDuck : public Duck  
{
public:
	virtual void quack();
	virtual void fly();
	MallardDuck();
	virtual ~MallardDuck();

	DISABLE_COPY_AND_ASSIGN(MallardDuck)
};
