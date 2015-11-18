#include "StdAfx.h"
#include "RedHeadDuck.h"
#include "FlyWithWings.h"
#include "Quack.h"

RedHeadDuck::RedHeadDuck()
{
	quackBehavior = shared_ptr<QuackBehavior>(new Quack());
	flyBehavior = shared_ptr<FlyBehavior>(new FlyWithWings());
}

RedHeadDuck::~RedHeadDuck()
{

}

void RedHeadDuck::display()
{
	printf("I'm a real Red Headed duck\n");
}