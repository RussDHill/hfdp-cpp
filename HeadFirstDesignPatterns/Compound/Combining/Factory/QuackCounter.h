#pragma once

#include "IFace.h"

class QuackCounter : public Quackable  
{
public:
	static int getQuacks();
	void quack() const;
	QuackCounter(shared_ptr<Quackable> duck);
	virtual ~QuackCounter();
protected:
	static int numberOfQuacks;
private:
	shared_ptr<Quackable> counterDuck;

	DISABLE_COPY_AND_ASSIGN(QuackCounter)
};
