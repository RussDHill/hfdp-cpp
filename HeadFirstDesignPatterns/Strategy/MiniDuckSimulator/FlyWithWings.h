#pragma once
#include "iface.h"

class FlyWithWings :
	public FlyBehavior
{
public:
	FlyWithWings();
	virtual ~FlyWithWings();
	virtual void fly();

	DISABLE_COPY_AND_ASSIGN(FlyWithWings)
};
