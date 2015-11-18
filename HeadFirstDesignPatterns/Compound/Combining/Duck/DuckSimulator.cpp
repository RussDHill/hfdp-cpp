// DuckSimulator.cpp: implementation of the CDuckSimulator class.
// Also defines the entry point for the console application.
//

#include "stdafx.h"
#include "DuckSimulator.h"
#include "DuckCall.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "RubberDuck.h"

DuckSimulator::DuckSimulator()
{

}

DuckSimulator::~DuckSimulator()
{

}

void DuckSimulator::simulate()
{
	shared_ptr<Quackable> mallardDuck(new MallardDuck());
	shared_ptr<Quackable> redheadDuck(new RedheadDuck());
	shared_ptr<Quackable> duckCall(new DuckCall());
	shared_ptr<Quackable> rubberDuck(new RubberDuck());

	cout << "Duck Simulator" << endl;

	simulate(mallardDuck);
	simulate(redheadDuck);
	simulate(duckCall);
	simulate(rubberDuck);
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

