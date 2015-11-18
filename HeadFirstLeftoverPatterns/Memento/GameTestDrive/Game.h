#pragma once

#include "State.h"

class Memento;

class Game  
{
public:
	void reinstateMemento(shared_ptr<Memento> memento);
	Memento* createMemento();
	bool processMove(string move);
	Game();
	virtual ~Game();
private:
	State state;

	DISABLE_COPY_AND_ASSIGN(Game)
};
