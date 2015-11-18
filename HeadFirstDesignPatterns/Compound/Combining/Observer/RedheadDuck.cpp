#include "stdafx.h"
#include "RedHeadDuck.h"
#include "Observable.h"

RedheadDuck::RedheadDuck()
{
	observable = shared_ptr<Observable>(new Observable(this));
}

RedheadDuck::~RedheadDuck()
{

}

void RedheadDuck::registerObserver(Observer* observer)
{
	observable->registerObserver(observer);
}

void RedheadDuck::notifyObservers() const
{
	observable->notifyObservers();
}

void RedheadDuck::quack() const
{
	cout << "Quack" << endl;
	notifyObservers();
}

string RedheadDuck::toString() const
{
	return "RedHead Duck";
}
