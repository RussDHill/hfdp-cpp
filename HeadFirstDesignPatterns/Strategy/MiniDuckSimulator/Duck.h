#pragma once

#include "IFace.h"

class QuackBehavior;
class FlyBehavior;

class Duck
{
public:
	void setQuackBehavior(QuackBehavior* qb);
	void setFlyBehavior(FlyBehavior* fb);
	virtual void display() = 0;
	void swim();
	void performQuack();
	void performFly();
	Duck();
	virtual ~Duck();
protected:
	shared_ptr<QuackBehavior> quackBehavior;
	shared_ptr<FlyBehavior> flyBehavior;

	DISABLE_COPY_AND_ASSIGN(Duck)
};
