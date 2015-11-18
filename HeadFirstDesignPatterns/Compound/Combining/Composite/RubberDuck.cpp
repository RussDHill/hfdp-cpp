#include "stdafx.h"
#include "RubberDuck.h"

RubberDuck::RubberDuck()
{

}

RubberDuck::~RubberDuck()
{

}

void RubberDuck::quack() const
{
	cout << "Squeak" << endl;
}

string RubberDuck::toString() const
{
	return "Rubber Duck";
}
