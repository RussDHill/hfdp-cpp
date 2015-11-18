#include "stdafx.h"
#include "MallardDuck.h"

MallardDuck::MallardDuck()
{

}

MallardDuck::~MallardDuck()
{

}

void MallardDuck::quack() const
{
	cout << "Quack" << endl;
}

string MallardDuck::toString() const
{
	return "Mallard Duck";
}
