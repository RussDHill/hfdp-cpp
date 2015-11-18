#pragma once

#include "IFace.h"

class CountingDuckFactory : public AbstractDuckFactory  
{
public:
	virtual shared_ptr<Quackable> createMallardDuck();
	virtual shared_ptr<Quackable> createRedheadDuck();
	virtual shared_ptr<Quackable> createDuckCall();
	virtual shared_ptr<Quackable> createRubberDuck();

	CountingDuckFactory();
	virtual ~CountingDuckFactory();

	DISABLE_COPY_AND_ASSIGN(CountingDuckFactory)
};
