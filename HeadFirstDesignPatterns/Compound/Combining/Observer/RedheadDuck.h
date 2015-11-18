#pragma once

#include "IFace.h"

class Observable;

class RedheadDuck : public Quackable  
{
public:
	virtual string toString() const;
	virtual void quack() const;
	virtual void registerObserver(Observer* observer);
	virtual void notifyObservers() const;
	RedheadDuck();
	virtual ~RedheadDuck();
private:
	shared_ptr<Observable> observable;

	DISABLE_COPY_AND_ASSIGN(RedheadDuck)
};
