#pragma once
#include "iface.h"

class FlyNoWay :
	public FlyBehavior
{
public:
	FlyNoWay();
	virtual ~FlyNoWay();
	virtual void fly();

	DISABLE_COPY_AND_ASSIGN(FlyNoWay)
};
