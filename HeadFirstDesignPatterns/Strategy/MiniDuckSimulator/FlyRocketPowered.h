#pragma once
#include "iface.h"

class FlyRocketPowered :
	public FlyBehavior
{
public:
	void fly();
	FlyRocketPowered();
	virtual ~FlyRocketPowered();

	DISABLE_COPY_AND_ASSIGN(FlyRocketPowered)
};
