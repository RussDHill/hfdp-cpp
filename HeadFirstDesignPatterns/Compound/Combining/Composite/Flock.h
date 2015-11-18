#pragma once

#include "IFace.h"

class Flock : public Quackable  
{
public:
	void quack() const;
	void add(shared_ptr<Quackable> quacker);
	Flock();
	virtual ~Flock();
	virtual string toString() const;
private:
	list< shared_ptr<Quackable> > quackers;

	DISABLE_COPY_AND_ASSIGN(Flock)
};

