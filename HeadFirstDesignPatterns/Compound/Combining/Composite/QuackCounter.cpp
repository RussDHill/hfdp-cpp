#include "stdafx.h"
#include "QuackCounter.h"

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

string QuackCounter::toString() const
{
	return counterDuck->toString();
}
