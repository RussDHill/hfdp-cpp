#pragma once
#include "iface.h"

class MuteQuack :
	public QuackBehavior
{
public:
	MuteQuack();
	virtual ~MuteQuack();
	virtual void quack();
};
