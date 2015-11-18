#include "StdAfx.h"
#include "ModelDuck.h"
#include "FlyNoWay.h"
#include "Quack.h"

ModelDuck::ModelDuck()
{
	quackBehavior = shared_ptr<QuackBehavior>(new Quack());
	flyBehavior = shared_ptr<FlyBehavior>(new FlyNoWay());
}

ModelDuck::~ModelDuck()
{

}

void ModelDuck::display()
{
	printf("I'm a model duck\n");
}