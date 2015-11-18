#pragma once

#include "IFace.h"

class Observable;

class RubberDuck : public Quackable  
{
public:
	virtual string toString() const;
	virtual void quack() const;
	virtual void registerObserver(Observer* observer);
	virtual void notifyObservers() const;
	RubberDuck();
	virtual ~RubberDuck();
private:
	shared_ptr<Observable> observable;

	DISABLE_COPY_AND_ASSIGN(RubberDuck)
};

