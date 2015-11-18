#pragma once

#include "IFace.h"

class Flock : public Quackable  
{
public:
	virtual string toString() const;
	virtual void quack() const;
	virtual void registerObserver(Observer* observer);
	virtual void notifyObservers() const;
	void add(shared_ptr<Quackable> quacker);
	Flock();
	virtual ~Flock();
private:
	list< shared_ptr<Quackable> > quackers;

	DISABLE_COPY_AND_ASSIGN(Flock)
};

