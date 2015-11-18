// ChocolateController.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ChocolateBoiler.h"

int main(int argc, char* argv[])
{
	shared_ptr<ChocolateBoiler> boiler = ChocolateBoiler::getInstance();
	boiler->fill();
	boiler->boil();

	// will return the existing instance
	shared_ptr<ChocolateBoiler> boiler2 = ChocolateBoiler::getInstance();
	boiler->drain();

	return 0;
}

