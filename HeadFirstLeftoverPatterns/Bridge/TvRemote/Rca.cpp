// Rca.cpp: Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Rca.h"

Rca::Rca()
{

}

Rca::~Rca()
{

}

void Rca::on()
{
	cout << "RCA TV switched on" << endl;
}

void Rca::off()
{
	cout << "RCA TV switched off" << endl;
}

void Rca::tuneChannel(int channel)
{
	cout << "RCA TV tuned to " << channel << endl;
}
