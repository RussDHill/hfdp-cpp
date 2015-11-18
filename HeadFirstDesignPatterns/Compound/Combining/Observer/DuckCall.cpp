#include "stdafx.h"
#include "DuckCall.h"
#include "Observable.h"

DuckCall::DuckCall()
{
	observable = shared_ptr<Observable>(new Observable(this));
}

DuckCall::~DuckCall()
{

}

void DuckCall::registerObserver(Observer* observer)
{
	observable->registerObserver(observer);
}

void DuckCall::notifyObservers() const
{
	observable->notifyObservers();
}

void DuckCall::quack() const
{
	cout << "Kwak" << endl;
	notifyObservers();
}

string DuckCall::toString() const
{
	return "Duck Call";
}
