// MiniDuckSimulator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Duck.h"
#include "MallardDuck.h"
#include "RubberDuck.h"
#include "DecoyDuck.h"
#include "ModelDuck.h"
#include "FlyRocketPowered.h"

int main(int argc, char* argv[])
{
	shared_ptr<MallardDuck> mallard(new MallardDuck());
	shared_ptr<RubberDuck> rubberDuckie(new RubberDuck());
	shared_ptr<DecoyDuck> decoy(new DecoyDuck());
	shared_ptr<ModelDuck> model(new ModelDuck());

	mallard->performQuack();
	rubberDuckie->performQuack();
	decoy->performQuack();

	model->performFly();
	model->setFlyBehavior(new FlyRocketPowered());
	model->performFly();

	return 0;
}

