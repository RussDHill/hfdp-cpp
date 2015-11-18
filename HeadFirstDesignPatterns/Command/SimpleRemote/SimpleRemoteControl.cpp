#include "stdafx.h"
#include "SimpleRemoteControl.h"

SimpleRemoteControl::SimpleRemoteControl()
{

}

SimpleRemoteControl::~SimpleRemoteControl()
{

}

void SimpleRemoteControl::setCommand(shared_ptr<Command> command)
{
	slot = command;
}

void SimpleRemoteControl::buttonWasPressed()
{
	slot->execute();
}
