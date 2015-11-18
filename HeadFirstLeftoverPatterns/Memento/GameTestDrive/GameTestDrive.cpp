// GameTestDrive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Game.h"
#include "Memento.h"

int main(int argc, char* argv[])
{
	string input;
	bool proceed = true;

	shared_ptr<Game> game(new Game());
	shared_ptr<Memento> memento = 0;

	while (proceed)
	{
		cout << "Enter direction left, right, forwards or backwards (l, r, f or b)." << endl;
		cout << "Or enter s to save game or q to quit game: ";
		cin >> input;
		
		if (input.compare("s") == 0) {
			memento.reset(game->createMemento());
			cout << "Save game." << endl;
		} else if (input.compare("q") == 0) {
			cout << "You quit." << endl;
			return 0;
		} else {
			proceed = game->processMove(input);
		}
		
		if ((!proceed) && (memento != 0)) {
			cout << "Would you like to restart your game? (y = yes)" << endl;
			cin >> input;
			if (input.compare("y") == 0) {
				game->reinstateMemento(memento);
				proceed = true;
			}
		}
	}

	return 0;
}
