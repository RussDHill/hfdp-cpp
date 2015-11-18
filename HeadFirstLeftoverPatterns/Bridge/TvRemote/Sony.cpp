// Sony.cpp: Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Sony.h"

Sony::Sony()
{

}

Sony::~Sony()
{

}

void Sony::on()
{
	cout << "Sony TV switched on" << endl;
}

void Sony::off()
{
	cout << "Sony TV switched off" << endl;
}

void Sony::tuneChannel(int channel)
{
	cout << "Sony TV tuned to " << channel << endl;
}
