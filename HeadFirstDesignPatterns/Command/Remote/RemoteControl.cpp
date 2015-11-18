#include "stdafx.h"
#include "RemoteControl.h"
#include "IFace.h"
#include "NoCommand.h"

RemoteControl::RemoteControl()
{
	noCommand = shared_ptr<Command>(new NoCommand());
	for (int i=0;i<7;i++) {
		onCommands.push_back(noCommand);
		offCommands.push_back(noCommand);
	}
}

RemoteControl::~RemoteControl()
{

}
 
void RemoteControl::setCommand(int slot, shared_ptr<Command> onCommand, shared_ptr<Command> offCommand) {
	onCommands[slot] = onCommand;
	offCommands[slot] = offCommand;
}

void RemoteControl::onButtonWasPushed(int slot) {
	onCommands[slot]->execute();
}

void RemoteControl::offButtonWasPushed(int slot) {
	offCommands[slot]->execute();
}

string RemoteControl::toString() const {
	ostringstream buffer;
	buffer << endl << "------ Remote Control -------" << endl;
	for (unsigned i=0;i<onCommands.size();i++) {
		buffer << "[slot" << i << "]   ";
		buffer << typeid(*onCommands.at(i)).name();
		buffer << "\t  ";
		buffer << typeid(*offCommands.at(i)).name();
		buffer << endl;
	}
	return buffer.str();
}
