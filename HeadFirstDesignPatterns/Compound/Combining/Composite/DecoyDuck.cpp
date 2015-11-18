#include "StdAfx.h"
#include "DecoyDuck.h"

DecoyDuck::DecoyDuck()
{

}

DecoyDuck::~DecoyDuck()
{

}

void DecoyDuck::quack() const
{
	cout << "<< Silence >>" << endl;
}

string DecoyDuck::toString() const 
{
	return "Decoy Duck";
}
