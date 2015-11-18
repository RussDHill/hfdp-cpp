#include "stdafx.h"
#include "QuackCommand.h"

QuackCommand::QuackCommand()
{

}

QuackCommand::~QuackCommand()
{

}

void QuackCommand::interpret(shared_ptr<Context> context)
{
	cout << "I'm quacking..." << endl;
}
