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

DuckSimulator::DuckSimulator()
{

}

DuckSimulator::~DuckSimulator()
{

}

void DuckSimulator::simulate()
{
	shared_ptr<Quackable> mallardDuck(new QuackCounter(shared_ptr<Quackable>(new MallardDuck())));
	shared_ptr<Quackable> redheadDuck(new QuackCounter(shared_ptr<Quackable>(new RedheadDuck())));
	shared_ptr<Quackable> duckCall(new QuackCounter(shared_ptr<Quackable>(new DuckCall())));
	shared_ptr<Quackable> rubberDuck(new QuackCounter(shared_ptr<Quackable>(new RubberDuck())));
	shared_ptr<Quackable> gooseDuck(new GooseAdapter(shared_ptr<Goose>(new Goose())));

	cout << "Duck Simulator: With Decorator" << endl;

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
	simulator->simulate();

	return 0;
}

