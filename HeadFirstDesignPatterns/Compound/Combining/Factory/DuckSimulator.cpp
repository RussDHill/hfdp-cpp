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

DuckSimulator::DuckSimulator()
{

}

DuckSimulator::~DuckSimulator()
{

}

void DuckSimulator::simulate(shared_ptr<AbstractDuckFactory> duckFactory)
{
	shared_ptr<Quackable> mallardDuck(duckFactory->createMallardDuck());
	shared_ptr<Quackable> redheadDuck(duckFactory->createRedheadDuck());
	shared_ptr<Quackable> duckCall(duckFactory->createDuckCall());
	shared_ptr<Quackable> rubberDuck(duckFactory->createRubberDuck());
	shared_ptr<Quackable> gooseDuck(new GooseAdapter(shared_ptr<Goose>(new Goose())));

	cout << "Duck Simulator: With Abstract Factory" << endl;

	simulate(mallardDuck);
	simulate(redheadDuck);
	simulate(duckCall);
	simulate(rubberDuck);
	simulate(gooseDuck);

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

