#pragma once

#include "IFace.h"

class MallardDuck : public Quackable  
{
public:
	virtual void quack() const;
	MallardDuck();
	virtual ~MallardDuck();
	virtual string toString() const;
};
