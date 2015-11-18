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
	undoCommand = noCommand;
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
	undoCommand = onCommands[slot];
}

void RemoteControl::offButtonWasPushed(int slot) {
	offCommands[slot]->execute();
	undoCommand = offCommands[slot];
}

void RemoteControl::undoButtonWasPushed() {
	undoCommand->undo();
}

string RemoteControl::toString() const {
	string stringBuff("\n------ Remote Control -------\n");
	for (unsigned int i=0;i<onCommands.size();i++) {
		ostringstream buffer;
		buffer << "[slot" << i << "]   ";
		buffer << typeid(*onCommands.at(i)).name();
		buffer << "\t  ";
		buffer << typeid(*onCommands.at(i)).name();
		buffer << "\n";
		stringBuff.append(buffer.str());
	}
	stringBuff += "[undo] ";
	stringBuff += typeid(*undoCommand).name();
	stringBuff += "\n";
	return stringBuff;
}
