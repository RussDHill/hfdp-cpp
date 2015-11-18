#include "stdafx.h"
#include "DuckAdapter.h"

DuckAdapter::DuckAdapter(shared_ptr<Duck> duck)
	:adapterDuck(duck)
{

}

DuckAdapter::~DuckAdapter()
{

}

void DuckAdapter::fly()
{
	adapterDuck->fly();
}

void DuckAdapter::gobble()
{
	adapterDuck->quack();
}
