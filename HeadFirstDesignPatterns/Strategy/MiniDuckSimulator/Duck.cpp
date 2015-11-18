#include "StdAfx.h"
#include "Duck.h"

Duck::Duck()
{

}

Duck::~Duck()
{

}

void Duck::setFlyBehavior(FlyBehavior* fb)
{
	flyBehavior = shared_ptr<FlyBehavior> (fb);
}
 
void Duck::setQuackBehavior(QuackBehavior* qb)
{
	quackBehavior = shared_ptr<QuackBehavior> (qb);
}
 
void Duck::performFly()
{
	flyBehavior->fly();
}

void Duck::performQuack()
{
	quackBehavior->quack();
}

void Duck::swim()
{
	cout << "All ducks float, even decoys!" << endl;
}
