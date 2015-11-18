#include "stdafx.h"
#include "MallardDuck.h"
#include "Observable.h"

MallardDuck::MallardDuck()
{
	observable = shared_ptr<Observable>(new Observable(this));
}

MallardDuck::~MallardDuck()
{

}

void MallardDuck::registerObserver(Observer* observer)
{
	observable->registerObserver(observer);
}

void MallardDuck::notifyObservers() const
{
	observable->notifyObservers();
}

void MallardDuck::quack() const
{
	cout << "Quack" << endl;
	notifyObservers();
}

string MallardDuck::toString() const
{
	return "Mallard Duck";
}
