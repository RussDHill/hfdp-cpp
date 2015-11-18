#include "stdafx.h"
#include "FlyCommand.h"

FlyCommand::FlyCommand()
{

}

FlyCommand::~FlyCommand()
{

}

void FlyCommand::interpret(shared_ptr<Context> context)
{
	cout << "I'm flying..." << endl;
}
