#pragma once
#include "iface.h"

class Quack :
	public QuackBehavior
{
public:
	Quack();
	virtual ~Quack();
	virtual void quack();

	DISABLE_COPY_AND_ASSIGN(Quack)
};
