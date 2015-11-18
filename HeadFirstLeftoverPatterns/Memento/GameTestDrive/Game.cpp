#include "stdafx.h"
#include "Game.h"
#include "Memento.h"

Game::Game()
{
	srand(time(0));
}

Game::~Game()
{

}

bool Game::processMove(string move)
{
	int value = rand() % 10;
	if(value == 0) {
		cout << "You're dead." << endl;
		return false;
	}

	if (state.getSubLevel() == 3) {
		state.resetSubLevel();
		state.incrementLevel();
		if (state.getLevel() == 13) {
			cout << "You have reached the fabled level " << state.getLevel() << ". End of game." << endl;
			exit(0);
		} else {
			cout << "You have reached level " << state.getLevel()  << endl;
		}
	}

	if (move.compare("l") == 0) {
		cout << "You move left." << endl;
	} else if (move.compare("r") == 0) {
		cout << "You move right." << endl;
	} else if (move.compare("f") == 0) {
		cout << "You move forwards." << endl;
	} else if (move.compare("b") == 0) {
		cout << "You move backwards." << endl;
	} else {
		cout << "Illegal move, you're dead." << endl;
		return false;
	}
	state.incrementSubLevel();

	return true;
}

Memento* Game::createMemento()
{
    return new Memento(state);
}

void Game::reinstateMemento(shared_ptr<Memento> memento)
{
    state = memento->getState();
}
