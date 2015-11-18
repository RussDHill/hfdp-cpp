// HouseOfTheFuture.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "HouseDirector.h"

int main(int argc, char* argv[])
{
	shared_ptr<HouseDirector> houseDirector(new HouseDirector());
	houseDirector->startSimulation(8);

	return 0;
}

