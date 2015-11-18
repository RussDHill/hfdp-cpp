#include "stdafx.h"
#include "RubberDuck.h"
#include "Observable.h"

RubberDuck::RubberDuck()
{
	observable = shared_ptr<Observable>(new Observable(this));
}

RubberDuck::~RubberDuck()
{
	
}

void RubberDuck::registerObserver(Observer* observer)
{
	observable->registerObserver(observer);
}

void RubberDuck::notifyObservers() const
{
	observable->notifyObservers();
}

void RubberDuck::quack() const
{
	cout << "Squeak" << endl;
	notifyObservers();
}

string RubberDuck::toString() const
{
	return "Rubber Duck";
}
