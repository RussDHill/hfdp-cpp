#include "stdafx.h"
#include "Flock.h"

Flock::Flock()
{

}

Flock::~Flock()
{

}

void Flock::add(shared_ptr<Quackable> quacker)
{
	quackers.push_back(quacker);
}

void Flock::quack() const
{
	list< shared_ptr<Quackable> >::const_iterator it;
	for(it = quackers.begin();it != quackers.end();++it) {
		(*it)->quack();
	}
}

string Flock::toString() const
{
	return "Flock of Quackers";
}
