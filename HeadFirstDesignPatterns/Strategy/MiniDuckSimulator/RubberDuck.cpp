#include "StdAfx.h"
#include "RubberDuck.h"
#include "FlyNoWay.h"
#include "Squeak.h"

RubberDuck::RubberDuck()
{
	quackBehavior = shared_ptr<QuackBehavior>(new Squeak());
	flyBehavior = shared_ptr<FlyBehavior>(new FlyNoWay());
}

RubberDuck::~RubberDuck()
{

}

void RubberDuck::display()
{
	printf("I'm a rubber duckie\n");
}