#include "stdafx.h"
#include "QuackCounter.h"
#include "Observable.h"

int QuackCounter::numberOfQuacks = 0;

QuackCounter::QuackCounter(shared_ptr<Quackable> duck)
	:counterDuck(duck)
{

}

QuackCounter::~QuackCounter()
{

}

void QuackCounter::quack() const
{
	counterDuck->quack();
	numberOfQuacks++;
}

int QuackCounter::getQuacks()
{
	return numberOfQuacks;
}

void QuackCounter::registerObserver(Observer* observer)
{
	counterDuck->registerObserver(observer);
}

void QuackCounter::notifyObservers() const
{
	counterDuck->notifyObservers();
}

string QuackCounter::toString() const
{
	return counterDuck->toString();
}
