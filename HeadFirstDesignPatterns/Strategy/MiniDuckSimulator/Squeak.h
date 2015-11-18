#pragma once
#include "iface.h"

class Squeak :
	public QuackBehavior
{
public:
	Squeak();
	virtual ~Squeak();
	virtual void quack();

	DISABLE_COPY_AND_ASSIGN(Squeak)
};
