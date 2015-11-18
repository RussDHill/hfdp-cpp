#pragma once

#include "IFace.h"

class QuackCounter : public Quackable  
{
public:
	virtual string toString() const;
	static int getQuacks();
	virtual void quack() const;
	virtual void registerObserver(Observer* observer);
	virtual void notifyObservers() const;
	QuackCounter(shared_ptr<Quackable> duck);
	virtual ~QuackCounter();
protected:
	static int numberOfQuacks;
private:
	shared_ptr<Quackable> counterDuck;

	DISABLE_COPY_AND_ASSIGN(QuackCounter)
};
