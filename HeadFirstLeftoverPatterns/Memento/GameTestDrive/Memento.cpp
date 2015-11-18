#include "stdafx.h"
#include "Memento.h"

Memento::Memento(State state)
	:mementoState(state)
{

}

Memento::~Memento()
{

}

State& Memento::getState()
{
	return mementoState;
}
