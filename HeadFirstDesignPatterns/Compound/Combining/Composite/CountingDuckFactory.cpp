#include "stdafx.h"
#include "CountingDuckFactory.h"
#include "DuckCall.h"
#include "MallardDuck.h"
#include "RedHeadDuck.h"
#include "RubberDuck.h"
#include "QuackCounter.h"

CountingDuckFactory::CountingDuckFactory()
{

}

CountingDuckFactory::~CountingDuckFactory()
{

}

shared_ptr<Quackable> CountingDuckFactory::createMallardDuck()
{
	return shared_ptr<Quackable>(new QuackCounter(shared_ptr<Quackable>(new MallardDuck())));
}

shared_ptr<Quackable> CountingDuckFactory::createRedheadDuck()
{
	return shared_ptr<Quackable>(new QuackCounter(shared_ptr<Quackable>(new RedheadDuck())));
}

shared_ptr<Quackable> CountingDuckFactory::createDuckCall()
{
	return shared_ptr<Quackable>(new QuackCounter(shared_ptr<Quackable>(new DuckCall())));
}

shared_ptr<Quackable> CountingDuckFactory::createRubberDuck()
{
	return shared_ptr<Quackable>(new QuackCounter(shared_ptr<Quackable>(new RubberDuck())));
}
