#include "stdafx.h"
#include "Quackologist.h"

Quackologist::Quackologist()
{

}

Quackologist::~Quackologist()
{

}

void Quackologist::update(QuackObservable* duck)
{
	cout << "Quackologist: " << duck->toString() << " just quacked." << endl;
}
