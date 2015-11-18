#pragma once

#include "State.h"

class Memento  
{
public:
	virtual ~Memento();
private:
    friend class Game;
	Memento(State state);
	State& getState();
private:
    State mementoState;

	DISABLE_COPY_AND_ASSIGN(Memento)
};
