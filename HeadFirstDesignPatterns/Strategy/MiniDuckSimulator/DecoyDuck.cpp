#include "StdAfx.h"
#include "DecoyDuck.h"
#include "FlyNoWay.h"
#include "MuteQuack.h"

DecoyDuck::DecoyDuck()
{
	quackBehavior = shared_ptr<QuackBehavior>(new MuteQuack());
	flyBehavior = shared_ptr<FlyBehavior>(new FlyNoWay());
}

DecoyDuck::~DecoyDuck()
{

}

void DecoyDuck::display()
{
	cout << "I'm a duck Decoy" << endl;
}
