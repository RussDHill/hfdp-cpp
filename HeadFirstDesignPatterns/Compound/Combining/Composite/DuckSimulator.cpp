// DuckSimulator.cpp: implementation of the CDuckSimulator class.
// Also defines the entry point for the console application.
//

#include "stdafx.h"
#include "DuckSimulator.h"
#include "DuckCall.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"
#include "Goose.h"
#include "GooseAdapter.h"
#include "QuackCounter.h"
#include "CountingDuckFactory.h"
#include "Flock.h"

DuckSimulator::DuckSimulator()
{

}

DuckSimulator::~DuckSimulator()
{

}

void DuckSimulator::simulate(shared_ptr<AbstractDuckFactory> duckFactory)
{
	
	shared_ptr<Quackable> redheadDuck = duckFactory->createRedheadDuck();
	shared_ptr<Quackable> duckCall = duckFactory->createDuckCall();
	shared_ptr<Quackable> rubberDuck = duckFactory->createRubberDuck();
	shared_ptr<Quackable> gooseDuck(new GooseAdapter(shared_ptr<Goose>(new Goose())));

	cout << "Duck Simulator: With Composite - Flocks" << endl;

	shared_ptr<Flock> flockOfDucks(new Flock());

	flockOfDucks->add(redheadDuck);
	flockOfDucks->add(duckCall);
	flockOfDucks->add(rubberDuck);
	flockOfDucks->add(gooseDuck);

	shared_ptr<Flock> flockOfMallards(new Flock());

	shared_ptr<Quackable> mallardDuckOne = duckFactory->createMallardDuck();
	shared_ptr<Quackable> mallardDuckTwo = duckFactory->createMallardDuck();
	shared_ptr<Quackable> mallardDuckThree = duckFactory->createMallardDuck();
	shared_ptr<Quackable> mallardDuckFour = duckFactory->createMallardDuck();

	flockOfMallards->add(mallardDuckOne);
	flockOfMallards->add(mallardDuckTwo);
	flockOfMallards->add(mallardDuckThree);
	flockOfMallards->add(mallardDuckFour);

	flockOfDucks->add(flockOfMallards);

	cout << "Duck Simulator: Whole Flock Simulation" << endl;
	simulate(flockOfDucks);

	cout << "Duck Simulator: Mallard Flock Simulation" << endl;
	simulate(flockOfMallards);

	cout << "The ducks quacked " << QuackCounter::getQuacks() << " times" << endl;
}

void DuckSimulator::simulate(shared_ptr<Quackable> duck)
{
	duck->quack();
}

int main(int argc, char* argv[])
{
	
	shared_ptr<DuckSimulator> simulator(new DuckSimulator());
	shared_ptr<AbstractDuckFactory> duckFactory(new CountingDuckFactory());
	simulator->simulate(duckFactory);

	return 0;
}

