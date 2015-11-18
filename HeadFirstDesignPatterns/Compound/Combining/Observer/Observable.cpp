#include "stdafx.h"
#include "Observable.h"

Observable::Observable(QuackObservable* duck)
	:observableDuck(duck)
{

}

Observable::~Observable()
{

}

void Observable::registerObserver(Observer* observer)
{
	observers.push_back(observer);
}

void Observable::notifyObservers() const
{
	list<class Observer*>::const_iterator it;
	for(it = observers.begin();it != observers.end();++it) {
		Observer* observer = (Observer*) *it;
		observer->update(observableDuck);
	}
}

string Observable::toString() const
{
	return "Observable";
}
