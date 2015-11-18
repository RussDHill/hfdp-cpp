#include "stdafx.h"
#include "GooseAdapter.h"
#include "Goose.h"

GooseAdapter::GooseAdapter(shared_ptr<Goose> goose)
	:adapterGoose(goose)
{

}

GooseAdapter::~GooseAdapter()
{

}

void GooseAdapter::quack() const
{
	adapterGoose->honk();
}

string GooseAdapter::toString() const
{
	return "Goose pretending to be a Duck";
}