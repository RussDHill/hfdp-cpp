#include "StdAfx.h"
#include "Duck.h"

Duck::Duck(const string& name, int weight)
	:duckName(name), duckWeight(weight)
{

}

Duck::~Duck()
{

}

string Duck::toString() const
{
	ostringstream weight;
	weight << duckName;
	weight << " weighs ";
	weight << duckWeight;
	return weight.str();
}

bool Duck::compareTo(shared_ptr<Duck> first, shared_ptr<Duck> second)
{
	if (first->duckWeight < second->duckWeight) {
		return true;
	} else {
		return false;
	}
}