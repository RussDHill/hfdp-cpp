#include "StdAfx.h"
#include "MallardDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"

MallardDuck::MallardDuck()
{
	quackBehavior = shared_ptr<QuackBehavior>(new Quack());
	flyBehavior = shared_ptr<FlyBehavior>(new FlyWithWings());
}

MallardDuck::~MallardDuck()
{
	
}

void MallardDuck::display()
{
	cout << "I'm a real Mallard duck" << endl;
}