#pragma once
#include "iface.h"

class DecoyDuck : public Quackable
{
public:
	virtual void quack() const;
	DecoyDuck();
	virtual ~DecoyDuck();
	virtual string toString() const;

	DISABLE_COPY_AND_ASSIGN(DecoyDuck)
};
