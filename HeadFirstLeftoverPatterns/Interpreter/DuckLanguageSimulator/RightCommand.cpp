#include "stdafx.h"
#include "RightCommand.h"

RightCommand::RightCommand()
{

}

RightCommand::~RightCommand()
{

}

void RightCommand::interpret(shared_ptr<Context> context)
{
	cout << "I'm turning right..." << endl;
}
