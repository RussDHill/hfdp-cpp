#include "stdafx.h"
#include "DuckCall.h"

DuckCall::DuckCall()
{

}

DuckCall::~DuckCall()
{

}

void DuckCall::quack() const
{
	cout << "Kwak" << endl;
}

string DuckCall::toString() const
{
	return "Duck Call";
}
