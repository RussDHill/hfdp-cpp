#include "stdafx.h"
#include "GooseAdapter.h"
#include "Goose.h"
#include "Observable.h"

GooseAdapter::GooseAdapter(shared_ptr<Goose> goose)
	:adapterGoose(goose)
{
	observable = shared_ptr<Observable>(new Observable(this));
}

GooseAdapter::~GooseAdapter()
{

}

void GooseAdapter::registerObserver(Observer* observer)
{
	observable->registerObserver(observer);
}

void GooseAdapter::notifyObservers() const
{
	observable->notifyObservers();
}

void GooseAdapter::quack() const
{
	adapterGoose->honk();
	notifyObservers();
}

string GooseAdapter::toString() const
{
	return "Goose pretending to be a Duck";
}
