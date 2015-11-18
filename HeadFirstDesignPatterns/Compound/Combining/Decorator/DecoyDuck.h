#pragma once
#include "iface.h"

class DecoyDuck : public Quackable
{
public:
	virtual void quack() const;
	DecoyDuck(void);
	virtual ~DecoyDuck(void);

	DISABLE_COPY_AND_ASSIGN(DecoyDuck)
};
