#include "stdafx.h"
#include "Flock.h"
#include "Observable.h"

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
		shared_ptr<Quackable> quacker = *it;
		quacker->quack();
	}
}

void Flock::registerObserver(Observer* observer)
{
	list< shared_ptr<Quackable> >::iterator it;
	for(it = quackers.begin();it != quackers.end();++it) {
		shared_ptr<Quackable> duck = *it;
		duck->registerObserver(observer);
	}
}

void Flock::notifyObservers() const
{

}

string Flock::toString() const
{
	return "Flock of Ducks";
}