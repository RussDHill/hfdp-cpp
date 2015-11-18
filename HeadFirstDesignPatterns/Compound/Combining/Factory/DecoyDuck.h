#pragma once
#include "iface.h"

class DecoyDuck : public Quackable
{
public:
	virtual void quack() const;
	DecoyDuck(void);
	virtual ~DecoyDuck(void);
};
